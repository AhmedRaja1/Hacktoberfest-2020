import 'package:flutter/material.dart';

class Affiliate extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Container(
      child: Column(
        children: [
          Container(
              height: 150,
              child: Column(
                crossAxisAlignment: CrossAxisAlignment.center,
                children: [
                  Image.asset("assets/log/afficon.PNG"),
                  Text(
                    "How to become an affiliate?",
                    style:
                        TextStyle(fontWeight: FontWeight.bold, fontSize: 23.5),
                  )
                ],
              )),
          BottomMenu("Reach 50 followers", 12, 50),
          BottomMenu("Stream a total of 8 hours", 2, 8),
          BottomMenu("Stream 7 different days", 1, 7),
          BottomMenux(
              "3 spectators on average", 1, 3, "in 0.01 hours streamed"),
          SizedBox(height: 20),
          Container(
            width: MediaQuery.of(context).size.width / 1.1,
            height: MediaQuery.of(context).size.height / 10,
            child: Card(
              elevation: 0,
              color: Colors.grey[200],
              child: Padding(
                padding: const EdgeInsets.all(8.0),
                child: Row(children: [
                  Flexible(
                    child: Text(
                      "Performance over 30 days",
                      style: TextStyle(fontSize: 15),
                    ),
                  ),
                  Flexible(
                    child: Text(
                      "view statistics for the last 30 days",
                      style: TextStyle(
                        fontSize: 12,
                        color: Colors.red,
                        decoration: TextDecoration.underline,
                      ),
                    ),
                  ),
                ]),
              ),
            ),
          ),
          Container(
            height: 120,
            child: Padding(
              padding: const EdgeInsets.all(8.0),
              child: Row(
                children: [
                  Flexible(
                    child: RichText(
                      text: new TextSpan(
                        // Note: Styles for TextSpans must be explicitly defined.
                        // Child text spans will inherit styles from parent
                        style: new TextStyle(
                          fontSize: 14.0,
                          color: Colors.black,
                        ),
                        children: <TextSpan>[
                          new TextSpan(
                              text:
                                  "To be eligible for the affiliate program, you must meet these four criteria for a period of 30 days. All calculations are made to the exclusion of premieres, Reruns of Subscriber Streams and movie showing. "),
                          new TextSpan(
                              text: 'Learn more',
                              style: new TextStyle(
                                  fontWeight: FontWeight.bold,
                                  color: Colors.red)),
                        ],
                      ),
                    ),
                  )
                ],
              ),
            ),
          ),
        ],
      ),
    );
  }
}

class BottomMenu extends StatelessWidget {
  final String text;
  final int number1;
  final int number2;

  BottomMenu(this.text, this.number1, this.number2);
  @override
  Widget build(BuildContext context) {
    return GestureDetector(
      onTap: () {},
      child: Padding(
        padding: const EdgeInsets.all(8.0),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            Row(
              mainAxisAlignment: MainAxisAlignment.spaceBetween,
              children: [
                Text(
                  text,
                  style: TextStyle(fontSize: 20),
                ),
                Row(
                  children: [
                    Text(
                      "$number1",
                      style: TextStyle(fontSize: 20, color: Colors.red),
                    ),
                    Text(
                      "/$number2",
                      style: TextStyle(fontSize: 20),
                    ),
                  ],
                ),
              ],
            ),
            Divider(color: Colors.grey),
          ],
        ),
      ),
    );
  }
}

class BottomMenux extends StatelessWidget {
  final String text;
  final int number1;
  final int number2;
  final String text2;
  BottomMenux(this.text, this.number1, this.number2, this.text2);
  @override
  Widget build(BuildContext context) {
    return GestureDetector(
      onTap: () {},
      child: Padding(
        padding: const EdgeInsets.all(8.0),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            Row(
              mainAxisAlignment: MainAxisAlignment.spaceBetween,
              children: [
                Column(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Text(
                      text,
                      style: TextStyle(fontSize: 20),
                    ),
                    Text(
                      text2,
                      style: TextStyle(fontSize: 14, color: Colors.red),
                    ),
                  ],
                ),
                Row(
                  children: [
                    Text(
                      "$number1",
                      style: TextStyle(fontSize: 20, color: Colors.red),
                    ),
                    Text(
                      "/$number2",
                      style: TextStyle(fontSize: 20),
                    ),
                  ],
                ),
              ],
            ),
            Divider(color: Colors.grey),
          ],
        ),
      ),
    );
  }
}
