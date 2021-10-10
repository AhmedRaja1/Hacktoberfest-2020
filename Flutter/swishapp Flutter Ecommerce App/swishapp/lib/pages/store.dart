import 'package:flutter/material.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';
import 'package:swishapp/pages/itemdata.dart';

class Store extends StatefulWidget {
  @override
  _StoreState createState() => _StoreState();
}

class _StoreState extends State<Store> {
  double height = 70;
  bool five = true;
  bool six = false;
  bool seven = false;
  bool eight = false;
  bool nine = false;
  bool ten = false;

  bool women = true;
  bool men = false;
  bool kids = false;
  bool brand = false;
  Widget customverticaldivider() {
    return Container(
      width: 5,
      height: 80,
      color: Colors.red,
    );
  }

  Widget customTopRowCard(String text, Function onPressed, Color color) {
    return GestureDetector(
      onTap: onPressed,
      child: Container(
        width: 100,
        height: 50,
        child: Card(
          child: Center(
              child: Text(
            text.toUpperCase(),
            style: TextStyle(color: color),
          )),
          elevation: 5,
          shape: RoundedRectangleBorder(
            borderRadius: BorderRadius.circular(40.0),
          ),
        ),
      ),
    );
  }

  String profilePictureURL =
      "https://storage.needpix.com/rsynced_images/smile-1726471_1280.jpg";

