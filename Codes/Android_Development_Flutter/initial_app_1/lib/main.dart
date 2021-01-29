import 'package:flutter/material.dart';

void main() => runApp(MaterialApp(home: Home()));

class Home extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Zephyrus"),
        centerTitle: true,
        backgroundColor: Colors.orange[800],
      ),
      body: Center(
        child: Icon(Icons.airport_shuttle),

        // child: Image(
        //   image: AssetImage('assets/Minato.png'),

        // image: NetworkImage(
        //     "https://media.discordapp.net/attachments/531392803133980675/803328799546277948/20210125_234923.jpg"),
        // ),

        // child: Text(
        //   "hello chantus",
        //   style: TextStyle(
        //     color: Colors.orange[800],
        //     fontSize: 20.0,
        //     fontWeight: FontWeight.bold,
        //     letterSpacing: 2.0,
        //     fontFamily: "HachiMaru",
        //   ),
        // ),
      ),
      floatingActionButton: FloatingActionButton(
        onPressed: () {},
        child: Text("Click"),
        backgroundColor: Colors.orange[800],
      ),
    );
  }
}
