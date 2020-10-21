//import 'package:flutter/foundation.dart';
import 'dart:math';
import 'package:flutter/material.dart';

void main() {
  return runApp(
    MaterialApp(
      debugShowCheckedModeBanner: false,
      home: Scaffold(
        backgroundColor: Colors.grey[300],
        appBar: AppBar(
          centerTitle: true,
          title: Text('Roll The Dice'),
          backgroundColor: Colors.teal,
        ),
        body: DicePage(),
      ),
    ),
  );
}

class DicePage extends StatefulWidget {
  @override
  _DicePageState createState() => _DicePageState();
}

class _DicePageState extends State<DicePage> {
  @override
  var left = Random().nextInt(6) + 1;
  var right = Random().nextInt(6) + 1;
  void doit() {
    left = Random().nextInt(6) + 1;
    right = Random().nextInt(6) + 1;
  }

  Widget build(BuildContext context) {
    return Center(
      child: Row(
//      mainAxisAlignment: MainAxisAlignment.spaceEvenly,
        children: <Widget>[
          Expanded(
            flex: 2,
            child: FlatButton(
              onPressed: () {
                setState(() {
                  doit();
                });
                print('Left Button Pressed');
              },
              child: Image(
                image: AssetImage('images/dice$left.png'),
                color: Colors.black,
              ),
            ),
          ),
          Expanded(
            flex: 2,
            child: FlatButton(
              onPressed: () {
                setState(() {
                  doit();
                });
                print('Right Button Pressed');
              },
              child: Image(
                color: Colors.black,
                image: AssetImage('images/dice$right.png'),
              ),
            ),
          ),
        ],
      ),
    );
  }
}
//class DicePage extends StatelessWidget {}
