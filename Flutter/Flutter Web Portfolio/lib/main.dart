import 'package:flutter/material.dart';

import 'Views/MyHomePage.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      theme: ThemeData(
          fontFamily: 'Mont', scaffoldBackgroundColor: Color(0xff1b1717)),
      title: 'Portfolio',
      home: MyHomePage(),
    );
  }
}
