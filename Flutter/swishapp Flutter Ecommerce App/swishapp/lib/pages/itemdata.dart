import 'package:flutter/material.dart';
import 'package:flutter_staggered_grid_view/flutter_staggered_grid_view.dart';
import 'package:smooth_star_rating/smooth_star_rating.dart';
import 'package:swishapp/pages/Details.dart';

class ItemData extends StatefulWidget {
  @override
  _ItemDataState createState() => _ItemDataState();
}

class _ItemDataState extends State<ItemData> {
  List<StaggeredTile> _cardTile = <StaggeredTile>[
    StaggeredTile.count(2, 3.58),
    StaggeredTile.count(2, 3.58),
    StaggeredTile.count(2, 3.58),
    StaggeredTile.count(2, 3.58),
    StaggeredTile.count(2, 3.58),
    StaggeredTile.count(2, 3.58),
    StaggeredTile.count(2, 3.58),
    StaggeredTile.count(2, 3.58),
  ];

//List of Cards with color and icon
  List<Widget> _listTile = <Widget>[
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
    BackGroundTile(
      subtitle: "Green Dress",
      title: "Dress",
      image: "assets/gird4/dress.jpg",
      ratingnumber: 80,
      rating: 3.0,
      press: false,
    ),
    BackGroundTile(
      subtitle: "Green Dress",
      title: "Dress",
      image: "assets/gird4/dress.jpg",
      ratingnumber: 80,
      rating: 3.0,
      press: false,
    ),
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
    BackGroundTile(
      subtitle: "Green Dress",
      title: "Dress",
      image: "assets/gird4/dress.jpg",
      ratingnumber: 80,
      rating: 3.0,
      press: false,
    ),
    BackGroundTile(
      subtitle: "Green Dress",
      title: "Dress",
      image: "assets/gird4/dress.jpg",
      ratingnumber: 80,
      rating: 3.0,
      press: false,
    )
  ];

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
          "T-Shirts",
          style: TextStyle(color: Colors.black),
        ),
        actions: [
          IconButton(
              icon: Icon(Icons.search, color: Colors.black), onPressed: () {}),
          GestureDetector(
              onTap: () {}, child: Image.asset("assets/images/4.PNG"))
        ],
      ),
      body: SingleChildScrollView(
          child: Column(
        children: [
          Container(
            width: double.infinity,
            height: 50,
            child: Card(
              child: Row(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: [
                  Padding(
                    padding: const EdgeInsets.all(8.0),
                    child: Icon(Icons.category),
                  ),
                  customverticaldivider(),
                  Padding(
                    padding: const EdgeInsets.all(8.0),
                    child: Row(
                      children: [
                        Text("Sorted By"),
                        Icon(Icons.keyboard_arrow_down),
                      ],
                    ),
                  ),
                  customverticaldivider(),
                  Padding(
                    padding: const EdgeInsets.all(8.0),
                    child: Row(
                      children: [
                        Text("Filter"),
                        Icon(Icons.filter),
                      ],
                    ),
                  )
                ],
              ),
            ),
          ),
          Container(
            height: 600,
            child: StaggeredGridView.count(
              crossAxisCount: 4,
              staggeredTiles: _cardTile,
              children: _listTile,
              mainAxisSpacing: 4.0,
              crossAxisSpacing: 4.0,
            ),
          ),
        ],
      )),
    );
  }
}

Widget customverticaldivider() {
  return Column(
    children: [
      Container(
        width: 2,
        height: 40,
        color: Colors.grey,
      ),
    ],
  );
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
      child: Card(
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
                          image: AssetImage(widget.image), fit: BoxFit.cover)),
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
                        Icons.shopping_bag,
                        color: Colors.orange,
                      ),
                    ),
                  ),
                )
              ]),
              Align(
                alignment: Alignment.bottomLeft,
                child: Row(
                  children: [
                    Card(
                      color: Color(0xFFE61610),
                      child: Padding(
                        padding: const EdgeInsets.fromLTRB(8, 5, 8, 5),
                        child: Text(
                          "Top Rated",
                          style: TextStyle(color: Colors.white),
                        ),
                      ),
                    ),
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
              Text(
                "(${widget.ratingnumber})",
                style: TextStyle(color: Colors.grey),
              ),
            ],
          ),
          Row(
            mainAxisAlignment: MainAxisAlignment.start,
            children: [
              Text(widget.subtitle,
                  style: TextStyle(fontWeight: FontWeight.bold, fontSize: 17)),
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
              Text(
                "\$150",
                style: TextStyle(decoration: TextDecoration.lineThrough),
              ),
            ],
          ),
          ElevatedButton(
              style: ButtonStyle(
                  backgroundColor:
                      MaterialStateProperty.all<Color>(Colors.orange)),
              onPressed: () {},
              child: Padding(
                padding: const EdgeInsets.fromLTRB(45, 0, 45, 0),
                child: Text("Buy"),
              ))
        ]),
      ),
    );
  }
}
