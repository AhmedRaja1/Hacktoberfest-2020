import 'package:flutter/material.dart';
import 'package:swishapp/pages/Affiliate.dart';
import 'package:swishapp/pages/Influencer.dart';
import 'package:swishapp/pages/Partner.dart';

class TierManagment extends StatefulWidget {
  @override
  _TierManagmentState createState() => _TierManagmentState();
}

class _TierManagmentState extends State<TierManagment> {
  bool first = true;
  bool second = false;
  bool third = false;

  var textHeadinDiasplayStyle3 = TextStyle(color: Color(0xFFED2124));
  Widget customappbar() {
    return Container(
      height: 250.0,
      decoration: new BoxDecoration(
        color: Color(0xFFFF6554),
        borderRadius: new BorderRadius.vertical(
          bottom:
              new Radius.elliptical(MediaQuery.of(context).size.width, 150.0),
        ),
      ),
    );
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: SingleChildScrollView(
        child: Column(
          children: [
            Stack(
              children: [
                customappbar(),
                Padding(
                  padding: const EdgeInsets.fromLTRB(8.0, 40.0, 8.0, 0.0),
                  child: Column(
                    children: [
                      Row(
                        mainAxisAlignment: MainAxisAlignment.spaceBetween,
                        children: [
                          //user-add icon button
                          IconButton(
                              icon: Icon(Icons.keyboard_arrow_left,
                                  size: 40, color: Colors.white),
                              onPressed: () {
                                Navigator.pop(context);
                              }),

                          //user-name Text
                          Padding(
                            padding: const EdgeInsets.only(top: 8.0),
                            child: Text("Tier Managment",
                                style: TextStyle(
                                    color: Colors.white,
                                    fontWeight: FontWeight.bold,
                                    fontSize: 22)),
                          ),
                          SizedBox(
                            width: 20,
                          )
                          //vertical menu icon button
                        ],
                      ),
                      Divider(
                        color: Colors.white,
                        thickness: 2,
                      )
                    ],
                  ),
                ),
                Stack(
                  alignment: Alignment.center,
                  children: [
                    Padding(
                      padding: EdgeInsets.only(
                        top: MediaQuery.of(context).size.height / 5,
                        left: MediaQuery.of(context).size.width / 25,
                        right: MediaQuery.of(context).size.width / 25,
                      ),
                      child: Container(
                          width: MediaQuery.of(context).size.width / 1.1,
                          height: MediaQuery.of(context).size.height / 3.5,
                          child: Card(
                            shape: RoundedRectangleBorder(
                              borderRadius: BorderRadius.circular(16.0),
                            ),
                            elevation: 8,
                            child: Column(
                              children: [
                                Row(
                                  mainAxisAlignment: MainAxisAlignment.center,
                                  children: [
                                    //at user display Name
                                    Padding(
                                      padding: EdgeInsets.only(
                                          top: MediaQuery.of(context)
                                                  .size
                                                  .height /
                                              10),
                                      child: Text(
                                        "Gold",
                                        style: TextStyle(
                                            color: Colors.red,
                                            fontWeight: FontWeight.bold,
                                            fontSize: 22),
                                      ),
                                    ),
                                  ],
                                ),
                                Row(
                                  mainAxisAlignment:
                                      MainAxisAlignment.spaceEvenly,
                                  children: [
                                    Padding(
                                      padding:
                                          const EdgeInsets.only(right: 10.0),
                                      child: Column(
                                        children: [
                                          Text("750",
                                              style: TextStyle(
                                                fontWeight: FontWeight.bold,
                                              )),
                                          Text("Current Points"),
                                        ],
                                      ),
                                    ),
                                    customverticaldivider(),
                                    Column(
                                      children: [
                                        Text("200",
                                            style: TextStyle(
                                              fontWeight: FontWeight.bold,
                                            )),
                                        Text("Points to level up"),
                                      ],
                                    ),
                                  ],
                                )
                              ],
                            ),
                          )),
                    ),

                    //profile picture
                    Padding(
                      padding: const EdgeInsets.only(bottom: 40.0),
                      child: Container(
                        width: 100,
                        height: 100,
                        child: Card(
                          color: Color(0xFF3B1D8F),
                          shape: RoundedRectangleBorder(
                              borderRadius: BorderRadius.circular(50),
                              side: BorderSide(
                                  color: Color(0xFF2E1572), width: 8)),
                          child: Container(
                            child: Center(
                              child: (CircleAvatar(
                                backgroundImage:
                                    AssetImage("assets/log/crown.PNG"),
                              )),
                            ),
                          ),
                        ),
                      ),
                    ),
                  ],
                )
              ],
            ),
            Container(
                width: MediaQuery.of(context).size.width / 1.1,
                height: MediaQuery.of(context).size.height / 1,
                child: Card(
                  shape: RoundedRectangleBorder(
                    borderRadius: BorderRadius.circular(16.0),
                  ),
                  elevation: 8,
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
                                first = true;
                                second = false;
                                third = false;
                              });
                            },
                            child: Text(
                              "Influencer",
                              style: TextStyle(
                                  fontSize: 18,
                                  color:
                                      first ? Color(0xFFFF5D55) : Colors.black),
                            ),
                          ),
                          GestureDetector(
                            onTap: () {
                              setState(() {
                                first = false;
                                second = true;
                                third = false;
                              });
                            },
                            child: Text(
                              "Affiliate",
                              style: TextStyle(
                                  fontSize: 18,
                                  color: second
                                      ? Color(0xFFFF5D55)
                                      : Colors.black),
                            ),
                          ),
                          GestureDetector(
                            onTap: () {
                              setState(() {
                                first = false;
                                second = false;
                                third = true;
                              });
                            },
                            child: Text(
                              "Partner",
                              style: TextStyle(
                                  fontSize: 18,
                                  color:
                                      third ? Color(0xFFFF5D55) : Colors.black),
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
                            if (first == true &&
                                second == false &&
                                third == false)
                              Padding(
                                padding: const EdgeInsets.only(left: 0.0),
                                child: orangeDivider(),
                              )
                            else if (first == false &&
                                second == true &&
                                third == false)
                              Padding(
                                padding: const EdgeInsets.only(left: 110.0),
                                child: orangeDivider(),
                              )
                            else if (first == false &&
                                second == false &&
                                third == true)
                              Padding(
                                padding: const EdgeInsets.only(left: 220.0),
                                child: orangeDivider(),
                              ),
                          ],
                        ),
                      ),
                      first
                          ? Influencer()
                          : second
                              ? Affiliate()
                              : Partner()
                    ],
                  ),
                ))
          ],
        ),
      ),
    );
  }
}

Widget customverticaldivider() {
  return Column(
    children: [
      Container(
        width: 2,
        height: 80,
        color: Colors.orange,
      ),
    ],
  );
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
