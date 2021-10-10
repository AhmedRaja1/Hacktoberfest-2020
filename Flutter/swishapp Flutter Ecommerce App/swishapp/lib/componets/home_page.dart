import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:carousel_pro/carousel_pro.dart';
import 'package:smooth_star_rating/smooth_star_rating.dart';
import 'package:swishapp/categories/pages/categories.dart';
import 'package:swishapp/componets/searchdata.dart';
import 'package:swishapp/pages/Cart.dart';

//my own imports

import 'package:swishapp/pages/chat.dart';
import 'package:swishapp/pages/grid4view.dart';
import 'package:swishapp/pages/liveScreen.dart';
import 'package:swishapp/pages/store.dart';
import 'package:swishapp/screens/screen1.dart';

class HomePage extends StatefulWidget {
  @override
  _HomePageState createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
  final firestoreInstance = FirebaseFirestore.instance;

  List firebaseflashdata = [];

  _onPressed() async {
    await firestoreInstance.collection("Products").get().then((querySnapshot) {
      querySnapshot.docs.forEach((result) {
        firestoreInstance
            .collection("Products")
            .doc(result.id)
            .collection("flashdeals")
            .get()
            .then((querySnapshot) {
          querySnapshot.docs.forEach((result) {
            setState(() {
              firebaseflashdata.add(result.data());
            });
            print(firebaseflashdata);
          });
        });
      });
    });
  }

  int currentIndex;
  @override
  void initState() {
    super.initState();
    currentIndex = 0;
    _onPressed();
  }

  void changePage(int index) {
    setState(() {
      currentIndex = index;
    });
  }

