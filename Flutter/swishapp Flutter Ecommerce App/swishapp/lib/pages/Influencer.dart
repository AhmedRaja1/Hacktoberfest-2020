import 'package:flutter/material.dart';

class Influencer extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Container(
        child: Column(
      children: [
        Container(
            height: 50,
            child: Row(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                Image.asset("assets/log/level.PNG"),
                SizedBox(
                  width: 20,
                ),
                Text(
                  "How to level Up?",
                  style: TextStyle(fontWeight: FontWeight.bold, fontSize: 20),
                )
              ],
            )),
        Padding(
          padding: const EdgeInsets.all(8.0),
          child: Divider(
            color: Colors.grey,
          ),
        ),
        Image.asset("assets/log/levelrow.PNG"),
        SizedBox(height: 30),
        BottomMenu("Watch videos"),
        BottomMenu("Post Videos"),
        BottomMenu("Gain Followers"),
        BottomMenu("Recieve Gifts")
      ],
    ));
  }
}

class BottomMenu extends StatelessWidget {
  final String text;
  BottomMenu(this.text);
  @override
  Widget build(BuildContext context) {
    return GestureDetector(
      onTap: () {},
      child: Padding(
        padding: const EdgeInsets.all(8.0),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            Text(
              text,
              style: TextStyle(fontSize: 20),
            ),
            Divider(color: Colors.grey),
          ],
        ),
      ),
    );
  }
}
