import 'package:flutter/material.dart';
import 'package:world_time/services/world_time.dart';

class Loading extends StatefulWidget {
  @override
  _LoadingState createState() => _LoadingState();
}

class _LoadingState extends State<Loading> {
  // String time = 'loading';

  void setupWorldTime() async {
    WorldTime instance =
        WorldTime(location: 'India', flag: 'ind.png', url: 'Asia/Kolkata');
    await instance.getTime();
    // print(instance.time);
    // setState(() {
    //   time = instance.time;
    // });

    Navigator.pushReplacementNamed(context, '/home', arguments: {
      'location': instance.location,
      'flag': instance.flag,
      'time': instance.time,
    });
  }

  // void getData() async {
  // int counter = 0;

  @override
  void initState() {
    super.initState();
    // print('initState function ran');

    setupWorldTime();
    // getData();
    // print("this is gonna run as getData is async func, so its non-blocking");
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Padding(
        padding: const EdgeInsets.all(50.0),
        child: Text('loading'),
      ),
    );
  }
}
