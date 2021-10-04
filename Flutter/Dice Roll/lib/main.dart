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
  void roll_the_dices() {
    left = Random().nextInt(6) + 1;
    right = Random().nextInt(6) + 1;
  }

  Widget build(BuildContext context) {
    return Center(
      child: Row(
        children: <Widget>[
          Expanded(
            flex: 2,
            child: FlatButton(
              onPressed: () {
                setState(() {
                  roll_the_dices();
                });
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
                  roll_the_dices();
                });
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
