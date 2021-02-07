import 'package:flutter/material.dart';
import 'package:carousel_pro/carousel_pro.dart';

//my imports
// import 'components/horizontal_listview.dart';
import 'package:fashion_app/components/horizontal_listview.dart';
import 'package:fashion_app/components/products.dart';
import 'package:fashion_app/pages/cart.dart';

void main() {
  runApp(MaterialApp(
    debugShowCheckedModeBanner: false,
    home: HomePage(),
  ));
}

class HomePage extends StatefulWidget {
  @override
  _HomePageState createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
  @override
  Widget build(BuildContext context) {
    Widget image_carousel = Container(
      height: 200.0,
      child: Carousel(
        boxFit: BoxFit.cover,
        images: [
          AssetImage('assets/w3.jpeg'),
          AssetImage('assets/w4.jpeg'),
          AssetImage('assets/c1.jpg'),
          AssetImage('assets/m1.jpeg'),
          AssetImage('assets/m2.jpg'),
          AssetImage('assets/w1.jpeg'),
          AssetImage('assets/w2.JPG'),
        ],
        autoplay: true,
        animationCurve: Curves.fastOutSlowIn,
        animationDuration: Duration(seconds: 1),
        dotSize: 4.0,
        dotColor: Colors.red,
        dotBgColor: Colors.transparent,
        // dotBgColor: Colors.red.withOpacity(0.5),
        indicatorBgPadding: 10.0,
      ),
    );

    return Scaffold(
      appBar: AppBar(
        backgroundColor: Colors.red,
        title: Text("Fashion App"),
        actions: [
          IconButton(
            icon: Icon(
              Icons.search,
              color: Colors.white,
            ),
            onPressed: () {},
          ),
          IconButton(
            icon: Icon(
              Icons.shopping_cart,
              color: Colors.white,
            ),
            onPressed: () {
              Navigator.push(
                  context, MaterialPageRoute(builder: (context) => Cart()));
            },
          ),
        ],
      ),
      drawer: Drawer(
        child: ListView(
          children: [
            UserAccountsDrawerHeader(
              accountName: Text("Shivang Mitra"),
              accountEmail: Text("shivangmitra8@gmail.com"),
              currentAccountPicture: GestureDetector(
                child: CircleAvatar(
                  backgroundColor: Colors.grey,
                  child: Icon(
                    Icons.person,
                    color: Colors.white,
                  ),
                ),
              ),
              decoration: BoxDecoration(
                color: Colors.red,
              ),
            ),
            InkWell(
              onTap: () {},
              child: ListTile(
                title: Text("Home Page"),
                leading: Icon(
                  Icons.home,
                  color: Colors.red,
                ),
              ),
            ),
            InkWell(
              onTap: () {},
              child: ListTile(
                title: Text("My Account"),
                leading: Icon(
                  Icons.person,
                  color: Colors.red,
                ),
              ),
            ),
            InkWell(
              onTap: () {},
              child: ListTile(
                title: Text("My Orders"),
                leading: Icon(
                  Icons.shopping_basket,
                  color: Colors.red,
                ),
              ),
            ),
            InkWell(
              onTap: () {
                Navigator.push(
                    context, MaterialPageRoute(builder: (context) => Cart()));
              },
              child: ListTile(
                title: Text("My Cart"),
                leading: Icon(
                  Icons.shopping_cart,
                  color: Colors.red,
                ),
              ),
            ),
            InkWell(
              onTap: () {},
              child: ListTile(
                title: Text("Favorites"),
                leading: Icon(
                  Icons.favorite,
                  color: Colors.red,
                ),
              ),
            ),
            Divider(),
            InkWell(
              onTap: () {},
              child: ListTile(
                title: Text("Settings"),
                leading: Icon(
                  Icons.settings,
                  color: Colors.blue,
                ),
              ),
            ),
            InkWell(
              onTap: () {},
              child: ListTile(
                title: Text("About"),
                leading: Icon(
                  Icons.help,
                  color: Colors.green[300],
                ),
              ),
            ),
          ],
        ),
      ),
      body: ListView(
        children: [
          //carousel starts here
          image_carousel,

          //padding
          Padding(
            padding: EdgeInsets.all(8.0),
            child: Text("Categories"),
          ),

          //horizontal list view starts here
          HorizontalList(),

          //padding
          Padding(
            padding: EdgeInsets.all(8.0),
            child: Text("Recent Products"),
          ),

          //grid view starts here
          Container(
            height: 320.0,
            child: Products(),
          )
        ],
      ),
    );
  }
}
