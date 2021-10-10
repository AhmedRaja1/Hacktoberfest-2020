import 'package:flutter/material.dart';
import 'package:swishapp/pages/Affiliate.dart';

class Partner extends StatelessWidget {
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
                    "How to become an Partner?",
                    style:
                        TextStyle(fontWeight: FontWeight.bold, fontSize: 23.5),
                  ),
                ],
              )),
          BottomMenu("Stream a total of 25 hours", 2, 25),
          BottomMenu("Stream 12 different days", 1, 12),
          BottomMenux(
              "75 spectators on average", 1, 75, "in 0.01 hours streamed"),
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
            height: 150,
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
                                  "To be eligible for the Partner program, you must meet these four criteria for a period of 30 days. All calculations are made to the exclusion of premieres, Reruns of Subscriber Streams and movie showing. Note: Granting of the partnership is not guaranteed to all who apply. "),
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
