import 'package:flutter/material.dart';
import 'package:flutter/widgets.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';
import 'package:swishapp/categories/pages/setting.dart';
import 'package:swishapp/pages/Displayfollowerpage.dart';
import 'package:swishapp/pages/Editprofile.dart';

import 'displayImagescreen.dart';

class ProfileSection extends StatefulWidget {
  @override
  _ProfileSectionState createState() => _ProfileSectionState();
}

class _ProfileSectionState extends State<ProfileSection> {
  var textHeadinDiasplayStyle =
      TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 18);

  var textHeadinDiasplayStyle2 =
      TextStyle(fontWeight: FontWeight.bold, fontSize: 18);

  var textHeadinDiasplayStyle3 = TextStyle(color: Color(0xFFED2124));
  bool first = true;
  bool second = false;
  String imageurl =
      "https://upload.wikimedia.org/wikipedia/commons/2/28/Inside_store.jpg";
  SizedBox orangeDivider() {
    return SizedBox(
      width: 60,
      child: Divider(
        thickness: 3,
        color: Colors.orange,
      ),
    );
  } //sold

  int views = 0;

  int sold = 0;

  //following
  int following = 0;

  //followers
  int followers = 0;

  //userName Variable
  String userName;

  //profilepicture link
  String profilePictureURL =
      "https://storage.needpix.com/rsynced_images/smile-1726471_1280.jpg";

  //customappbar to be displayed on top
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

  //custom button
  Widget customButton(Function onPressed, String buttonText) {
    return Container(
      height: 50.0,
      width: 130,
      child: GestureDetector(
        onTap: onPressed,
        child: Container(
          decoration: BoxDecoration(
            border: Border.all(
              color: Color(0xFFF05A22),
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
                    color: Color(0xFFF05A22),
                    fontSize: 16,
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

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: SingleChildScrollView(
        child: Column(
          children: [
            Stack(
              children: [
                //Custom Appbar
                customappbar(),
                Padding(
                  padding: const EdgeInsets.fromLTRB(8.0, 40.0, 8.0, 0.0),
                  child: Row(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
                    children: [
                      //user-add icon button
                      IconButton(
                          icon: Icon(FontAwesomeIcons.userPlus,
                              size: 20, color: Colors.white),
                          onPressed: () {}),

                      //user-name Text
                      Text(userName ?? "DisplayUserName",
                          style: textHeadinDiasplayStyle),

                      //vertical menu icon button
                      IconButton(
                          icon: Icon(FontAwesomeIcons.ellipsisV,
                              size: 20, color: Colors.white),
                          onPressed: () {
                            Navigator.push(
                                context,
                                MaterialPageRoute(
                                    builder: (context) => Setting()));
                          }),
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
                          height: 270,
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
                                      padding: const EdgeInsets.fromLTRB(
                                          60, 60.0, 10, 0),
                                      child: Text(
                                        userName == null
                                            ? "@DisplayUserName"
                                            : "@$userName",
                                        style: textHeadinDiasplayStyle2,
                                      ),
                                    ),

                                    Padding(
                                      padding: const EdgeInsets.only(top: 60.0),
                                      child: Container(
                                        width: 65,
                                        height: 45,
                                        child: Card(
                                          shape: RoundedRectangleBorder(
                                            borderRadius:
                                                BorderRadius.circular(40.0),
                                          ),
                                          color: Color(0xFF449A20),

                                          //instead of the crown icon you can insert a crown asset image just like in the mockup
                                          child: Icon(
                                            FontAwesomeIcons.crown,
                                            size: 20,
                                            color: Colors.yellow,
                                          ),
                                        ),
                                      ),
                                    )
                                  ],
                                ),
                                Padding(
                                  padding: const EdgeInsets.only(top: 12.0),
                                  child: Row(
                                    mainAxisAlignment:
                                        MainAxisAlignment.spaceAround,
                                    children: [
                                      GestureDetector(
                                        onTap: () {
                                          Navigator.push(
                                              context,
                                              MaterialPageRoute(
                                                  builder: (context) =>
                                                      DisplayFollowersPage(
                                                          true)));
                                        },
                                        child: Column(
                                          mainAxisAlignment:
                                              MainAxisAlignment.center,
                                          children: [
                                            Text(
                                              "$following",
                                              style: textHeadinDiasplayStyle3,
                                            ),
                                            Text("Followings")
                                          ],
                                        ),
                                      ),
                                      GestureDetector(
                                        onTap: () {
                                          Navigator.push(
                                              context,
                                              MaterialPageRoute(
                                                  builder: (context) =>
                                                      DisplayFollowersPage(
                                                          false)));
                                        },
                                        child: Column(
                                          mainAxisAlignment:
                                              MainAxisAlignment.center,
                                          children: [
                                            Text(
                                              "$followers",
                                              style: textHeadinDiasplayStyle3,
                                            ),
                                            Text("Followers")
                                          ],
                                        ),
                                      ),
                                      Column(
                                        mainAxisAlignment:
                                            MainAxisAlignment.center,
                                        children: [
                                          Text(
                                            "$sold",
                                            style: textHeadinDiasplayStyle3,
                                          ),
                                          Text("Sold")
                                        ],
                                      ),
                                    ],
                                  ),
                                ),
                                Padding(
                                    padding: const EdgeInsets.only(top: 15.0),
                                    child: customButton(() {
                                      Navigator.push(
                                          context,
                                          MaterialPageRoute(
                                              builder: (context) =>
                                                  EditProfile()));
                                    }, "Edit Profile")),
                                Padding(
                                  padding: const EdgeInsets.only(top: 15.0),
                                  child: GestureDetector(
                                      onTap: () {},
                                      child: Text("Tap to add Bio")),
                                ),
                              ],
                            ),
                          )),
                    ),

                    //profile picture
                    Padding(
                      padding: const EdgeInsets.only(bottom: 100.0),
                      child: Container(
                        width: 100,
                        height: 100,
                        child: CircleAvatar(
                          backgroundImage: NetworkImage(profilePictureURL),
                        ),
                      ),
                    )
                  ],
                )
              ],
            ),
            Container(
              width: MediaQuery.of(context).size.width / 1.1,
              height: 400,
              child: Card(
                shape: RoundedRectangleBorder(
                  borderRadius: BorderRadius.circular(16.0),
                ),
                child: Column(
                  children: [
                    Row(
                      mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                      children: [
                        GestureDetector(
                            onTap: () {
                              setState(() {
                                first = true;
                                second = false;
                              });
                            },
                            child: Image.asset("assets/images/1.PNG")),
                        Container(
                          width: 1,
                          height: 50,
                          color: Colors.grey,
                        ),
                        GestureDetector(
                            onTap: () {
                              setState(() {
                                first = false;
                                second = true;
                              });
                            },
                            child: Image.asset("assets/images/2.PNG")),
                      ],
                    ),
                    Stack(
                      children: [
                        Divider(
                          color: Colors.grey,
                        ),
                        if (first)
                          Padding(
                            padding: const EdgeInsets.only(left: 45.0),
                            child: orangeDivider(),
                          )
                        else
                          Padding(
                            padding: const EdgeInsets.only(left: 207.0),
                            child: orangeDivider(),
                          ),
                      ],
                    ),
                    if (first)
                      Expanded(
                        child: GridView.count(
                          primary: false,
                          padding: const EdgeInsets.all(20),
                          crossAxisSpacing: 1,
                          crossAxisCount: 2,
                          children: <Widget>[
                            GestureDetector(
                              onTap: () {
                                Navigator.push(
                                    context,
                                    MaterialPageRoute(
                                        builder: (context) => DisplayScreen(
                                            "https://i.pinimg.com/originals/d8/07/76/d80776ae88d3a1a6221a8c0c0d9d4d19.jpg")));
                              },
                              child: Stack(
                                children: [
                                  Image.network(
                                      "https://i.pinimg.com/originals/d8/07/76/d80776ae88d3a1a6221a8c0c0d9d4d19.jpg"),
                                  Container(
                                    width: 50,
                                    child: Card(
                                      color: Colors.white10,
                                      child: Padding(
                                        padding: const EdgeInsets.all(2.0),
                                        child: Row(
                                          children: [
                                            Icon(
                                              FontAwesomeIcons.eye,
                                              size: 15,
                                              color: Colors.white,
                                            ),
                                            Padding(
                                              padding: const EdgeInsets.only(
                                                  left: 8.0),
                                              child: Text(
                                                "$views",
                                                style: TextStyle(
                                                    color: Colors.white),
                                              ),
                                            )
                                          ],
                                        ),
                                      ),
                                    ),
                                  )
                                ],
                              ),
                            ),
                            GestureDetector(
                              onTap: () {
                                Navigator.push(
                                    context,
                                    MaterialPageRoute(
                                        builder: (context) => DisplayScreen(
                                            "https://i.pinimg.com/originals/d8/07/76/d80776ae88d3a1a6221a8c0c0d9d4d19.jpg")));
                              },
                              child: Stack(
                                children: [
                                  Image.network(
                                      "https://i.pinimg.com/originals/d8/07/76/d80776ae88d3a1a6221a8c0c0d9d4d19.jpg"),
                                  Container(
                                    width: 50,
                                    child: Card(
                                      color: Colors.white10,
                                      child: Padding(
                                        padding: const EdgeInsets.all(2.0),
                                        child: Row(
                                          children: [
                                            Icon(
                                              FontAwesomeIcons.eye,
                                              size: 15,
                                              color: Colors.white,
                                            ),
                                            Padding(
                                              padding: const EdgeInsets.only(
                                                  left: 8.0),
                                              child: Text(
                                                "$views",
                                                style: TextStyle(
                                                    color: Colors.white),
                                              ),
                                            )
                                          ],
                                        ),
                                      ),
                                    ),
                                  )
                                ],
                              ),
                            ),
                            GestureDetector(
                              onTap: () {
                                Navigator.push(
                                    context,
                                    MaterialPageRoute(
                                        builder: (context) => DisplayScreen(
                                            "https://i.pinimg.com/originals/d8/07/76/d80776ae88d3a1a6221a8c0c0d9d4d19.jpg")));
                              },
                              child: Stack(
                                children: [
                                  Image.network(
                                      "https://i.pinimg.com/originals/d8/07/76/d80776ae88d3a1a6221a8c0c0d9d4d19.jpg"),
                                  Container(
                                    width: 50,
                                    child: Card(
                                      color: Colors.white10,
                                      child: Padding(
                                        padding: const EdgeInsets.all(2.0),
                                        child: Row(
                                          children: [
                                            Icon(
                                              FontAwesomeIcons.eye,
                                              size: 15,
                                              color: Colors.white,
                                            ),
                                            Padding(
                                              padding: const EdgeInsets.only(
                                                  left: 8.0),
                                              child: Text(
                                                "$views",
                                                style: TextStyle(
                                                    color: Colors.white),
                                              ),
                                            )
                                          ],
                                        ),
                                      ),
                                    ),
                                  )
                                ],
                              ),
                            ),
                            GestureDetector(
                              onTap: () {
                                Navigator.push(
                                    context,
                                    MaterialPageRoute(
                                        builder: (context) => DisplayScreen(
                                            "https://i.pinimg.com/originals/d8/07/76/d80776ae88d3a1a6221a8c0c0d9d4d19.jpg")));
                              },
                              child: Stack(
                                children: [
                                  Image.network(
                                      "https://i.pinimg.com/originals/d8/07/76/d80776ae88d3a1a6221a8c0c0d9d4d19.jpg"),
                                  Container(
                                    width: 50,
                                    child: Card(
                                      color: Colors.white10,
                                      child: Padding(
                                        padding: const EdgeInsets.all(2.0),
                                        child: Row(
                                          children: [
                                            Icon(
                                              FontAwesomeIcons.eye,
                                              size: 15,
                                              color: Colors.white,
                                            ),
                                            Padding(
                                              padding: const EdgeInsets.only(
                                                  left: 8.0),
                                              child: Text(
                                                "$views",
                                                style: TextStyle(
                                                    color: Colors.white),
                                              ),
                                            )
                                          ],
                                        ),
                                      ),
                                    ),
                                  )
                                ],
                              ),
                            )
                          ],
                        ),
                      )
                    else
                      Expanded(
                        child: GridView.count(
                          primary: false,
                          padding: const EdgeInsets.all(20),
                          crossAxisSpacing: 1,
                          crossAxisCount: 2,
                          children: <Widget>[
                            GestureDetector(
                              onTap: () {
                                Navigator.push(
                                    context,
                                    MaterialPageRoute(
                                        builder: (context) =>
                                            DisplayScreen(imageurl)));
                              },
                              child: Stack(
                                children: [
                                  Image.network(imageurl),
                                  Container(
                                    width: 50,
                                    child: Card(
                                      color: Colors.white10,
                                      child: Padding(
                                        padding: const EdgeInsets.all(2.0),
                                        child: Row(
                                          children: [
                                            Icon(
                                              FontAwesomeIcons.eye,
                                              size: 15,
                                              color: Colors.white,
                                            ),
                                            Padding(
                                              padding: const EdgeInsets.only(
                                                  left: 8.0),
                                              child: Text(
                                                "$views",
                                                style: TextStyle(
                                                    color: Colors.white),
                                              ),
                                            )
                                          ],
                                        ),
                                      ),
                                    ),
                                  )
                                ],
                              ),
                            ),
                            GestureDetector(
                              onTap: () {
                                Navigator.push(
                                    context,
                                    MaterialPageRoute(
                                        builder: (context) =>
                                            DisplayScreen(imageurl)));
                              },
                              child: Stack(
                                children: [
                                  Image.network(imageurl),
                                  Container(
                                    width: 50,
                                    child: Card(
                                      color: Colors.white10,
                                      child: Padding(
                                        padding: const EdgeInsets.all(2.0),
                                        child: Row(
                                          children: [
                                            Icon(
                                              FontAwesomeIcons.eye,
                                              size: 15,
                                              color: Colors.white,
                                            ),
                                            Padding(
                                              padding: const EdgeInsets.only(
                                                  left: 8.0),
                                              child: Text(
                                                "$views",
                                                style: TextStyle(
                                                    color: Colors.white),
                                              ),
                                            )
                                          ],
                                        ),
                                      ),
                                    ),
                                  )
                                ],
                              ),
                            ),
                            GestureDetector(
                              onTap: () {
                                Navigator.push(
                                    context,
                                    MaterialPageRoute(
                                        builder: (context) =>
                                            DisplayScreen(imageurl)));
                              },
                              child: Stack(
                                children: [
                                  Image.network(imageurl),
                                  Container(
                                    width: 50,
                                    child: Card(
                                      color: Colors.white10,
                                      child: Padding(
                                        padding: const EdgeInsets.all(2.0),
                                        child: Row(
                                          children: [
                                            Icon(
                                              FontAwesomeIcons.eye,
                                              size: 15,
                                              color: Colors.white,
                                            ),
                                            Padding(
                                              padding: const EdgeInsets.only(
                                                  left: 8.0),
                                              child: Text(
                                                "$views",
                                                style: TextStyle(
                                                    color: Colors.white),
                                              ),
                                            )
                                          ],
                                        ),
                                      ),
                                    ),
                                  )
                                ],
                              ),
                            ),
                            GestureDetector(
                              onTap: () {
                                Navigator.push(
                                    context,
                                    MaterialPageRoute(
                                        builder: (context) =>
                                            DisplayScreen(imageurl)));
                              },
                              child: Stack(
                                children: [
                                  Image.network(imageurl),
                                  Container(
                                    width: 50,
                                    child: Card(
                                      color: Colors.white10,
                                      child: Padding(
                                        padding: const EdgeInsets.all(2.0),
                                        child: Row(
                                          children: [
                                            Icon(
                                              FontAwesomeIcons.eye,
                                              size: 15,
                                              color: Colors.white,
                                            ),
                                            Padding(
                                              padding: const EdgeInsets.only(
                                                  left: 8.0),
                                              child: Text(
                                                "$views",
                                                style: TextStyle(
                                                    color: Colors.white),
                                              ),
                                            )
                                          ],
                                        ),
                                      ),
                                    ),
                                  )
                                ],
                              ),
                            )
                          ],
                        ),
                      ),
                  ],
                ),
              ),
            )
          ],
        ),
      ),
    );
  }
}
