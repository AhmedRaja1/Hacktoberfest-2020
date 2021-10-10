import 'package:flutter/material.dart';
import 'package:finite_coverflow/finite_coverflow.dart';

import 'package:smooth_star_rating/smooth_star_rating.dart';

class Details extends StatefulWidget {
  @override
  _DetailsState createState() => _DetailsState();
}

class _DetailsState extends State<Details> {
  bool click = false;
  bool click2 = false;
  bool click3 = false;
  bool click4 = false;
  var rating = 3.0;

  @override
  Widget build(BuildContext context) {
    return Scaffold(
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
          "Details",
          style: TextStyle(color: Colors.black),
        ),
        actions: [
          IconButton(
              icon: Icon(Icons.search, color: Colors.black), onPressed: () {}),
          GestureDetector(
              onTap: () {}, child: Image.asset("assets/images/4.PNG"))
        ],
      ),
      bottomNavigationBar: BottomAppBar(
        child: Row(
          mainAxisAlignment: MainAxisAlignment.center,
          children: <Widget>[
            ElevatedButton(
                style: ButtonStyle(
                  backgroundColor: MaterialStateProperty.all<Color>(Colors.red),
                ),
                onPressed: () {},
                child: Padding(
                  padding: const EdgeInsets.fromLTRB(100, 10, 100, 10),
                  child: Row(
                    children: [
                      Icon(Icons.shopping_cart),
                      Text("Add to Cart"),
                    ],
                  ),
                ))
          ],
        ),
      ),
      body: SingleChildScrollView(
        child: Padding(
          padding: const EdgeInsets.all(8.0),
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              Card(
                elevation: 5,
                child: Padding(
                  padding: const EdgeInsets.all(8.0),
                  child: Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: [
                      Container(
                        height: 200,
                        child: FinitePager(
                          scrollDirection:
                              Axis.horizontal, // Scroll direction for pager
                          children: <Widget>[
                            // Add your child here
                            Container(
                              child: Center(
                                child: Card(
                                  shape: CircleBorder(),
                                  child: Image.asset(
                                    "assets/gird4/dress.jpg",
                                    fit: BoxFit.fill,
                                  ),
                                ),
                              ),
                            ),
                            Container(
                              child: Center(
                                child: Card(
                                  shape: CircleBorder(),
                                  child: Image.asset("assets/gird4/dress.jpg"),
                                ),
                              ),
                            ),
                            Container(
                              child: Center(
                                child: Card(
                                  shape: CircleBorder(),
                                  child: Image.asset("assets/gird4/dress.jpg"),
                                ),
                              ),
                            ),
                            Container(
                              child: Center(
                                child: Card(
                                  shape: CircleBorder(),
                                  child: Image.asset("assets/gird4/dress.jpg"),
                                ),
                              ),
                            ),
                            Container(
                              child: Center(
                                child: Card(
                                  shape: CircleBorder(),
                                  child: Image.asset("assets/gird4/dress.jpg"),
                                ),
                              ),
                            ),
                            Container(
                              child: Center(
                                child: Card(
                                  shape: CircleBorder(),
                                  child: Image.asset("assets/gird4/dress.jpg"),
                                ),
                              ),
                            ),
                          ],
                        ),
                      ),
                      Padding(
                        padding: const EdgeInsets.all(8.0),
                        child: Row(
                          mainAxisAlignment: MainAxisAlignment.start,
                          children: [
                            Card(
                              color: Color(0xFFE61610),
                              child: Padding(
                                padding: const EdgeInsets.fromLTRB(8, 5, 8, 5),
                                child: Text(
                                  "New",
                                  style: TextStyle(color: Colors.white),
                                ),
                              ),
                            ),
                          ],
                        ),
                      ),
                      Padding(
                        padding: const EdgeInsets.all(8.0),
                        child: Row(
                          mainAxisAlignment: MainAxisAlignment.start,
                          children: [
                            Column(
                              crossAxisAlignment: CrossAxisAlignment.start,
                              children: [
                                Text("T-Shirt -372 Blue"),
                                Text("Marque Exist",
                                    style: TextStyle(color: Colors.grey)),
                              ],
                            ),
                          ],
                        ),
                      ),
                      Padding(
                        padding: const EdgeInsets.all(8.0),
                        child: Row(
                          mainAxisAlignment: MainAxisAlignment.start,
                          children: [
                            Column(
                              mainAxisAlignment: MainAxisAlignment.start,
                              children: [
                                Text("125.00 TND",
                                    style: TextStyle(
                                        fontWeight: FontWeight.bold,
                                        fontSize: 22)),
                                Row(
                                  children: [
                                    Text("250.00 TND",
                                        style: TextStyle(
                                            color: Colors.grey,
                                            decoration:
                                                TextDecoration.lineThrough)),
                                    Card(
                                      color: Colors.yellow,
                                      child: Padding(
                                        padding: const EdgeInsets.fromLTRB(
                                            8, 5, 8, 5),
                                        child: Text(
                                          "-50%",
                                          style: TextStyle(color: Colors.red),
                                        ),
                                      ),
                                    ),
                                  ],
                                ),
                              ],
                            ),
                          ],
                        ),
                      ),
                      Padding(
                        padding: const EdgeInsets.all(8.0),
                        child: Row(
                          mainAxisAlignment: MainAxisAlignment.spaceBetween,
                          children: [
                            Row(
                              children: [
                                SmoothStarRating(
                                  rating: rating,
                                  isReadOnly: false,
                                  size: 25,
                                  filledIconData: Icons.star,
                                  halfFilledIconData: Icons.star_half,
                                  defaultIconData: Icons.star_border,
                                  starCount: 5,
                                  allowHalfRating: true,
                                  color: Colors.yellowAccent[400],
                                  borderColor: Colors.yellow,
                                  spacing: 1.0,
                                ),
                                Text("(2100)",
                                    style: TextStyle(
                                      color: Colors.grey,
                                    )),
                              ],
                            ),
                            Row(
                              children: [
                                Icon(Icons.share, color: Colors.red),
                                SizedBox(
                                  width: 10,
                                ),
                                Icon(Icons.favorite_border, color: Colors.red),
                              ],
                            )
                          ],
                        ),
                      ),
                      Divider(
                        color: Colors.grey,
                      ),
                      Row(
                        mainAxisAlignment: MainAxisAlignment.start,
                        children: [
                          Column(
                            crossAxisAlignment: CrossAxisAlignment.start,
                            children: [
                              Text(
                                "Sizes",
                                style: TextStyle(
                                  color: Colors.grey,
                                ),
                              ),
                              Image.asset("assets/log/sizes.PNG")
                            ],
                          ),
                        ],
                      ),
                    ],
                  ),
                ),
              ),
              Row(
                mainAxisAlignment: MainAxisAlignment.start,
                children: [
                  Text("details of product".toUpperCase(),
                      style: TextStyle(color: Colors.grey, fontSize: 20)),
                ],
              ),
              Card(
                child: Padding(
                  padding: const EdgeInsets.all(15.0),
                  child: Column(
                    children: [
                      Row(
                        mainAxisAlignment: MainAxisAlignment.spaceBetween,
                        children: [
                          Text("Description"),
                          Text(
                            "More Details",
                            style: TextStyle(
                                color: Colors.red,
                                decoration: TextDecoration.underline),
                          ),
                        ],
                      ),
                      Divider(
                        color: Colors.grey,
                      ),
                      Row(
                        mainAxisAlignment: MainAxisAlignment.spaceBetween,
                        children: [
                          Container(
                            width: 200,
                            child: Flexible(
                              child: Text(
                                  "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco"),
                            ),
                          ),
                          Column(
                            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                            children: [
                              Text(
                                "Model:",
                                style: TextStyle(color: Colors.grey),
                              ),
                              Text(
                                "Color:",
                                style: TextStyle(color: Colors.grey),
                              ),
                              Text(
                                "Weight:",
                                style: TextStyle(color: Colors.grey),
                              ),
                              Text(
                                "Quality:",
                                style: TextStyle(color: Colors.grey),
                              ),
                            ],
                          ),
                          SizedBox(
                            width: 50,
                          )
                        ],
                      )
                    ],
                  ),
                ),
              ),
              Row(
                mainAxisAlignment: MainAxisAlignment.start,
                children: [
                  Text("seller information".toUpperCase(),
                      style: TextStyle(color: Colors.grey, fontSize: 20)),
                ],
              ),
              Divider(
                color: Colors.grey,
              ),
              Card(
                  child: Padding(
                padding: const EdgeInsets.all(15.0),
                child: Column(children: [
                  Row(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
                    children: [
                      Text("Vender #1"),
                      Text(
                        "More Details",
                        style: TextStyle(
                            color: Colors.red,
                            decoration: TextDecoration.underline),
                      ),
                    ],
                  ),
                  Divider(
                    color: Colors.grey,
                  ),
                  Row(
                      mainAxisAlignment: MainAxisAlignment.spaceBetween,
                      children: [
                        Container(
                          width: 200,
                          child: Flexible(
                            child: Column(
                              crossAxisAlignment: CrossAxisAlignment.start,
                              children: [
                                Text("Score: 100%"),
                                Text("Subscribers: 220"),
                              ],
                            ),
                          ),
                        ),
                        ElevatedButton(
                          style: ButtonStyle(
                            backgroundColor:
                                MaterialStateProperty.all<Color>(Colors.red),
                          ),
                          onPressed: () {},
                          child: Text("Follow"),
                        )
                      ])
                ]),
              )),
              Row(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: [
                  Text("coustomers also viewed".toUpperCase(),
                      style: TextStyle(color: Colors.grey, fontSize: 20)),
                  Row(
                    children: [
                      Icon(Icons.keyboard_arrow_left),
                      Icon(Icons.keyboard_arrow_right)
                    ],
                  ),
                ],
              ),
              Divider(
                color: Colors.grey,
              ),
              SingleChildScrollView(
                scrollDirection: Axis.horizontal,
                child: Row(
                  children: [
                    BackGroundTile(
                      subtitle: "Green Dress",
                      title: "Dress",
                      image: "assets/gird4/dress.jpg",
                      ratingnumber: 80,
                      rating: 3.0,
                      press: true,
                    ),
                    BackGroundTile(
                      subtitle: "Green Dress",
                      title: "Dress",
                      image: "assets/gird4/dress.jpg",
                      ratingnumber: 80,
                      rating: 3.0,
                      press: false,
                    ),
                  ],
                ),
              ),
              Row(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: [
                  Container(
                    child: Flexible(
                      child: Text(
                          "delievery and return information".toUpperCase(),
                          style: TextStyle(color: Colors.grey, fontSize: 18)),
                    ),
                  ),
                ],
              ),
              Divider(
                color: Colors.grey,
              ),
              Card(
                elevation: 5,
                child: Padding(
                  padding: const EdgeInsets.all(8.0),
                  child: Column(
                    children: [
                      Row(
                        mainAxisAlignment: MainAxisAlignment.start,
                        children: [
                          Icon(Icons.local_shipping),
                          SizedBox(
                            width: 10,
                          ),
                          Column(
                            crossAxisAlignment: CrossAxisAlignment.start,
                            children: [
                              Container(child: Text("Delivery Inforamtion:")),
                              Text("Lorem ipsum dolor sit amet, consectetur",
                                  style: TextStyle(
                                    color: Colors.grey,
                                  )),
                            ],
                          )
                        ],
                      ),
                      SizedBox(
                        height: 10,
                      ),
                      Row(
                        mainAxisAlignment: MainAxisAlignment.start,
                        children: [
                          Icon(Icons.add_box),
                          SizedBox(
                            width: 10,
                          ),
                          Column(
                            crossAxisAlignment: CrossAxisAlignment.start,
                            children: [
                              Container(child: Text("Return Policy")),
                              Text("Lorem ipsum dolor sit amet, consectetur",
                                  style: TextStyle(
                                    color: Colors.grey,
                                  )),
                            ],
                          )
                        ],
                      )
                    ],
                  ),
                ),
              ),
              Row(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: [
                  Container(
                    child: Flexible(
                      child: Text("Evaluation and comments".toUpperCase(),
                          style: TextStyle(color: Colors.grey, fontSize: 18)),
                    ),
                  ),
                ],
              ),
              Divider(
                color: Colors.grey,
              ),
              Card(
                child: Padding(
                  padding: const EdgeInsets.all(15.0),
                  child: Column(
                    mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                    children: [
                      Row(
                        mainAxisAlignment: MainAxisAlignment.spaceBetween,
                        children: [
                          Text("Evaluation"),
                          Text(
                            "More Details",
                            style: TextStyle(
                                color: Colors.red,
                                decoration: TextDecoration.underline),
                          ),
                        ],
                      ),
                      Divider(
                        color: Colors.grey,
                      ),
                      Row(
                        mainAxisAlignment: MainAxisAlignment.spaceBetween,
                        children: [
                          Container(
                            child: SmoothStarRating(
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
                          ),
                        ],
                      ),
                      Row(
                        mainAxisAlignment: MainAxisAlignment.start,
                        children: [
                          Text("I Love\nGood quality."),
                        ],
                      ),
                      Row(
                        mainAxisAlignment: MainAxisAlignment.spaceBetween,
                        children: [
                          Text(
                            "By User#1",
                            style: TextStyle(
                              color: Colors.grey,
                            ),
                          ),
                          Image.asset("assets/log/veri.PNG")
                        ],
                      )
                    ],
                  ),
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}

// ignore: must_be_immutable
class BackGroundTile extends StatefulWidget {
  final double rating;
  final String image;
  final String title;
  bool press;

  final int ratingnumber;
  final String subtitle;

  BackGroundTile({
    this.rating,
    this.image,
    this.title,
    this.ratingnumber,
    this.subtitle,
    this.press,
  });

  @override
  _BackGroundTileState createState() => _BackGroundTileState();
}

class _BackGroundTileState extends State<BackGroundTile> {
  @override
  Widget build(BuildContext context) {
    return GestureDetector(
      onTap: () {
        Navigator.push(
            context, MaterialPageRoute(builder: (context) => Details()));
      },
      child: Container(
        width: MediaQuery.of(context).size.width / 2.1,
        child: Card(
          child: Padding(
            padding: const EdgeInsets.all(8.0),
            child: Column(children: [
              Stack(
                children: [
                  Stack(children: <Widget>[
                    Container(
                      height: 150,
                      padding: EdgeInsets.all(
                        20.0,
                      ),
                      decoration: BoxDecoration(
                          borderRadius: BorderRadius.circular(12.0),
                          image: DecorationImage(
                              image: AssetImage(widget.image),
                              fit: BoxFit.cover)),
                    ),
                  ]),
                  Align(
                    alignment: Alignment.bottomLeft,
                    child: Row(
                      children: [
                        Container(
                          height: 40,
                          width: 40,
                          child: Card(
                            elevation: 5,
                            color: Colors.white,
                            shape: RoundedRectangleBorder(
                                borderRadius: BorderRadius.circular(40)),
                            child: GestureDetector(
                              onTap: () {
                                setState(() {
                                  widget.press = !widget.press;
                                });
                              },
                              child: Icon(
                                widget.press
                                    ? Icons.favorite
                                    : Icons.favorite_border,
                                color: Colors.orange,
                              ),
                            ),
                          ),
                        ),
                      ],
                    ),
                  ),
                ],
              ),
              Row(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: [
                  Text(
                    widget.title,
                    style: TextStyle(color: Colors.grey),
                  ),
                ],
              ),
              Row(
                mainAxisAlignment: MainAxisAlignment.start,
                children: [
                  Text(widget.subtitle,
                      style:
                          TextStyle(fontWeight: FontWeight.bold, fontSize: 17)),
                ],
              ),
              Text(
                "Lorem ipsum dolor sit amet, consectetur adipiscing elit...",
                style: TextStyle(color: Colors.grey),
              ),
              SizedBox(
                height: 5,
              ),
              Row(
                children: [
                  Text(
                    "\$120",
                    style: TextStyle(color: Colors.red),
                  ),
                  SizedBox(
                    width: 5,
                  ),
                ],
              ),
              Row(
                mainAxisAlignment: MainAxisAlignment.start,
                children: [
                  SmoothStarRating(
                    rating: widget.rating,
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
                ],
              ),
            ]),
          ),
        ),
      ),
    );
  }
}