  Widget customverticaldividernull() {
    return Container(
      width: 5,
      height: 30,
      color: Colors.white,
    );
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.white,
      appBar: AppBar(
        centerTitle: true,
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
              icon: Icon(Icons.search, color: Colors.black), onPressed: () {}),
          GestureDetector(
              onTap: () {}, child: Image.asset("assets/images/4.PNG"))
        ],
      ),
      body: Column(
        children: [
          Divider(
            color: Colors.grey,
          ),
          SingleChildScrollView(
            scrollDirection: Axis.horizontal,
            child: Row(
              mainAxisAlignment: MainAxisAlignment.spaceEvenly,
              children: [
                GestureDetector(
                  onTap: () {
                    setState(() {
                      women = true;
                      men = false;
                      kids = false;
                      brand = false;
                    });
                  },
                  child: Container(
                    width: 100,
                    height: 50,
                    child: Card(
                      child: Center(
                          child: Text(
                        "women".toUpperCase(),
                        style: TextStyle(
                            color: women ? Colors.orange : Colors.black),
                      )),
                      elevation: 5,
                      shape: RoundedRectangleBorder(
                        side: women
                            ? BorderSide(color: Colors.orange, width: 2.0)
                            : BorderSide(color: Colors.white, width: 2.0),
                        borderRadius: BorderRadius.circular(40.0),
                      ),
                    ),
                  ),
                ),
                GestureDetector(
                  onTap: () {
                    setState(() {
                      women = false;
                      men = true;
                      kids = false;
                      brand = false;
                    });
                  },
                  child: Container(
                    width: 100,
                    height: 50,
                    child: Card(
                      child: Center(
                          child: Text(
                        "men".toUpperCase(),
                        style: TextStyle(
                            color: men ? Colors.orange : Colors.black),
                      )),
                      elevation: 5,
                      shape: RoundedRectangleBorder(
                        side: men
                            ? BorderSide(color: Colors.orange, width: 2.0)
                            : BorderSide(color: Colors.white, width: 2.0),
                        borderRadius: BorderRadius.circular(40.0),
                      ),
                    ),
                  ),
                ),
                GestureDetector(
                  onTap: () {
                    setState(() {
                      women = false;
                      men = false;
                      kids = true;
                      brand = false;
                    });
                  },
                  child: Container(
                    width: 100,
                    height: 50,
                    child: Card(
                      child: Center(
                          child: Text(
                        "kids".toUpperCase(),
                        style: TextStyle(
                            color: kids ? Colors.orange : Colors.black),
                      )),
                      elevation: 5,
                      shape: RoundedRectangleBorder(
                        side: kids
                            ? BorderSide(color: Colors.orange, width: 2.0)
                            : BorderSide(color: Colors.white, width: 2.0),
                        borderRadius: BorderRadius.circular(40.0),
                      ),
                    ),
                  ),
                ),
                GestureDetector(
                  onTap: () {
                    setState(() {
                      women = false;
                      men = false;
                      kids = false;
                      brand = true;
                    });
                  },
                  child: Container(
                    width: 100,
                    height: 50,
                    child: Card(
                      child: Center(
                          child: Text(
                        "brands".toUpperCase(),
                        style: TextStyle(
                            color: brand ? Colors.orange : Colors.black),
                      )),
                      elevation: 5,
                      shape: RoundedRectangleBorder(
                        side: brand
                            ? BorderSide(color: Colors.orange, width: 2.0)
                            : BorderSide(color: Colors.white, width: 2.0),
                        borderRadius: BorderRadius.circular(40.0),
                      ),
                    ),
                  ),
                ),
              ],
            ),
          ),
          Padding(
            padding: const EdgeInsets.only(top: 18.0),
            child: Divider(
              color: Colors.grey,
            ),
          ),
          Expanded(
            child: Row(
              mainAxisAlignment: MainAxisAlignment.start,
              children: [
                SingleChildScrollView(
                  child: Expanded(
                      flex: 2,
                      child: Column(
                        children: [
                          Padding(
                            padding: const EdgeInsets.only(bottom: 2.0),
                            child: Row(
                              children: [
                                five
                                    ? customverticaldivider()
                                    : customverticaldividernull(),
                                Container(
                                    width: 55,
                                    height: 80,
                                    child: GestureDetector(
                                      onTap: () {
                                        setState(() {
                                          five = true;
                                          six = false;
                                          seven = false;
                                          eight = false;
                                          nine = false;
                                          ten = false;
                                          Navigator.push(
                                              context,
                                              MaterialPageRoute(
                                                  builder: (context) =>
                                                      ItemData()));
                                        });
                                      },
                                      child: Column(
                                        children: [
                                          Image.asset("assets/images/5.PNG"),
                                        ],
                                      ),
                                    )),
                              ],
                            ),
                          ),
                          Padding(
                            padding: const EdgeInsets.only(bottom: 2.0),
                            child: Row(
                              children: [
                                six
                                    ? customverticaldivider()
                                    : customverticaldividernull(),
                                GestureDetector(
                                  onTap: () {
                                    setState(() {
                                      five = false;
                                      six = true;
                                      seven = false;
                                      eight = false;
                                      nine = false;
                                      ten = false;
                                      Navigator.push(
                                          context,
                                          MaterialPageRoute(
                                              builder: (context) =>
                                                  ItemData()));
                                    });
                                  },
                                  child: Container(
                                      width: 55,
                                      height: 80,
                                      child: Column(
                                        children: [
                                          Image.asset("assets/images/6.PNG"),
                                        ],
                                      )),
                                ),
                              ],
                            ),
                          ),
                          Padding(
                            padding: const EdgeInsets.only(bottom: 2.0),
                            child: Row(
                              children: [
                                seven
                                    ? customverticaldivider()
                                    : customverticaldividernull(),
                                GestureDetector(
                                  onTap: () {
                                    setState(() {
                                      five = false;
                                      six = false;
                                      seven = true;
                                      eight = false;
                                      nine = false;
                                      ten = false;
                                      Navigator.push(
                                          context,
                                          MaterialPageRoute(
                                              builder: (context) =>
                                                  ItemData()));
                                    });
                                  },
                                  child: Container(
                                      width: 55,
                                      height: 80,
                                      child: Column(
                                        children: [
                                          Image.asset("assets/images/7.PNG"),
                                        ],
                                      )),
                                ),
                              ],
                            ),
                          ),
                          Padding(
                            padding: const EdgeInsets.only(bottom: 2.0),
                            child: Row(
                              children: [
                                eight
                                    ? customverticaldivider()
                                    : customverticaldividernull(),
                                GestureDetector(
                                  onTap: () {
                                    setState(() {
                                      five = false;
                                      six = false;
                                      seven = false;
                                      eight = true;
                                      nine = false;
                                      ten = false;
                                      Navigator.push(
                                          context,
                                          MaterialPageRoute(
                                              builder: (context) =>
                                                  ItemData()));
                                    });
                                  },
                                  child: Container(
                                      width: 55,
                                      height: 80,
                                      child: Column(
                                        children: [
                                          Image.asset("assets/images/8.PNG"),
                                        ],
                                      )),
                                ),
                              ],
                            ),
                          ),
                          Padding(
                            padding: const EdgeInsets.only(bottom: 2.0),
                            child: Row(
                              children: [
                                nine
                                    ? customverticaldivider()
                                    : customverticaldividernull(),
                                GestureDetector(
                                  onTap: () {
                                    setState(() {
                                      five = false;
                                      six = false;
                                      seven = false;
                                      eight = false;
                                      nine = true;
                                      ten = false;
                                      Navigator.push(
                                          context,
                                          MaterialPageRoute(
                                              builder: (context) =>
                                                  ItemData()));
                                    });
                                  },
                                  child: Container(
                                      width: 55,
                                      height: 80,
                                      child: Column(
                                        children: [
                                          Image.asset("assets/images/9.PNG"),
                                        ],
                                      )),
                                ),
                              ],
                            ),
                          ),
                          Padding(
                            padding: const EdgeInsets.only(bottom: 2.0),
                            child: Row(
                              children: [
                                ten
                                    ? customverticaldivider()
                                    : customverticaldividernull(),
                                GestureDetector(
                                  onTap: () {
                                    setState(() {
                                      five = false;
                                      six = false;
                                      seven = false;
                                      eight = false;
                                      nine = false;
                                      ten = true;
                                      Navigator.push(
                                          context,
                                          MaterialPageRoute(
                                              builder: (context) =>
                                                  ItemData()));
                                    });
                                  },
                                  child: Container(
                                      width: 55,
                                      height: 80,
                                      child: Column(
                                        children: [
                                          Image.asset("assets/images/10.PNG"),
                                        ],
                                      )),
                                ),
                              ],
                            ),
                          ),
                        ],
                      )),
                ),
                SingleChildScrollView(
                  child: Column(
                    children: [
                      customColumn("Shop by Style", "Casual", "Basics", "Sexy"),
                      customColumn("Shop by Color", "White", "Black", "Red"),
                      customColumn("Shop by Color", "White", "Black", "Red"),
                      Padding(
                        padding: const EdgeInsets.only(top: 8.0, bottom: 20),
                        child: Row(
                          children: [
                            Padding(
                                padding: const EdgeInsets.only(right: 8.0),
                                child: Column(
                                  children: [
                                    newimagecontainer(
                                        "https://images.unsplash.com/photo-1534723452862-4c874018d66d?ixid=MXwxMjA3fDB8MHxzZWFyY2h8MXx8Z3JvY2VyeXxlbnwwfHwwfA%3D%3D&ixlib=rb-1.2.1&w=1000&q=80"),
                                    Row(
                                      children: [
                                        Container(
                                          width: 50,
                                          height: 50,
                                          child: CircleAvatar(
                                            backgroundImage:
                                                NetworkImage(profilePictureURL),
                                          ),
                                        ),
                                        Column(
                                          children: [
                                            Text("Stream Title"),
                                            Container(
                                              width: 70,
                                              height: 40,
                                              child: Card(
                                                color: Colors.grey[200],
                                                shape: RoundedRectangleBorder(
                                                  borderRadius:
                                                      BorderRadius.circular(
                                                          10.0),
                                                ),
                                                child: Center(
                                                  child: Text("Dresses"),
                                                ),
                                              ),
                                            )
                                          ],
                                        )
                                      ],
                                    ),
                                  ],
                                )),
                            Column(
                              children: [
                                newimagecontainer(
                                    "https://images.unsplash.com/photo-1534723452862-4c874018d66d?ixid=MXwxMjA3fDB8MHxzZWFyY2h8MXx8Z3JvY2VyeXxlbnwwfHwwfA%3D%3D&ixlib=rb-1.2.1&w=1000&q=80"),
                                Row(
                                  children: [
                                    Container(
                                      width: 50,
                                      height: 50,
                                      child: CircleAvatar(
                                        backgroundImage:
                                            NetworkImage(profilePictureURL),
                                      ),
                                    ),
                                    Column(
                                      children: [
                                        Text("Stream Title"),
                                        Container(
                                          width: 70,
                                          height: 40,
                                          child: Card(
                                            color: Colors.grey[200],
                                            shape: RoundedRectangleBorder(
                                              borderRadius:
                                                  BorderRadius.circular(5),
                                            ),
                                            child: Center(
                                              child: Text("Dresses"),
                                            ),
                                          ),
                                        )
                                      ],
                                    )
                                  ],
                                ),
                              ],
                            )
                          ],
                        ),
                      )
                    ],
                  ),
                )
              ],
            ),
          )
        ],
      ),
    );
  }
}

