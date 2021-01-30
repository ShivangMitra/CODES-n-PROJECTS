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
      body: Row(
        children: [
          Expanded(
            flex: 3,
            child: Image.asset("assets/Minato.png"),
          ),
          Expanded(
            flex: 3,
            child: Container(
              padding: EdgeInsets.all(30.0),
              color: Colors.cyan,
              child: Text("One"),
            ),
          ),
          Expanded(
            flex: 2,
            child: Container(
              padding: EdgeInsets.all(40.0),
              color: Colors.pinkAccent,
              child: Text("Two"),
            ),
          ),
          Expanded(
            flex: 1,
            child: Container(
              padding: EdgeInsets.all(50.0),
              color: Colors.amber,
              child: Text("Three"),
            ),
          ),
        ],
      ),

      // Column(
      //   mainAxisAlignment: MainAxisAlignment.spaceEvenly,
      //   crossAxisAlignment: CrossAxisAlignment.end,
      //   children: [
      //     Row(
      //       children: [Text("hello"), Text("World")],
      //     ),
      //     Container(
      //       color: Colors.cyan,
      //       padding: EdgeInsets.all(20.0),
      //       child: Text("One"),
      //     ),
      //     Container(
      //       color: Colors.pinkAccent,
      //       padding: EdgeInsets.all(30.0),
      //       child: Text("Two"),
      //     ),
      //     Container(
      //       color: Colors.amber,
      //       padding: EdgeInsets.all(40.0),
      //       child: Text("Three"),
      //     ),
      //   ],
      // ),

      // Row(
      //   mainAxisAlignment: MainAxisAlignment.spaceEvenly,
      //   crossAxisAlignment: CrossAxisAlignment.center,
      //   children: [
      //     Text("Hello World"),
      //     FlatButton(
      //       onPressed: () {},
      //       color: Colors.amber,
      //       child: Text("Click me"),
      //     ),
      //     Container(
      //       color: Colors.cyan,
      //       padding: EdgeInsets.all(30.0),
      //       child: Text("Inside Container"),
      //     )
      //   ],
      // ),

      // Padding(
      //   padding: EdgeInsets.all(40.0),
      //   child: Text("Hello There"),
      // ),

      // Container(
      //   color: Colors.yellow,
      //   child: Text("hello"),
      //   padding: EdgeInsets.all(50.0),
      //   margin: EdgeInsets.all(30.0),
      // ),

      // Center(
      // child: IconButton(
      //   onPressed: () {
      //     print("You cicked me");
      //   },
      //   icon: Icon(Icons.alternate_email),
      //   color: Colors.amber,
      // ),

      // child: RaisedButton.icon(
      //   icon: Icon(Icons.mail),
      //   onPressed: () {},
      //   label: Text("mail me"),
      //   color: Colors.amber,
      // ),

      // child: FlatButton(
      // child: RaisedButton(
      //   onPressed: () {
      //     print("You spanked me");
      //   },
      //   child: Text("spank me"),
      //   color: Colors.lightBlue[200],
      // ),

      // child: Icon(
      //   Icons.airport_shuttle,
      //   color: Colors.lightBlue,
      //   size: 50.0,
      // ),

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
      // ),
      floatingActionButton: FloatingActionButton(
        onPressed: () {},
        child: Text("Click"),
        backgroundColor: Colors.orange[800],
      ),
    );
  }
}
