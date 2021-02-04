import 'package:flutter/material.dart';

class ChooseLocation extends StatefulWidget {
  @override
  _ChooseLocationState createState() => _ChooseLocationState();
}

class _ChooseLocationState extends State<ChooseLocation> {
  void getData() async {
    //!gonna simulate a network request for a username
    String username = await Future.delayed(Duration(seconds: 3), () {
      return 'yoshi';
    });

    //!gonna simulate a network request to get bio of the username
    String bio = await Future.delayed(Duration(seconds: 2), () {
      return "weeb, introvert, gamer";
    });

    print("$username -- $bio");
  }

  // int counter = 0;

  @override
  void initState() {
    super.initState();
    // print('initState function ran');

    getData();
    print("this is gonna run as getData is async func, so its non-blocking");
  }

  @override
  Widget build(BuildContext context) {
    // print('build function ran');
    return Scaffold(
      backgroundColor: Colors.grey[200],
      appBar: AppBar(
        backgroundColor: Colors.blue[900],
        title: Text("Choose a Location"),
        centerTitle: true,
        elevation: 0,
      ),
      // body: RaisedButton(
      //   onPressed: () {
      //     setState(() {
      //       counter += 1;
      //     });
      //   },
      //   child: Text("COUNTER IS: $counter"),
      // ),
    );
  }
}
