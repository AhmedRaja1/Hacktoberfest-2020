import 'package:flutter/material.dart';

class MyWork extends StatefulWidget {
  @override
  _MyWorkState createState() => _MyWorkState();
}

class _MyWorkState extends State<MyWork> {
  final img1 = AssetImage('assets/safar.png');
  final img2 = AssetImage('assets/sahulat.png');
  final img3 = AssetImage('assets/Geoshare.png');
  final img4 = AssetImage("assets/arrow.png");

  @override
  void didChangeDependencies() {
    precacheImage(img1, context);
    precacheImage(img2, context);
    precacheImage(img3, context);
    precacheImage(img4, context);
    super.didChangeDependencies();
  }

  @override
  Widget build(BuildContext context) {
    List apps = [
      {
        'title': 'Safar',
        'description':
            "This app's purpose is to help tourists in Pakistan and guide them this app has maps and other features aswell. An app that helps tourists in Pakistan",
        'img': img1,
      },
      {
        'title': 'Sahulat',
        'description':
            'This is a ecommerce app that serves as a local Daraz app for Pakistan. It is by Pakistani and for Pakistani',
        'img': img2,
      },
      {
        'title': 'Geoshare',
        'description':
            'In this project I developed an app that was capable of locating your location and transmitting it to a single SMS request which the user would define himself. The advantage was that in the event of a theft the user could SMS the secret message to the number and get the real-time coordinates. This is an open source project and available on github.',
        'img': img3,
      },
    ];
    return SingleChildScrollView(
        child: Center(
      child: Container(
        height: 500,
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          crossAxisAlignment: CrossAxisAlignment.center,
          children: [
            Expanded(
              flex: 5,
              child: ListView.builder(
                  scrollDirection: Axis.horizontal,
                  itemCount: apps.length,
                  itemBuilder: (contex, index) {
                    return AppDisplay(
                      image: apps[index]['img'],
                      apptitle: apps[index]['title'],
                      description: apps[index]['description'],
                    );
                  }),
            ),
            Expanded(
              child: Row(
                mainAxisAlignment: MainAxisAlignment.center,
                children: [
                  Image(
                    image: img4,
                    height: 55,
                  ),
                  Text("Scroll right for more",
                      style: TextStyle(
                          color: Colors.white,
                          fontSize: 15,
                          fontWeight: FontWeight.w200))
                ],
              ),
            )
          ],
        ),
      ),
    ));
  }
}

/*
  AppDisplay(
                  image: "assets/safar.png",
                  apptitle: "Safar",
                  description:
                      "This app's purpose is to help tourists in Pakistan and guide them this app has maps and other features aswell. An app that helps tourists in Pakistan ",
                ),
                AppDisplay(
                  image: "assets/swish.png",
                  apptitle: "Swish",
                  description:
                      "This app was for a client and this is a ecommerce combination of a social media and live app",
                ),
                AppDisplay(
                  image: "assets/sahulat.png",
                  apptitle: "Sahulat",
                  description:
                      "This is a ecommerce app that serves as a local Daraz app for Pakistan. It is by Pakistani and for Pakistani",
                ),
                AppDisplay(
                  image: "assets/Geoshare.png",
                  apptitle: "Geoshare",
                  description:
                      "In this project I developed an app that was capable of locating your location and transmitting it to a single SMS request which the user would define himself. The advantage was that in the event of a theft the user could SMS the secret message to the number and get the real-time coordinates. This is an open source project and available on github.",
                ),
*/

class AppDisplay extends StatelessWidget {
  final AssetImage image;
  final String apptitle;
  final String description;
  AppDisplay({
    this.image,
    this.apptitle,
    this.description,
  });

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.fromLTRB(200, 0, 200, 0),
      child: Row(
        mainAxisAlignment: MainAxisAlignment.center,
        crossAxisAlignment: CrossAxisAlignment.center,
        children: [
          Image(image: image, height: 500),
          SizedBox(width: 15),
          Container(
            width: 700,
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                SizedBox(
                  height: 80,
                ),
                Text(
                  apptitle,
                  style: TextStyle(
                      fontSize: 30,
                      fontFamily: 'Agustina',
                      color: Colors.white,
                      fontWeight: FontWeight.w600),
                ),
                Text(
                  description,
                  style: TextStyle(
                      fontSize: 20,
                      color: Colors.white,
                      fontWeight: FontWeight.w300),
                ),
              ],
            ),
          ),
        ],
      ),
    );
  }
}
