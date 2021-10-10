import 'package:flutter/material.dart';
import 'package:myportfolio/Components/TopRow.dart';

// ignore: avoid_web_libraries_in_flutter
import 'dart:html' as html;

import 'package:myportfolio/Views/About.dart';
import 'package:myportfolio/Views/Testimonial.dart';
import 'package:myportfolio/Views/mywork.dart';

class MyHomePage extends StatefulWidget {
  @override
  _MyHomePageState createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {
  bool home = true;
  bool about = false;
  bool mywork = false;
  bool testimonial = false;
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: SingleChildScrollView(
        child: Container(
            child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          crossAxisAlignment: CrossAxisAlignment.center,
          children: [
            Padding(
              padding: const EdgeInsets.all(8.0),
              child: SingleChildScrollView(
                scrollDirection: Axis.horizontal,
                child: Row(
                  mainAxisAlignment: MainAxisAlignment.spaceBetween,
                  children: [
                    GestureDetector(
                        onTap: () {
                          setState(() {
                            home = true;
                            mywork = false;
                            testimonial = false;
                            about = false;
                          });
                        },
                        child: NavbarLogoDesk()),
                    Row(
                      children: [
                        customButton(() {
                          setState(() {
                            home = true;
                            mywork = false;
                            testimonial = false;
                            about = false;
                          });
                        }, "Home"),
                        SizedBox(
                          width: 5,
                        ),
                        customButton(() {
                          setState(() {
                            home = false;
                            mywork = false;
                            testimonial = false;
                            about = true;
                          });
                        }, "About"),
                        SizedBox(
                          width: 5,
                        ),
                        customButton(() {
                          setState(() {
                            home = false;
                            mywork = true;
                            testimonial = false;
                            about = false;
                          });
                        }, "My Work"),
                        SizedBox(
                          width: 5,
                        ),
                        customButton(() {
                          setState(() {
                            home = false;
                            mywork = false;
                            testimonial = true;
                            about = false;
                          });
                        }, "Testimonials")
                      ],
                    ),
                  ],
                ),
              ),
            ),
            home
                ? Home()
                : about
                    ? About()
                    : mywork
                        ? MyWork()
                        : Testimonial(),
          ],
        )),
      ),
    );
  }
}

class Home extends StatefulWidget {
  @override
  _HomeState createState() => _HomeState();
}

class _HomeState extends State<Home> {
  final avatarimg = AssetImage("assets/avatar.jpg");

  @override
  void didChangeDependencies() {
    precacheImage(avatarimg, context);
    super.didChangeDependencies();
  }

  @override
  Widget build(BuildContext context) {
    return Column(
      mainAxisAlignment: MainAxisAlignment.center,
      crossAxisAlignment: CrossAxisAlignment.center,
      children: [
        SizedBox(
          height: 50,
        ),

        //logo
        //
        Container(
          width: 200,
          height: 200,
          child: CircleAvatar(
            backgroundImage: avatarimg,
          ),
        ),

        SizedBox(
          height: 20,
        ),

        Text(
          "Hamas ur Rehman",
          style: TextStyle(
              fontSize: 25, color: Colors.white, fontWeight: FontWeight.w900),
        ),
        SizedBox(
          height: 15,
        ),

        Row(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Flexible(
              child: Text(
                "Self-taught Flutter developer based in Pakistan",
                style: TextStyle(
                    fontSize: 20,
                    color: Colors.white,
                    fontWeight: FontWeight.w300),
              ),
            ),
          ],
        ),
        SizedBox(
          height: 10,
        ),

        Text(
          "#Flutter ❤",
          style: TextStyle(
              fontSize: 20, color: Colors.white, fontWeight: FontWeight.w200),
        ),

        SizedBox(
          height: 25,
        ),

        Text(
          "Connect with me",
          style: TextStyle(
              fontSize: 20, color: Colors.white, fontWeight: FontWeight.w700),
        ),

        SizedBox(
          height: 20,
        ),

        Row(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            GestureDetector(
              onTap: () {
                htmlopengithub();
              },
              child: Image.asset(
                "assets/github.png",
                height: 50,
                color: Colors.white,
              ),
            ),
            GestureDetector(
              onTap: () {
                htmlopenlinkedin();
              },
              child: Image.asset(
                "assets/linkedin.png",
                height: 50,
                color: Colors.white,
              ),
            ),
            SizedBox(
              height: 20,
            ),
            GestureDetector(
              onTap: () {
                htmlopentwitter();
              },
              child: Image.asset(
                "assets/twitter.png",
                height: 50,
                color: Colors.white,
              ),
            ),
          ],
        ),
        SizedBox(
          height: 20,
        ),

        Text("Made with ❤ using Flutter web",
            style: TextStyle(
                color: Colors.white,
                fontSize: 15,
                fontWeight: FontWeight.w200)),
        SizedBox(
          height: 20,
        ),
      ],
    );
  }
}

void htmlopengithub() {
  String url = "https://github.com/Hamas-ur-Rehman";
  html.window.open(url, "github");
}

void htmlopenlinkedin() {
  String url = "https://www.linkedin.com/in/hamasurrehman/";
  html.window.open(url, "Linkedin");
}

void htmlopentwitter() {
  String url = "https://twitter.com/Hamas_ur_Rehman";
  html.window.open(url, "twitter");
}

//custom button
Widget customButton(Function onPressed, String buttonText) {
  return Container(
    height: 40.0,
    width: 100,
    child: GestureDetector(
      onTap: onPressed,
      child: Container(
        decoration: BoxDecoration(
          border: Border.all(
            color: Colors.grey,
            style: BorderStyle.solid,
            width: 1.0,
          ),
          color: Colors.transparent,
          borderRadius: BorderRadius.circular(10.0),
        ),
        child: Row(
          mainAxisAlignment: MainAxisAlignment.center,
          children: <Widget>[
            Center(
              child: Text(
                buttonText,
                style: TextStyle(
                  color: Color(0xFFEEEBDD),
                  fontSize: 13,
                  fontWeight: FontWeight.w600,
                  letterSpacing: 1,
                ),
              ),
            )
          ],
        ),
      ),
    ),
  );
}
