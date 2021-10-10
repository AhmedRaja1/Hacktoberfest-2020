import 'package:flutter/material.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';

import 'Display.dart';

class StreamData extends StatefulWidget {
  final String title;
  final String url;

  StreamData({this.title, this.url});
  @override
  _StreamDataState createState() => _StreamDataState();
}

class _StreamDataState extends State<StreamData> {
  List data2 = [
    {
      "url":
          "https://image.freepik.com/free-photo/attractive-young-caucasian-woman-customer-holding-hangers-with-two-pieces-clothing-feeling-doubtful-while-deciding-which-one-mathes-fits-her-shopping-choice-dilemma-buying-purchasing_273609-716.jpg"
    },
    {
      "url":
          "https://image.freepik.com/free-photo/woman-looking-clothes-store_23-2147888954.jpg"
    },
    {
      "url":
          "https://media.istockphoto.com/photos/interior-of-clothing-store-picture-id1023612090?k=6&m=1023612090&s=612x612&w=0&h=YNzgbQvGSqMQ5FUdeiz4o4ab7gYkl4kkopKi4tRGqZ0="
    },
  ];
  bool first = true;
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        centerTitle: true,
        title: Text(
          widget.title,
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
              mainAxisAlignment: MainAxisAlignment.start,
              children: [
                Container(
                  height: 150,
                  width: 120,
                  child: Card(
                    color: Colors.orange,
                    shape: RoundedRectangleBorder(
                        borderRadius: BorderRadius.circular(20)),
                    child: Stack(
                      children: [
                        Container(
                          width: double.infinity,
                          height: double.infinity,
                          child: ClipRRect(
                            borderRadius: BorderRadius.circular(20),
                            child: Image.network(
                              widget.url,
                              fit: BoxFit.cover,
                            ),
                          ),
                        ),
                      ],
                    ),
                  ),
                ),
                SizedBox(
                  width: 10,
                ),
                Column(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Text(widget.title,
                        style: TextStyle(
                            fontSize: 22, fontWeight: FontWeight.bold)),
                    Container(
                      child: Text("11k Spectators - 1.1 Million Followers",
                          style: TextStyle(fontSize: 12)),
                    ),
                    Row(
                      mainAxisAlignment: MainAxisAlignment.center,
                      children: [
                        Container(
                          height: 30,
                          width: 70,
                          child: Card(
                            color: Colors.grey,
                            child: Center(
                              child: Text(
                                "Wedding",
                                style: TextStyle(
                                  color: Colors.white,
                                ),
                              ),
                            ),
                          ),
                        ),
                        Container(
                          height: 30,
                          width: 70,
                          child: Card(
                            color: Colors.grey,
                            child: Center(
                              child: Text(
                                "Girls",
                                style: TextStyle(
                                  color: Colors.white,
                                ),
                              ),
                            ),
                          ),
                        ),
                      ],
                    ),
                    Card(
                      color: Color(0xFFE61610),
                      child: Padding(
                        padding: const EdgeInsets.fromLTRB(8, 5, 8, 5),
                        child: Text(
                          "Follow",
                          style: TextStyle(color: Colors.white),
                        ),
                      ),
                    ),
                  ],
                )
              ],
            ),
            Row(
              mainAxisAlignment: MainAxisAlignment.spaceAround,
              children: [
                GestureDetector(
                  onTap: () {
                    setState(() {
                      first = true;
                    });
                  },
                  child: Text(
                    "Live Channels",
                    style: TextStyle(
                        fontSize: 18,
                        color: first ? Color(0xFFFF5D55) : Colors.black),
                  ),
                ),
                GestureDetector(
                  onTap: () {
                    setState(() {
                      first = false;
                    });
                  },
                  child: Text(
                    "Videos",
                    style: TextStyle(
                        fontSize: 18,
                        color: first ? Colors.black : Color(0xFFFF5D55)),
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
                  if (first)
                    Padding(
                      padding: const EdgeInsets.only(left: 40.0),
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
            Row(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                Recpop(data2[0]["url"]),
                Recpop(data2[1]["url"]),
              ],
            ),
            Row(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                Recpop(data2[2]["url"]),
                Recpop(data2[1]["url"]),
              ],
            ),
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
