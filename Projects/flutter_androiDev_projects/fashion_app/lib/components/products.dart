import 'package:flutter/material.dart';

//my imports
import 'package:fashion_app/pages/product_details.dart';

class Products extends StatefulWidget {
  @override
  _ProductsState createState() => _ProductsState();
}

class _ProductsState extends State<Products> {
  var productList = [
    {
      "name": "Men's Blazer",
      "image": "assets/products/blazer1.jpeg",
      "old_price": 120,
      "price": 85,
    },
    {
      "name": "Women's Blazer",
      "image": "assets/products/blazer2.jpeg",
      "old_price": 100,
      "price": 75,
    },
    {
      "name": "Red Dress",
      "image": "assets/products/dress1.jpeg",
      "old_price": 200,
      "price": 100,
    },
    {
      "name": "Black Dress",
      "image": "assets/products/dress2.jpeg",
      "old_price": 160,
      "price": 65,
    },
    {
      "name": "Fancy Hills",
      "image": "assets/products/hills1.jpeg",
      "old_price": 90,
      "price": 55,
    },
    {
      "name": "Red Hills",
      "image": "assets/products/hills2.jpeg",
      "old_price": 80,
      "price": 65,
    },
    {
      "name": "Black Pant",
      "image": "assets/products/pants1.jpg",
      "old_price": 70,
      "price": 55,
    },
    {
      "name": "Grey Pant",
      "image": "assets/products/pants2.jpeg",
      "old_price": 90,
      "price": 85,
    },
    {
      "name": "Shoe",
      "image": "assets/products/shoe1.jpg",
      "old_price": 100,
      "price": 85,
    },
    {
      "name": "Flower Skirt",
      "image": "assets/products/skt1.jpeg",
      "old_price": 120,
      "price": 80,
    },
    {
      "name": "Pink Skirt",
      "image": "assets/products/skt2.jpeg",
      "old_price": 220,
      "price": 120,
    },
  ];

  @override
  Widget build(BuildContext context) {
    return GridView.builder(
      itemCount: productList.length,
      gridDelegate:
          SliverGridDelegateWithFixedCrossAxisCount(crossAxisCount: 2),
      itemBuilder: (BuildContext context, int index) {
        return SingleProduct(
          productName: productList[index]['name'],
          productImage: productList[index]['image'],
          productOldPrice: productList[index]['old_price'],
          productPrice: productList[index]['price'],
        );
      },
    );
  }
}

class SingleProduct extends StatelessWidget {
  final productName;
  final productImage;
  final productOldPrice;
  final productPrice;

  SingleProduct({
    this.productName,
    this.productImage,
    this.productOldPrice,
    this.productPrice,
  });

  @override
  Widget build(BuildContext context) {
    return Card(
      child: Hero(
        tag: productName,
        child: Material(
          child: InkWell(
            onTap: () => Navigator.of(context).push(MaterialPageRoute(
                builder: (context) => ProductDetails(
                      productDetailName: productName,
                      productDetailImage: productImage,
                      productDetailOldPrice: productOldPrice,
                      productDetailPrice: productPrice,
                    ))),
            child: GridTile(
              footer: Container(
                color: Colors.white70,
                child: Row(
                  children: [
                    Expanded(
                      child: Text(
                        productName,
                        style: TextStyle(
                          fontWeight: FontWeight.bold,
                          fontSize: 16.0,
                        ),
                      ),
                    ),
                    Padding(
                      padding: const EdgeInsets.fromLTRB(0.0, 0.0, 5.0, 0.0),
                      child: Text(
                        "\$$productOldPrice",
                        style: TextStyle(
                          color: Colors.grey,
                          fontWeight: FontWeight.bold,
                          decoration: TextDecoration.lineThrough,
                          fontSize: 16.0,
                        ),
                      ),
                    ),
                    Text(
                      "\$$productPrice",
                      style: TextStyle(
                        color: Colors.red,
                        fontWeight: FontWeight.bold,
                        fontSize: 16.0,
                      ),
                    ),
                  ],
                ),

                // child: ListTile(
                //   leading: Padding(
                //     padding: const EdgeInsets.fromLTRB(0.0, 12.0, 0.0, 0.0),
                //     child: Text(
                //       productName,
                //       style: TextStyle(
                //         fontWeight: FontWeight.bold,
                //       ),
                //     ),
                //   ),
                //   title: Text(
                //     "\$$productPrice",
                //     style: TextStyle(
                //       color: Colors.red,
                //       fontWeight: FontWeight.w800,
                //     ),
                //   ),
                //   subtitle: Text(
                //     "\$$productOldPrice",
                //     style: TextStyle(
                //       color: Colors.black54,
                //       fontWeight: FontWeight.w800,
                //       decoration: TextDecoration.lineThrough,
                //     ),
                //   ),
                // ),
              ),
              child: Image.asset(
                productImage,
                fit: BoxFit.cover,
              ),
            ),
          ),
        ),
      ),
    );
  }
}