  bool home = true;
  bool women = false;
  bool men = false;
  bool kids = false;
  bool click = false;
  bool click2 = false;
  bool click3 = false;
  bool click4 = false;
  var rating = 3.0;
  @override
  Widget build(BuildContext context) {
    Widget imageCarousel = new Container(
      height: 200,
      child: new Carousel(
        boxFit: BoxFit.cover,
        images: [
          AssetImage('assets/img/carosel1.jpg'),
          AssetImage('assets/img/carosel2.jpg'),
          AssetImage('assets/img/carosel3.jpg'),
          AssetImage('assets/img/carosel4.jpg'),
        ],
        dotSize: 4.0,
        dotSpacing: 10.0,
        dotColor: Colors.white,
        dotIncreasedColor: Colors.red,
        indicatorBgPadding: 5.0,
        dotBgColor: Colors.transparent,
        autoplay: true,
        animationCurve: Curves.fastLinearToSlowEaseIn,
        animationDuration: Duration(microseconds: 30000),
      ),
    );

    return Scaffold(
      backgroundColor: Colors.white,
      body: SafeArea(
        child: Column(
          children: [
            Row(
              mainAxisAlignment: MainAxisAlignment.spaceBetween,
              children: [
                IconButton(
                  icon: Icon(
                    Icons.notification_important_outlined,
                    color: Colors.black,
                  ),
                  onPressed: () {},
                ),
                IconButton(
                  icon: Icon(
                    Icons.favorite_border_sharp,
                    color: Colors.black,
                  ),
                  onPressed: () {},
                ),
                Text(
                  "SWISH",
                  style: TextStyle(fontSize: 20, fontWeight: FontWeight.bold),
                ),
                IconButton(
                  icon: Icon(
                    Icons.search,
                    color: Colors.black,
                  ),
                  onPressed: () {
                    showSearch(context: context, delegate: Searchbar());
                  },
                ),
                IconButton(
                  icon: Icon(
                    Icons.shopping_bag_outlined,
                    color: Colors.black,
                  ),
                  onPressed: () {
                    Navigator.push(context,
                        MaterialPageRoute(builder: (context) => Cart()));
                  },
                ),
              ],
            ),
            Expanded(
              child: new ListView(
                children: [
                  imageCarousel,
                  SizedBox(
                    height: 20,
                  ),
                  //Buttons in bottom of carosel i(0xFFFF8351) with their label
                  Padding(
                    padding: EdgeInsets.only(right: 10, left: 10),
                    child: Row(
                      mainAxisAlignment: MainAxisAlignment.spaceBetween,
                      children: [
                        rowicon(() {
                          Navigator.push(context,
                              MaterialPageRoute(builder: (context) => Store()));
                        }, Color(0xFFFF8351), Colors.white, 'Categories',
                            Icons.list),
                        rowicon(() {
                          Navigator.push(
                              context,
                              MaterialPageRoute(
                                  builder: (context) => LiveScreen()));
                        }, Color(0xFFFF8351), Colors.white, 'Streams',
                            Icons.play_arrow),
                        specialrowicon(() {
                          Navigator.push(
                              context,
                              MaterialPageRoute(
                                  builder: (context) => Categories()));
                        }),
                        rowicon(() {
                          /*Navigator.push(
                              context,
                              MaterialPageRoute(
                                  builder: (context) => Setting()));*/
                        }, Color(0xFFFF8351), Colors.white, 'Flash Deals',
                            Icons.flash_on_sharp),
                        rowicon(() {
                          Navigator.push(context,
                              MaterialPageRoute(builder: (context) => Chat()));
                        }, Color(0xFFFF8351), Colors.white, 'TOP',
                            Icons.thumb_up),
                      ],
                    ),
                  ),

                  SizedBox(
                    height: 20.0,
                  ),
                  Padding(
                    padding: EdgeInsets.only(right: 10, left: 10),
                    child: new Text(
                      'POPULAR LIVE STREAM',
                      style:
                          TextStyle(fontSize: 18, fontWeight: FontWeight.bold),
                    ),
                  ),

                  SizedBox(height: 270, child: Screen1()),
                  Column(children: [
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
                                home = true;
                                women = false;
                                men = false;
                                kids = false;
                                home = true;
                              });
                            },
                            child: Container(
                              width: 100,
                              height: 50,
                              child: Card(
                                child: Center(
                                    child: Text(
                                  "home".toUpperCase(),
                                  style: TextStyle(
                                      color:
                                          home ? Colors.orange : Colors.black),
                                )),
                                elevation: 2,
                                shape: RoundedRectangleBorder(
                                  side: home
                                      ? BorderSide(
                                          color: Colors.orange, width: 2.0)
                                      : BorderSide(
                                          color: Colors.white, width: 2.0),
                                  borderRadius: BorderRadius.circular(40.0),
                                ),
                              ),
                            ),
                          ),
                          GestureDetector(
                            onTap: () {
                              setState(() {
                                home = false;
                                women = true;
                                men = false;
                                kids = false;
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
                                      color:
                                          women ? Colors.orange : Colors.black),
                                )),
                                elevation: 2,
                                shape: RoundedRectangleBorder(
                                  side: women
                                      ? BorderSide(
                                          color: Colors.orange, width: 2.0)
                                      : BorderSide(
                                          color: Colors.white, width: 2.0),
                                  borderRadius: BorderRadius.circular(40.0),
                                ),
                              ),
                            ),
                          ),
                          GestureDetector(
                            onTap: () {
                              setState(() {
                                home = false;
                                women = false;
                                men = true;
                                kids = false;
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
                                      color:
                                          men ? Colors.orange : Colors.black),
                                )),
                                elevation: 2,
                                shape: RoundedRectangleBorder(
                                  side: men
                                      ? BorderSide(
                                          color: Colors.orange, width: 2.0)
                                      : BorderSide(
                                          color: Colors.white, width: 2.0),
                                  borderRadius: BorderRadius.circular(40.0),
                                ),
                              ),
                            ),
                          ),
                          GestureDetector(
                            onTap: () {
                              setState(() {
                                home = false;
                                women = false;
                                men = false;
                                kids = true;
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
                                      color:
                                          kids ? Colors.orange : Colors.black),
                                )),
                                elevation: 2,
                                shape: RoundedRectangleBorder(
                                  side: kids
                                      ? BorderSide(
                                          color: Colors.orange, width: 2.0)
                                      : BorderSide(
                                          color: Colors.white, width: 2.0),
                                  borderRadius: BorderRadius.circular(40.0),
                                ),
                              ),
                            ),
                          ),
                        ],
                      ),
                    ),
                  ]),
                  home
                      ? Gird4()
                      : women
                          ? WomenGrid()
                          : men
                              ? MenGrid()
                              : KidsGrid(),

                  Container(
                    height: 150.0,
                    padding: const EdgeInsets.all(8),
                    decoration: BoxDecoration(
                        image: DecorationImage(
                            image: AssetImage("assets/img/carosel4.jpg"),
                            fit: BoxFit.cover)),
                  ),
                  SizedBox(
                    height: 10.0,
                  ),
                  new Padding(
                    padding: EdgeInsets.only(right: 10, left: 10),
                    child: new Text(
                      'FlASH DEALS',
                      style:
                          TextStyle(fontSize: 18, fontWeight: FontWeight.bold),
                    ),
                  ),
                  SizedBox(height: 10),
                  Container(
                      padding: EdgeInsets.fromLTRB(8, 0, 8, 0),
                      height: 320.0,
                      child: GridView.builder(
                        gridDelegate: SliverGridDelegateWithMaxCrossAxisExtent(
                          maxCrossAxisExtent: 200,
                          childAspectRatio: 1.95 / 2,
                          crossAxisSpacing: 10,
                        ),
                        itemCount: firebaseflashdata.length,
                        itemBuilder: (BuildContext ctx, index) {
                          return Gridelementshome(
                              firebaseflashdata[index]['stars'] + .0,
                              firebaseflashdata[index]['image'],
                              firebaseflashdata[index]['name'],
                              firebaseflashdata[index]['like'],
                              firebaseflashdata[index]['rating'],
                              firebaseflashdata[index]['subtitle'],
                              firebaseflashdata[index]['price']);
                        },
                      )),
                  SizedBox(
                    height: 10,
                  ),

                  BottomRow("Terms & Conditions"),
                  BottomRow("Privacy Policy"),
                  BottomRow("How to Pay"),
                  BottomRow("Shipping Info"),
                ],
              ),
            ),
          ],
        ),
      ),
    );
  }
}

