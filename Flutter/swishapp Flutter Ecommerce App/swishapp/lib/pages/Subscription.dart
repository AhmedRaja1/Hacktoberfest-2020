import 'package:flutter/material.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';
import 'package:swishapp/pages/subscriptiondisplay.dart';

import 'subscriber.dart';

// ignore: must_be_immutable
class Subscription extends StatefulWidget {
  bool first;
  Subscription(this.first);
  @override
  _SubscriptionState createState() => _SubscriptionState();
}

class _SubscriptionState extends State<Subscription> {
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
                    "My Subscriptions",
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
                    "Subscribers",
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
                      padding: const EdgeInsets.only(left: 220.0),
                      child: orangeDivider(),
                    ),
                ],
              ),
            ),
            GestureDetector(
                onTap: () {
                  Navigator.push(context,
                      MaterialPageRoute(builder: (context) => Subscriber()));
                },
                child: SubscipttinDisplay()),
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
