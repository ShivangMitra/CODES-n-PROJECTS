import 'package:flutter/material.dart';
import 'package:world_time/services/world_time.dart';
import 'package:flutter_spinkit/flutter_spinkit.dart';

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
      'isDaytime': instance.isDaytime,
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
      backgroundColor: Colors.blue[900],
      body: Center(
        child: SpinKitCubeGrid(
          color: Colors.white,
          size: 80.0,
        ),
      ),
    );
  }
}
