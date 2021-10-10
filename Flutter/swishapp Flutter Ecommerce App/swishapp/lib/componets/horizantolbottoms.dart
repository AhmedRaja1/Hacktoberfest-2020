import 'package:flutter/material.dart';

class Buttom extends StatefulWidget {
  @override
  _ButtomState createState() => _ButtomState();
}

class _ButtomState extends State<Buttom> {
  bool home = true;
  bool women = false;
  bool men = false;
  bool kids = false;

  @override
  Widget build(BuildContext context) {
    return Column(children: [
      Divider(
        color: Colors.grey,
      ),
      SingleChildScrollView(
        scrollDirection: Axis.horizontal,
        child: Row(
          mainAxisAlignment: MainAxisAlignment.spaceEvenly,
          children: [
            GestureDetector(
              onTap: () {
                setState(() {
                  home = true;
                  women = false;
                  men = false;
                  kids = false;
                  home = true;
                });
              },
              child: Container(
                width: 100,
                height: 50,
                child: Card(
                  child: Center(
                      child: Text(
                    "home".toUpperCase(),
                    style:
                        TextStyle(color: home ? Colors.orange : Colors.black),
                  )),
                  elevation: 2,
                  shape: RoundedRectangleBorder(
                    side: home
                        ? BorderSide(color: Colors.orange, width: 2.0)
                        : BorderSide(color: Colors.white, width: 2.0),
                    borderRadius: BorderRadius.circular(40.0),
                  ),
                ),
              ),
            ),
            GestureDetector(
              onTap: () {
                setState(() {
                  home = false;
                  women = true;
                  men = false;
                  kids = false;
                });
              },
              child: Container(
                width: 100,
                height: 50,
                child: Card(
                  child: Center(
                      child: Text(
                    "women".toUpperCase(),
                    style:
                        TextStyle(color: women ? Colors.orange : Colors.black),
                  )),
                  elevation: 2,
                  shape: RoundedRectangleBorder(
                    side: women
                        ? BorderSide(color: Colors.orange, width: 2.0)
                        : BorderSide(color: Colors.white, width: 2.0),
                    borderRadius: BorderRadius.circular(40.0),
                  ),
                ),
              ),
            ),
            GestureDetector(
              onTap: () {
                setState(() {
                  home = false;
                  women = false;
                  men = true;
                  kids = false;
                });
              },
              child: Container(
                width: 100,
                height: 50,
                child: Card(
                  child: Center(
                      child: Text(
                    "men".toUpperCase(),
                    style: TextStyle(color: men ? Colors.orange : Colors.black),
                  )),
                  elevation: 2,
                  shape: RoundedRectangleBorder(
                    side: men
                        ? BorderSide(color: Colors.orange, width: 2.0)
                        : BorderSide(color: Colors.white, width: 2.0),
                    borderRadius: BorderRadius.circular(40.0),
                  ),
                ),
              ),
            ),
            GestureDetector(
              onTap: () {
                setState(() {
                  home = false;
                  women = false;
                  men = false;
                  kids = true;
                });
              },
              child: Container(
                width: 100,
                height: 50,
                child: Card(
                  child: Center(
                      child: Text(
                    "kids".toUpperCase(),
                    style:
                        TextStyle(color: kids ? Colors.orange : Colors.black),
                  )),
                  elevation: 2,
                  shape: RoundedRectangleBorder(
                    side: kids
                        ? BorderSide(color: Colors.orange, width: 2.0)
                        : BorderSide(color: Colors.white, width: 2.0),
                    borderRadius: BorderRadius.circular(40.0),
                  ),
                ),
              ),
            ),
          ],
        ),
      ),
    ]);
  }
}