class BottomRow extends StatelessWidget {
  final String title;

  BottomRow(this.title);
  @override
  Widget build(BuildContext context) {
    return Row(mainAxisAlignment: MainAxisAlignment.spaceBetween, children: [
      Padding(
        padding: const EdgeInsets.only(left: 15, right: 15, bottom: 15),
        child: Text(
          title,
          style: TextStyle(
              fontSize: 18, fontWeight: FontWeight.w500, color: Colors.black),
        ),
      ),
      Padding(
          padding: const EdgeInsets.only(
            left: 15,
            right: 10,
          ),
          child: Icon(
            Icons.arrow_forward_ios,
            size: 20,
            color: Colors.black,
          ))
    ]);
  }
}

class Gridelementshome extends StatelessWidget {
  final double rating;
  final String image;
  final String title;
  final bool click;
  final int ratingnumber;
  final String subtitle;
  final int price;

  Gridelementshome(this.rating, this.image, this.title, this.click,
      this.ratingnumber, this.subtitle, this.price);

  @override
  Widget build(BuildContext context) {
    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: <Widget>[
        Stack(children: <Widget>[
          Container(
            height: 85,
            padding: EdgeInsets.all(
              20.0,
            ),
            decoration: BoxDecoration(
                borderRadius: BorderRadius.circular(12.0),
                image: DecorationImage(
                    image: NetworkImage(image), fit: BoxFit.contain)),
          ),
          Align(
            alignment: Alignment.bottomRight,
            child: Container(
              height: 40,
              width: 40,
              child: Card(
                elevation: 5,
                color: Colors.white,
                shape: RoundedRectangleBorder(
                    borderRadius: BorderRadius.circular(40)),
                child: Icon(
                    click ? Icons.favorite : Icons.favorite_border_outlined,
                    color: click ? Colors.red : Colors.black),
              ),
            ),
          )
        ]),
        Padding(
          padding: const EdgeInsets.only(top: 1.0),
          child: Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: [
              SmoothStarRating(
                rating: rating,
                isReadOnly: false,
                size: 20,
                filledIconData: Icons.star,
                halfFilledIconData: Icons.star_half,
                defaultIconData: Icons.star_border,
                starCount: 5,
                allowHalfRating: true,
                color: Colors.yellowAccent[400],
                borderColor: Colors.yellow,
                spacing: 1.0,
              ),
              Text(
                "($ratingnumber)",
                style: TextStyle(color: Colors.grey),
              ),
            ],
          ),
        ),
        Text(
          title,
          style: TextStyle(color: Colors.grey),
        ),
        Text(subtitle),
        Text(
          "\$$price",
          style: TextStyle(color: Colors.red),
        )
      ],
    );
  }
}

