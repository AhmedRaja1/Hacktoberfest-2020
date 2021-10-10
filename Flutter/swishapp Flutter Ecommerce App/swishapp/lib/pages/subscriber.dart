import 'package:flutter/material.dart';

class Subscriber extends StatefulWidget {
  @override
  _SubscriberState createState() => _SubscriberState();
}

class _SubscriberState extends State<Subscriber> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
        backgroundColor: Colors.white,
        appBar: AppBar(
          elevation: 0.0,
          backgroundColor: Colors.white,
          leading: IconButton(
              icon: Icon(Icons.arrow_back_ios, color: Colors.black),
              onPressed: () {
                Navigator.pop(context);
              }),
          title: Text(
            "Categories",
            style: TextStyle(color: Colors.black),
          ),
          actions: [
            IconButton(
                icon: Icon(Icons.search, color: Colors.black),
                onPressed: () {}),
            GestureDetector(
                onTap: () {}, child: Image.asset("assets/images/4.PNG"))
          ],
        ),
        body: SingleChildScrollView(
            child: Column(
          children: [
            Container(
              child: Stack(
                alignment: Alignment.centerLeft,
                children: [
                  Image.network(
                      "https://www.mediafusionapp.com/wp-content/uploads/2018/07/Camera-films-concert-and-phone-wathces-it.jpg"),
                  Padding(
                    padding: const EdgeInsets.all(8.0),
                    child: Row(
                      children: [
                        Column(
                          children: [
                            SizedBox(
                              height: 50,
                            ),
                            Row(
                              children: [
                                Container(
                                  width: 70,
                                  height: 70,
                                  child: CircleAvatar(
                                    backgroundImage: NetworkImage(
                                        "https://writestylesonline.com/wp-content/uploads/2019/01/What-To-Wear-For-Your-Professional-Profile-Picture-or-Headshot.jpg"),
                                  ),
                                ),
                                SizedBox(
                                  width: 10,
                                ),
                                Column(
                                  crossAxisAlignment: CrossAxisAlignment.start,
                                  children: [
                                    Padding(
                                      padding:
                                          const EdgeInsets.only(right: 50.0),
                                      child: Text(
                                        "Sarah Ben Elish",
                                        style: TextStyle(
                                            color: Colors.white,
                                            fontSize: 25,
                                            fontWeight: FontWeight.bold),
                                      ),
                                    ),
                                    Row(
                                      mainAxisAlignment:
                                          MainAxisAlignment.start,
                                      children: [
                                        Container(
                                          height: 30,
                                          width: 70,
                                          child: Card(
                                            color: Colors.grey,
                                            child: Center(
                                              child: Text(
                                                "English",
                                                style: TextStyle(
                                                  color: Colors.white,
                                                ),
                                              ),
                                            ),
                                          ),
                                        ),
                                        SizedBox(
                                          width: 10,
                                        ),
                                        Container(
                                          height: 30,
                                          width: 70,
                                          child: Card(
                                            color: Colors.grey,
                                            child: Center(
                                              child: Text(
                                                "Makeup",
                                                style: TextStyle(
                                                  color: Colors.white,
                                                ),
                                              ),
                                            ),
                                          ),
                                        ),
                                      ],
                                    )
                                  ],
                                ),
                              ],
                            ),
                          ],
                        ),
                      ],
                    ),
                  ),
                ],
              ),
            ),
            Custom("Your Subscription: \$9.90", "Renews monthly for US \$4.99",
                "Renew"),
            Custom("Level 2 Subscription", "Renews monthly for US \$9.99",
                "\$9.99"),
            Custom("Level 3 Subscription", "Renews monthly for US \$24.99",
                "\$24.99")
          ],
        )));
  }
}

class Custom extends StatelessWidget {
  final String text3;
  final String text1;
  final String text2;
  Custom(
    this.text1,
    this.text2,
    this.text3,
  );

  @override
  Widget build(BuildContext context) {
    return Container(
      height: MediaQuery.of(context).size.height / 5.5,
      width: MediaQuery.of(context).size.width,
      child: Card(
        shape: RoundedRectangleBorder(
            side: BorderSide(color: Colors.grey, width: 1)),
        child: Padding(
          padding: const EdgeInsets.all(8.0),
          child: Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: [
              Column(
                mainAxisAlignment: MainAxisAlignment.center,
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  Text(
                    text1,
                    style: TextStyle(
                        color: Colors.red,
                        fontSize: 20,
                        fontWeight: FontWeight.bold),
                  ),
                  SizedBox(
                    height: 5,
                  ),
                  Text(
                    text2,
                    style: TextStyle(
                      fontSize: 18,
                    ),
                  ),
                ],
              ),
              ElevatedButton(
                  style: ButtonStyle(
                      backgroundColor:
                          MaterialStateProperty.all<Color>(Colors.red)),
                  onPressed: () {},
                  child: Text(text3))
            ],
          ),
        ),
      ),
    );
  }
}
