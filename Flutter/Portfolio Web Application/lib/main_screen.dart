import 'package:flutter/material.dart';
import 'package:responsive_framework/responsive_framework.dart';
import 'constants.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';
import 'customIconButton.dart';
import 'emailButton.dart';
import 'resumeButton.dart';

class MainScreen extends StatelessWidget {
  static String id = 'first';
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.white,
      body: ResponsiveWrapper(
        maxWidth: 1366,
        minWidth: 1366,
        defaultScale: true,
        mediaQueryData: MediaQueryData(size: Size(1366, 800)),
        child: SingleChildScrollView(
          child: Row(
            children: [
              Flexible(
                fit: FlexFit.loose,
                child: Stack(
                  children: [
                    Container(
                      width: 1366,
                      height: 800,
                      color: Colors.white,
                      child: Center(
                        child: Container(
                          margin: EdgeInsets.only(left: 650.0, top: 170.0),
                          child: Column(
                            crossAxisAlignment: CrossAxisAlignment.start,
                            children: [
                              Text(
                                "Ashley Alex",
                                style: TextStyle(
                                  letterSpacing: 1.5,
                                  fontFamily: "ProzaLibre",
                                  fontSize: 50.0,
                                  fontWeight: FontWeight.bold,
                                  color: kHeadGrey,
                                ),
                              ),
                              Text(
                                "Jacob",
                                style: TextStyle(
                                  letterSpacing: 1.5,
                                  fontFamily: "ProzaLibre",
                                  fontSize: 50.0,
                                  fontWeight: FontWeight.bold,
                                  color: kC1,
                                ),
                              ),
                              SizedBox(
                                height: 10.0,
                              ),
                              SizedBox(
                                height: 10.0,
                              ),
                              Text(
                                "Graphic Designer\nFlutter Developer",
                                style: TextStyle(
                                  letterSpacing: 1,
                                  fontFamily: "OpenSans",
                                  fontSize: 32.0,
                                  fontWeight: FontWeight.w400,
                                  color: Colors.grey[800],
                                ),
                              ),
                              SizedBox(
                                height: 20.0,
                              ),
                              Text(
                                "Hi i am Ashley from Peshawar, Pakistan.\nA passionate designer and coder.\nI love to design solutions & implement them.",
                                style: TextStyle(
                                  letterSpacing: 0.5,
                                  fontFamily: "OpenSans",
                                  fontSize: 23.0,
                                  fontWeight: FontWeight.w400,
                                  color: Colors.grey[800],
                                ),
                              ),
                              SizedBox(
                                height: 20.0,
                              ),
                              Row(
                                children: [
                                  EmailButton(),
                                  SizedBox(
                                    width: 14.0,
                                  ),
                                  Resume(),
                                ],
                              ),
                            ],
                          ),
                        ),
                      ),
                    ),
                    Container(
                      padding: EdgeInsets.only(top: 20.0, left: 30.0),
                      width: 400.0,
                      height: 978.0,
                      //color: Color(0xFF4B21FF),
                      decoration: BoxDecoration(
                        gradient: LinearGradient(
                          colors: [kC1, kC2],
                          begin: Alignment.topRight,
                          end: Alignment.bottomLeft,
                        ),
                      ),
                      child: Column(
                        crossAxisAlignment: CrossAxisAlignment.start,
                        children: [
                          Container(
                            // margin: EdgeInsets.only(top: 20.0, left: 30.0),
                            child: Image(
                              width: 44,
                              height: 47,
                              image: AssetImage("images/bw.png"),
                            ),
                          ),
                          //Icons Spacing
                          SizedBox(
                            height: 320.0,
                          ),
                          Text(
                            "Email:",
                            style: TextStyle(
                              color: Colors.white,
                              fontFamily: "OpenSans",
                            ),
                          ),
                          SizedBox(
                            height: 4.0,
                          ),
                          Text(
                            "alexjacob260@gmail.com",
                            style: TextStyle(
                                fontFamily: "OpenSans",
                                color: Colors.white,
                                fontWeight: FontWeight.w600),
                          ),
                          SizedBox(
                            height: 12.0,
                          ),
                          Text(
                            "Check my work",
                            style: TextStyle(
                              color: Colors.white,
                              fontFamily: "OpenSans",
                            ),
                          ),
                          SizedBox(
                            height: 6.0,
                          ),
                          Row(
                            children: [
                              CustomIconButton(
                                  icon: FontAwesomeIcons.githubSquare,
                                  url: "https://github.com/AshleyAlexJacob"),
                              SizedBox(
                                width: 6.0,
                              ),
                              CustomIconButton(
                                  icon: FontAwesomeIcons.behanceSquare,
                                  url:
                                      "https://www.behance.net/ashleyalexjacob"),
                              SizedBox(
                                width: 6.0,
                              ),
                              CustomIconButton(
                                  icon: FontAwesomeIcons.dribbbleSquare,
                                  url: "https://dribbble.com/AshleyAlexJacob"),
                            ],
                          ),
                          SizedBox(
                            height: 12.0,
                          ),
                          Text(
                            "Connect with me",
                            style: TextStyle(
                              color: Colors.white,
                              fontFamily: "OpenSans",
                            ),
                          ),
                          SizedBox(
                            height: 6.0,
                          ),
                          Row(
                            children: [
                              CustomIconButton(
                                  icon: FontAwesomeIcons.facebookSquare,
                                  url: "https://www.facebook.com/ashley.js.39"),
                              SizedBox(
                                width: 6.0,
                              ),
                              CustomIconButton(
                                  icon: FontAwesomeIcons.twitterSquare,
                                  url: "https://twitter.com/ashleyalexjaco1"),
                              SizedBox(
                                width: 6.0,
                              ),
                              CustomIconButton(
                                  icon: FontAwesomeIcons.linkedin,
                                  url:
                                      "https://www.linkedin.com/in/ashleyalexjacob2000/"),
                            ],
                          ),
                          SizedBox(
                            height: 28.0,
                          ),
                          Text(
                            "Copyright (c) 2020, Ashley Alex Jacob.\nAll Rights Reserved",
                            style: TextStyle(
                              fontSize: 10.0,
                              color: Colors.white,
                              fontFamily: "OpenSans",
                            ),
                          ),
                        ],
                      ),
                    ),
                    //Main Image
                    Container(
                      margin: EdgeInsets.only(left: 200.0, top: 64.0),
                      width: 400,
                      height: 570,
                      decoration: BoxDecoration(
                          boxShadow: [
                            BoxShadow(
                              color: Colors.grey.withOpacity(0.07),
                              spreadRadius: 0,
                              blurRadius: 2,
                              offset:
                                  Offset(25, 30), // changes position of shadow
                            ),
                          ],
                          image: DecorationImage(
                            image: AssetImage("images/me.jpg"),
                            fit: BoxFit.contain,
                          )),
                    ),
                    //Line Element
                    Padding(
                      padding: const EdgeInsets.only(top: 310, left: 40),
                      child: Center(
                        child: SizedBox(
                          width: 100,
                          height: 3,
                          child: Container(
                            color: kC1,
                          ),
                        ),
                      ),
                    ),
                  ],
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}