Widget rowicon(Function onPressed, Color color, Color iconcolor, String text,
    IconData icon) {
  return Column(
    children: [
      Container(
        width: 60,
        height: 60,
        child: Card(
          color: color,
          shape: RoundedRectangleBorder(
            borderRadius: BorderRadius.circular(40.0),
            side: BorderSide(color: Color(0xFFFF8351), width: 2.0),
          ),
          child: Center(
            child: IconButton(
                icon: Icon(
                  icon,
                  color: iconcolor,
                ),
                iconSize: 30.0,
                onPressed: onPressed),
          ),
        ),
      ),
      SizedBox(
        height: 2,
      ),
      Text(
        text,
        style: TextStyle(fontSize: 12, fontWeight: FontWeight.bold),
      ),
    ],
  );
}

Widget specialrowicon(Function onPressed) {
  return Column(
    children: [
      Container(
        width: 60,
        height: 60,
        child: Card(
          shape: RoundedRectangleBorder(
            borderRadius: BorderRadius.circular(40.0),
            side: BorderSide(color: Color(0xFFFF8351), width: 2.0),
          ),
          child: Center(
            child: IconButton(
                icon: Icon(
                  Icons.wallet_giftcard_sharp,
                  color: Color(0xFFFF8351),
                ),
                iconSize: 30.0,
                onPressed: onPressed),
          ),
        ),
      ),
      SizedBox(
        height: 3,
      ),
      Text(
        'Gifts',
        style: TextStyle(fontSize: 12, fontWeight: FontWeight.bold),
      ),
    ],
  );
}

class Searchbar extends SearchDelegate {
  @override
  List<Widget> buildActions(BuildContext context) {
    return [
      IconButton(
          icon: Icon(Icons.clear),
          onPressed: () {
            query = "";
          })
    ];
  }

  @override
  Widget buildLeading(BuildContext context) {
    return IconButton(
        icon: Icon(Icons.keyboard_arrow_left),
        onPressed: () {
          Navigator.pop(context);
        });
  }

  @override
  Widget buildResults(BuildContext context) {
    return null;
  }

  @override
  Widget buildSuggestions(BuildContext context) {
    final String query1 = query.toLowerCase();
    final mysearchlist1 = query1.isEmpty
        ? searchlist
        : searchlist.where((p) => p.title.startsWith(query1)).toList();
    return mysearchlist1.isEmpty
        ? Center(
            child: Text("No Results Found...", style: TextStyle(fontSize: 22)))
        : ListView.builder(
            itemCount: mysearchlist1.length,
            itemBuilder: (context, index) {
              final listitem = mysearchlist1[index];
              return ListTile(
                title: Text(listitem.title),
              );
            });
  }
}
