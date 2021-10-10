import 'package:flutter/material.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';
import 'package:swishapp/pages/followers.dart';
import 'package:swishapp/pages/following.dart';

// ignore: must_be_immutable
class DisplayFollowersPage extends StatefulWidget {
  bool first;
  DisplayFollowersPage(this.first);
  @override
  _DisplayFollowersPageState createState() => _DisplayFollowersPageState();
}

class _DisplayFollowersPageState extends State<DisplayFollowersPage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        centerTitle: true,
        title: Text(
          'Display User Name',
          style: TextStyle(
            color: Colors.black,
          ),
        ),
        backgroundColor: Colors.white,
        leading: InkWell(
          onTap: () {
            Navigator.pop(context);
          },
          child: Icon(
            Icons.arrow_back_ios,
            color: Colors.black,
          ),
        ),
        actions: [
          IconButton(
              icon: Icon(FontAwesomeIcons.userPlus,
                  size: 20, color: Colors.black),
              onPressed: () {}),
        ],
      ),
      body: SingleChildScrollView(
        child: Column(
          children: [
            SizedBox(
              height: 20,
            ),
            Row(
              mainAxisAlignment: MainAxisAlignment.spaceAround,
              children: [
                GestureDetector(
                  onTap: () {
                    setState(() {
                      widget.first = true;
                    });
                  },
                  child: Text(
                    "Following",
                    style: TextStyle(
                        fontSize: 18,
                        color: widget.first ? Color(0xFFFF5D55) : Colors.black),
                  ),
                ),
                GestureDetector(
                  onTap: () {
                    setState(() {
                      widget.first = false;
                    });
                  },
                  child: Text(
                    "Followers",
                    style: TextStyle(
                        fontSize: 18,
                        color: widget.first ? Colors.black : Color(0xFFFF5D55)),
                  ),
                ),
              ],
            ),
            Padding(
              padding: const EdgeInsets.fromLTRB(15, 0, 15, 0),
              child: Stack(
                children: [
                  Divider(
                    color: Colors.grey,
                  ),
                  if (widget.first)
                    Padding(
                      padding: const EdgeInsets.only(left: 30.0),
                      child: orangeDivider(),
                    )
                  else
                    Padding(
                      padding: const EdgeInsets.only(left: 210.0),
                      child: orangeDivider(),
                    ),
                ],
              ),
            ),
            widget.first ? Following() : Followers()
          ],
        ),
      ),
    );
  }
}

SizedBox orangeDivider() {
  return SizedBox(
    width: 90,
    child: Divider(
      thickness: 4,
      color: Color(0xFFFF5D55),
    ),
  );
}
