import 'package:flutter/material.dart';

class HorizontalList extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Container(
      height: 100.0,
      child: ListView(
        scrollDirection: Axis.horizontal,
        children: [
          Category(
            imageLocation: 'assets/cats/tshirt.png',
            imageCaption: 'TSHIRT',
          ),
          Category(
            imageLocation: 'assets/cats/accessories.png',
            imageCaption: 'ACCESSORIES',
          ),
          Category(
            imageLocation: 'assets/cats/dress.png',
            imageCaption: 'DRESS',
          ),
          Category(
            imageLocation: 'assets/cats/formal.png',
            imageCaption: 'FORMAL',
          ),
          Category(
            imageLocation: 'assets/cats/informal.png',
            imageCaption: 'INFORMAL',
          ),
          Category(
            imageLocation: 'assets/cats/jeans.png',
            imageCaption: 'JEANS',
          ),
          Category(
            imageLocation: 'assets/cats/shoe.png',
            imageCaption: 'SHOE',
          ),
        ],
      ),
    );
  }
}

class Category extends StatelessWidget {
  final String imageLocation;
  final String imageCaption;

  Category({this.imageLocation, this.imageCaption});

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: EdgeInsets.all(2.0),
      child: InkWell(
        onTap: () {},
        child: Container(
          width: 100.0,
          child: ListTile(
            title: Image.asset(
              imageLocation,
              width: 100.0,
              height: 80.0,
            ),
            subtitle: Container(
              alignment: Alignment.topCenter,
              child: Text(
                imageCaption,
                style: TextStyle(
                  fontSize: 10.0,
                  fontWeight: FontWeight.bold,
                ),
              ),
            ),
          ),
        ),
      ),
    );
  }
}
