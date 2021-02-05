import 'package:http/http.dart';
import 'dart:convert';
import 'package:intl/intl.dart';

class WorldTime {
  String location;
  String time;
  String flag;
  String url;
  bool isDaytime;

  WorldTime({this.location, this.flag, this.url});

  Future<void> getTime() async {
    try {
      Response response =
          await get('http://worldtimeapi.org/api/timezone/$url');
      Map data = jsonDecode(response.body);
      // print(data);
      String dateTime = data['datetime'];
      String offset = data['utc_offset'].substring(1, 3);
      // print(dateTime);
      // print(offset);

      DateTime now = DateTime.parse(dateTime);
      now = now.add(Duration(hours: int.parse(offset)));
      now = now.add(Duration(minutes: 30));
      // print(now);
      // time = now.toString();
      isDaytime = now.hour > 6 && now.hour < 20 ? true : false;
      time = DateFormat.jm().format(now);

      // Response response =
      //     await get('https://jsonplaceholder.typicode.com/todos/1');
      // Map data = jsonDecode(response.body);
      // print(data);
      // print(data['title']);

      // //*gonna simulate a network request for a username
      // String username = await Future.delayed(Duration(seconds: 3), () {
      //   return 'yoshi';
      // });

      // //*gonna simulate a network request to get bio of the username
      // String bio = await Future.delayed(Duration(seconds: 2), () {
      //   return "weeb, introvert, gamer";
      // });

      // print("$username -- $bio");
    } catch (e) {
      print("CAUGHT ERROR: $e");
      time = 'could not get time data';
    }
  }
}
