import 'package:flutter/material.dart';

class CartPageProducts extends StatefulWidget {
  @override
  _CartPageProductsState createState() => _CartPageProductsState();
}

class _CartPageProductsState extends State<CartPageProducts> {
  var productsOnTheCart = [
    {
      "name": "Women's Blazer",
      "image": "assets/products/blazer2.jpeg",
      "price": 75,
      "size": "M",
      "color": "Black",
      "quantity": 3,
    },
    {
      "name": "Red Hills",
      "image": "assets/products/hills2.jpeg",
      "price": 65,
      "size": "6",
      "color": "Red",
      "quantity": 2,
    },
    {
      "name": "Pink Skirt",
      "image": "assets/products/skt2.jpeg",
      "price": 120,
      "size": "M",
      "color": "Pink",
      "quantity": 1,
    },
  ];

  @override
  Widget build(BuildContext context) {
    return ListView.builder(
      itemCount: productsOnTheCart.length,
      itemBuilder: (context, index) {
        return SingleCartProduct(
          cartProdName: productsOnTheCart[index]['name'],
          cartProdImage: productsOnTheCart[index]['image'],
          cartProdPrice: productsOnTheCart[index]['price'],
          cartProdSize: productsOnTheCart[index]['size'],
          cartProdColor: productsOnTheCart[index]['color'],
          cartProdQty: productsOnTheCart[index]['quantity'],
        );
      },
    );
  }
}

class SingleCartProduct extends StatelessWidget {
  final cartProdName;
  final cartProdImage;
  final cartProdPrice;
  final cartProdSize;
  final cartProdColor;
  final cartProdQty;

  SingleCartProduct(
      {this.cartProdName,
      this.cartProdImage,
      this.cartProdPrice,
      this.cartProdSize,
      this.cartProdColor,
      this.cartProdQty});

  @override
  Widget build(BuildContext context) {
    return Card(
      child: ListTile(
        title: Padding(
          padding: const EdgeInsets.symmetric(vertical: 10.0),
          child: Text(cartProdName),
        ),
        leading: Image.asset(
          cartProdImage,
          width: 80.0,
          height: 150.0,
        ),
        subtitle: Column(
          children: [
            Row(
              children: [
                Padding(
                  padding: EdgeInsets.all(0.0),
                  child: Text("Size: "),
                ),
                Padding(
                  padding: EdgeInsets.all(4.0),
                  child: Text(
                    cartProdSize,
                    style: TextStyle(
                      color: Colors.red,
                    ),
                  ),
                ),
                Padding(
                  padding: EdgeInsets.fromLTRB(10.0, 8.0, 0.0, 8.0),
                  child: Text("Color: "),
                ),
                Padding(
                  padding: EdgeInsets.all(4.0),
                  child: Text(
                    cartProdColor,
                    style: TextStyle(
                      color: Colors.red,
                    ),
                  ),
                ),
                Padding(
                  padding: EdgeInsets.fromLTRB(10.0, 8.0, 0.0, 8.0),
                  child: Text("Qty: "),
                ),
                Padding(
                  padding: EdgeInsets.all(4.0),
                  child: Text(
                    "$cartProdQty",
                    style: TextStyle(
                      color: Colors.red,
                    ),
                  ),
                ),
              ],
            ),
            Padding(
              padding: const EdgeInsets.symmetric(vertical: 10.0),
              child: Container(
                alignment: Alignment.topLeft,
                child: Text(
                  "\$$cartProdPrice",
                  style: TextStyle(
                    fontSize: 17.0,
                    fontWeight: FontWeight.bold,
                    color: Colors.red,
                  ),
                ),
              ),
            )
          ],
        ),
        trailing: Column(
          children: [
            InkWell(
              child: Icon(Icons.arrow_drop_up),
              onTap: () {},
            ),
            Container(
              height: 8,
              width: 8,
              child: Center(
                  // child: CircularProgressIndicator(
                  //   strokeWidth: 2,
                  // ),
                  // child: Text("2"),
                  ),
            ),
            InkWell(
              child: Icon(Icons.arrow_drop_down),
              onTap: () {},
            ),
          ],
        ),
      ),
    );
  }
}
