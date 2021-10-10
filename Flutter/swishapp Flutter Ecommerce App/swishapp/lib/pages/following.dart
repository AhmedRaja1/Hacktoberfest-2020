import 'package:flutter/material.dart';
import 'package:swishapp/pages/InfluencerNamePage.dart';

import 'followers.dart';

class Following extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Container(
      child: Column(
        children: [
          Padding(
            padding: const EdgeInsets.all(15),
            child: TextField(
              decoration: InputDecoration(
                suffixIcon: Icon(
                  Icons.search,
                  color: Colors.black,
                ),
                filled: true,
                fillColor: Colors.grey[200],
                focusColor: Colors.orange,
                hintText: "Enter a username to search",
                contentPadding: EdgeInsets.fromLTRB(10, 0, 0, 0),
                focusedBorder: OutlineInputBorder(
                    borderRadius: BorderRadius.circular(5),
                    borderSide: BorderSide(color: Colors.grey)),
                disabledBorder: OutlineInputBorder(
                    borderRadius: BorderRadius.circular(5),
                    borderSide: BorderSide(color: Colors.grey)),
                enabledBorder: OutlineInputBorder(
                    borderRadius: BorderRadius.circular(5),
                    borderSide: BorderSide(color: Colors.grey)),
              ),
            ),
          ),
          GestureDetector(
            onTap: () {
              Navigator.push(
                  context,
                  MaterialPageRoute(
                      builder: (context) => InfluencerName(
                          "https://halvorseninteriors.com.au/wp-content/uploads/customer-2.jpg")));
            },
            child: CustomRow2(
              name: "Jacob salami",
              profilePictureURL:
                  "https://halvorseninteriors.com.au/wp-content/uploads/customer-2.jpg",
            ),
          ),
          GestureDetector(
            onTap: () {
              Navigator.push(
                  context,
                  MaterialPageRoute(
                      builder: (context) => InfluencerName(
                          "https://i.insider.com/5faeaa124652d400197443a9?width=1136&format=jpeg")));
            },
            child: CustomRow3(
              name: "Hanna stiler",
              profilePictureURL:
                  "https://i.insider.com/5faeaa124652d400197443a9?width=1136&format=jpeg",
            ),
          ),
          GestureDetector(
            onTap: () {
              Navigator.push(
                  context,
                  MaterialPageRoute(
                      builder: (context) => InfluencerName(
                          "https://lh3.googleusercontent.com/proxy/rDRZNeaHLy2IMkwnnQGIHiK0QzrrPSu6eei0sB9QNWRy9872VFyO5K_WuqKkipERgFWodKk2E7JYUE9cuR0zhYTAqFfwlyIzx0okdpUmBXWm_HSP9BKmwV8")));
            },
            child: CustomRow2(
              name: "Meredith Gold",
              profilePictureURL:
                  "https://lh3.googleusercontent.com/proxy/rDRZNeaHLy2IMkwnnQGIHiK0QzrrPSu6eei0sB9QNWRy9872VFyO5K_WuqKkipERgFWodKk2E7JYUE9cuR0zhYTAqFfwlyIzx0okdpUmBXWm_HSP9BKmwV8",
            ),
          ),
          Padding(
            padding: const EdgeInsets.fromLTRB(15, 0, 15, 0),
            child: Divider(
              color: Colors.grey,
            ),
          ),
          Padding(
            padding: const EdgeInsets.all(15.0),
            child: Row(
              mainAxisAlignment: MainAxisAlignment.start,
              children: [
                Text("Suggested For You"),
              ],
            ),
          ),
          CustomRow(
              name: "David",
              profilePictureURL:
                  "https://sm.askmen.com/askmen_in/article/f/facebook-p/facebook-profile-picture-affects-chances-of-gettin_gstt.jpg"),
          CustomRow(
              name: "Jane Levingson",
              profilePictureURL:
                  "https://perfectczechwomen.com/wp-content/uploads/2019/04/New-Profile-20-500x536.jpg"),
        ],
      ),
    );
  }
}

Widget customButton(Function onPressed, String buttonText) {
  return Container(
    height: 40.0,
    width: 100,
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

class CustomRow2 extends StatelessWidget {
  final String profilePictureURL;
  final String name;

  CustomRow2({this.name, this.profilePictureURL});

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.only(bottom: 15.0),
      child: Row(
        mainAxisAlignment: MainAxisAlignment.spaceAround,
        children: [
          Container(
            width: 70,
            height: 70,
            child: CircleAvatar(
              backgroundImage: NetworkImage(profilePictureURL),
            ),
          ),
          Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              Text(
                name,
                style: TextStyle(fontWeight: FontWeight.bold),
              ),
              Text(
                "Description bio",
                style: TextStyle(color: Colors.grey[350]),
              ),
            ],
          ),
          SizedBox(
            width: 20,
          ),
          customButton(() {}, "Following")
        ],
      ),
    );
  }
}

class CustomRow3 extends StatelessWidget {
  final String profilePictureURL;
  final String name;

  CustomRow3({this.name, this.profilePictureURL});

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.only(bottom: 15.0),
      child: Row(
        mainAxisAlignment: MainAxisAlignment.spaceAround,
        children: [
          Stack(
            alignment: Alignment.bottomCenter,
            children: [
              Container(
                width: 70,
                height: 70,
                child: CircleAvatar(
                  backgroundImage: NetworkImage(profilePictureURL),
                ),
              ),
              Card(
                color: Color(0xFFE61610),
                child: Padding(
                  padding: const EdgeInsets.fromLTRB(8, 0, 8, 0),
                  child: Text(
                    "LIVE",
                    style: TextStyle(color: Colors.white, fontSize: 13),
                  ),
                ),
              ),
            ],
          ),
          Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              Text(
                name,
                style: TextStyle(fontWeight: FontWeight.bold),
              ),
              Text(
                "Description bio",
                style: TextStyle(color: Colors.grey[350]),
              ),
            ],
          ),
          SizedBox(
            width: 20,
          ),
          customButton(() {}, "Following")
        ],
      ),
    );
  }
}
