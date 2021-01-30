import 'package:flutter/material.dart';
import 'login.dart';

void main() {
  runApp(MyApp());
}

class Post{
  String body;
  String author;
  int likes = 0;
  bool userLiked = false;

  Post(this.body, this.author);

  void likePost(){
    this.userLiked = !this.userLiked;
    if(this.userLiked){
      this.likes += 1;
    }
    else{
      this.likes -= 1;
    }
  }
}

class MyApp extends StatelessWidget {
  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Zephs App',
      theme: ThemeData(
        // This is the theme of your application.
        //
        // Try running your application with "flutter run". You'll see the
        // application has a blue toolbar. Then, without quitting the app, try
        // changing the primarySwatch below to Colors.green and then invoke
        // "hot reload" (press "r" in the console where you ran "flutter run",
        // or simply save your changes to "hot reload" in a Flutter IDE).
        // Notice that the counter didn't reset back to zero; the application
        // is not restarted.
        primarySwatch: Colors.blueGrey,
        // This makes the visual density adapt to the platform that you run
        // the app on. For desktop platforms, the controls will be smaller and
        // closer together (more dense) than on mobile platforms.
        visualDensity: VisualDensity.adaptivePlatformDensity,
      ),
      home: LoginPage(),
    );
  }
}

// class MyHomePage extends StatelessWidget{
//   @override
//   Widget build(BuildContext context){
//     return Scaffold(appBar: AppBar(title: Text("Hi Zephyrus")),
//     body: TextInputWidget()
//     );
//     // body: Column(children: <Widget>[TestWidget(), TestWidget(), TestWidget()],//same goes for a Row
//     // ));
//   }
// }

class MyHomePage extends StatefulWidget {
  final String name;

  MyHomePage(this.name);

  @override
  _MyHomePageState createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {
  List<Post> posts = [];

  void newPost(String text){
    this.setState(() {
      posts.add(new Post(text, widget.name));
    });
  }

  @override
  Widget build(BuildContext context){
    return Scaffold(
      appBar: AppBar(title: Text("Hi Zephyrus")),
      body: Column(children: <Widget>[
        Expanded(child: PostList(this.posts)),
        TextInputWidget(this.newPost),
      ]),
    );
  }
}

// class TestWidget extends StatelessWidget{
//   @override
//   Widget build(BuildContext context){
//     return Text("Hello...");
//   }
// }


//stful
class TextInputWidget extends StatefulWidget {
  final Function(String) callback;

  TextInputWidget(this.callback); // ()-requires ({})-optional named parameter ([])-optional unnamed parameter

  @override
  _TextInputWidgetState createState() => _TextInputWidgetState();
}

class _TextInputWidgetState extends State<TextInputWidget> {
  final controller = TextEditingController();

  // String text;

  @override
  void dispose(){
    super.dispose();//clean the stuff in the widget when it has been used
    controller.dispose();
  }

  // void changeText(text){
  //   if(text == "chintu"){
  //     controller.clear();
  //     text = "";
  //   }
  //   setState(() {
  //     this.text = text;// setState is to refresh and redraw the widget 
  //   });
  // }

//   @override
//   Widget build(BuildContext context) {
//     return Column(children: <Widget>[
//       TextField(
//         controller: this.controller,
//         decoration: InputDecoration(
//           prefixIcon: Icon(Icons.message), labelText: "Type a message:"),
//           // onChanged: (text) => this.changeText(text),
//       ),
//       // Text(controller.text)
//     ]);
//   }
// }


  void click(){
    widget.callback(controller.text);
    controller.clear();
    FocusScope.of(context).unfocus();
  } 

  @override
  Widget build(BuildContext context) {
    return TextField(
        controller: this.controller,
        decoration: InputDecoration(
          prefixIcon: Icon(Icons.message),
          labelText: "Type a message",
          suffixIcon: IconButton(
            icon: Icon(Icons.send),
            splashColor: Colors.deepOrange,
            tooltip: "Post Message",
            onPressed: this.click,
          )
        )
      );
  }
}

class PostList extends StatefulWidget {

  final List<Post> listItems;

  PostList(this.listItems);

  @override
  _PostListState createState() => _PostListState();
}

class _PostListState extends State<PostList> {
  void like(Function callback){
    this.setState(() {
      callback();
    });
  }


  @override
  Widget build(BuildContext context) {
    return ListView.builder(
      itemCount: this.widget.listItems.length,
      itemBuilder: (context, index) {
        var post = this.widget.listItems[index];
        return Card(
          child: Row(
            children: <Widget>[
              Expanded(
                child: ListTile(
                  title: Text(post.body),
                  subtitle: Text(post.author)
                )
              ),
              Row(
                children: <Widget>[
                  Container(
                    child: Text(
                      post.likes.toString(),
                      style: TextStyle(fontSize: 20)
                    ),
                    padding: EdgeInsets.fromLTRB(0, 0, 10, 0),
                  ),
                  IconButton(
                    icon: Icon(Icons.thumb_up),
                    onPressed: () => this.like(post.likePost),
                    color: post.userLiked ? Colors.blue : Colors.black
                  )
                ]
              )
            ]
          )
        );
      },
    );
  }
}