Widget newimagecontainer(String url) {
  int views = 10;
  return Container(
    height: 100,
    width: 140,
    child: Stack(
      children: [
        ClipRRect(
          borderRadius: BorderRadius.circular(20.0),
          child: Image.network(url, fit: BoxFit.fitHeight),
        ),
        Padding(
          padding: const EdgeInsets.all(8.0),
          child: Container(
            width: 70,
            child: Card(
              color: Colors.black38,
              child: Row(
                children: [
                  Icon(
                    FontAwesomeIcons.eye,
                    size: 15,
                    color: Colors.white,
                  ),
                  Padding(
                    padding: const EdgeInsets.only(left: 8.0),
                    child: Text(
                      "$views k",
                      style: TextStyle(color: Colors.white),
                    ),
                  )
                ],
              ),
            ),
          ),
        ),
        Center(
            child: Padding(
          padding: const EdgeInsets.only(bottom: 28.0),
          child: Icon(
            Icons.play_arrow,
            color: Colors.white,
            size: 40,
          ),
        ))
      ],
    ),
  );
}

Widget customColumn(String title, String title2, String title3, String title4) {
  double height = 100.0;
  double width = 100.0;
  return Column(
    children: [
      Padding(
        padding: const EdgeInsets.only(right: 180.0, bottom: 25),
        child: Text(
          title,
          style: TextStyle(fontWeight: FontWeight.bold),
        ),
      ),
      SingleChildScrollView(
        scrollDirection: Axis.horizontal,
        child: Row(
          mainAxisAlignment: MainAxisAlignment.spaceEvenly,
          children: [
            Column(
              children: [
                Container(
                  height: height,
                  width: width,
                  child: Image.network(
                      "https://stylesatlife.com/wp-content/uploads/2018/03/Scalloped-neck-dress.jpg.webp"),
                ),
                Padding(
                  padding: const EdgeInsets.only(top: 15.0),
                  child: Text(title2),
                )
              ],
            ),
            Column(
              children: [
                Container(
                  height: height,
                  width: width,
                  child: Image.network(
                      "https://rukminim1.flixcart.com/image/714/857/kc3p30w0/dress/q/c/w/xl-lsdr4589-lady-stark-original-imaftaznddzhh53n.jpeg?q=50"),
                ),
                Padding(
                  padding: const EdgeInsets.only(top: 15.0),
                  child: Text(title3),
                )
              ],
            ),
            Column(
              children: [
                Container(
                  height: height,
                  width: width,
                  child: Image.network(
                      "https://images.dresshead.com/images/dress/Sexy%20Dresses/3375068/3375068.jpg"),
                ),
                Padding(
                  padding: const EdgeInsets.only(top: 15.0),
                  child: Text(title4),
                )
              ],
            ),
          ],
        ),
      )
    ],
  );
}

Widget profilepicture(profilePictureURL) {
  return Padding(
    padding: const EdgeInsets.only(bottom: 2.0),
    child: Container(
      width: 70,
      height: 70,
      child: CircleAvatar(
        backgroundColor: Colors.red,
        backgroundImage: NetworkImage(profilePictureURL),
      ),
    ),
  );
}
