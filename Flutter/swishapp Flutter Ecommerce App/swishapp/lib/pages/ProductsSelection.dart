import 'package:flutter/material.dart';
import 'package:flutter_staggered_grid_view/flutter_staggered_grid_view.dart';
import 'package:smooth_star_rating/smooth_star_rating.dart';

class ProductSelection extends StatefulWidget {
  @override
  _ProductSelectionState createState() => _ProductSelectionState();
}

class _ProductSelectionState extends State<ProductSelection> {
  List<StaggeredTile> _cardTile = <StaggeredTile>[
    StaggeredTile.count(2, 3.5),
    StaggeredTile.count(2, 3.5),
    StaggeredTile.count(2, 3.5),
    StaggeredTile.count(2, 3.5),
  ];

//List of Cards with color and icon
  List<Widget> _listTile = <Widget>[
    BackGroundTile(
      subtitle: "Green Dress",
      title: "Dress",
      image: "assets/gird4/dress.jpg",
      ratingnumber: 80,
      rating: 3.0,
      valuefirst: true,
    ),
    BackGroundTile(
      subtitle: "Green Dress",
      title: "Dress",
      image: "assets/gird4/dress.jpg",
      ratingnumber: 80,
      rating: 3.0,
      valuefirst: false,
    ),
    BackGroundTile(
      subtitle: "Green Dress",
      title: "Dress",
      image: "assets/gird4/dress.jpg",
      ratingnumber: 80,
      rating: 3.0,
      valuefirst: false,
    ),
    BackGroundTile(
      subtitle: "Green Dress",
      title: "Dress",
      image: "assets/gird4/dress.jpg",
      ratingnumber: 80,
      rating: 3.0,
      valuefirst: false,
    )
  ];

  bool click = false;
  bool click2 = false;
  bool click3 = false;
  bool click4 = false;
  var rating = 3.0;
  bool first = true;
  @override
  Widget build(BuildContext context) {
    return Scaffold(
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
                  padding: const EdgeInsets.fromLTRB(120, 10, 120, 10),
                  child: Text("Confirm"),
                ))
          ],
        ),
      ),
      appBar: AppBar(
        centerTitle: true,
        title: Text(
          'Selection of Products',
          style: TextStyle(
            color: Colors.black,
          ),
        ),
        backgroundColor: Colors.white,
        leading: InkWell(
          onTap: () {
            Navigator.pop(context);
          },
          child: Icon(
            Icons.arrow_back_ios,
            color: Colors.black,
          ),
        ),
      ),
      body: SingleChildScrollView(
        child: Column(
          children: [
            SizedBox(
              height: 20,
            ),
            Row(
              mainAxisAlignment: MainAxisAlignment.spaceAround,
              children: [
                GestureDetector(
                  onTap: () {
                    setState(() {
                      first = true;
                    });
                  },
                  child: Text(
                    "Streamer List",
                    style: TextStyle(
                        fontSize: 18,
                        color: first ? Color(0xFFFF5D55) : Colors.black),
                  ),
                ),
                GestureDetector(
                  onTap: () {
                    setState(() {
                      first = false;
                    });
                  },
                  child: Text(
                    "By Categories",
                    style: TextStyle(
                        fontSize: 18,
                        color: first ? Colors.black : Color(0xFFFF5D55)),
                  ),
                ),
              ],
            ),
            Padding(
              padding: const EdgeInsets.fromLTRB(15, 0, 15, 0),
              child: Stack(
                children: [
                  Divider(
                    color: Colors.grey,
                  ),
                  if (first)
                    Padding(
                      padding: const EdgeInsets.only(left: 30.0),
                      child: orangeDivider(),
                    )
                  else
                    Padding(
                      padding: const EdgeInsets.only(left: 210.0),
                      child: orangeDivider(),
                    ),
                ],
              ),
            ),
            Padding(
              padding: const EdgeInsets.all(15),
              child: TextField(
                decoration: InputDecoration(
                  prefixIcon: Icon(
                    Icons.search,
                    color: Colors.black,
                  ),
                  filled: true,
                  fillColor: Colors.grey[200],
                  focusColor: Colors.orange,
                  hintText: "Search by name of products",
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
            Container(
              height: MediaQuery.of(context).size.height / 1.5,
              child: StaggeredGridView.count(
                crossAxisCount: 4,
                staggeredTiles: _cardTile,
                children: _listTile,
                mainAxisSpacing: 4.0,
                crossAxisSpacing: 4.0,
              ),
            ),
          ],
        ),
      ),
    );
  }
}

SizedBox orangeDivider() {
  return SizedBox(
    width: 90,
    child: Divider(
      thickness: 4,
      color: Color(0xFFFF5D55),
    ),
  );
}

// ignore: must_be_immutable
class BackGroundTile extends StatefulWidget {
  final double rating;
  final String image;
  final String title;
  bool valuefirst;
  final int ratingnumber;
  final String subtitle;

  BackGroundTile(
      {this.rating,
      this.image,
      this.title,
      this.ratingnumber,
      this.subtitle,
      this.valuefirst});

  @override
  _BackGroundTileState createState() => _BackGroundTileState();
}

class _BackGroundTileState extends State<BackGroundTile> {
  @override
  Widget build(BuildContext context) {
    return Card(
      shape: RoundedRectangleBorder(
          borderRadius: BorderRadius.circular(12),
          side: BorderSide(
              color: widget.valuefirst ? Colors.red : Colors.white, width: 2)),
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
                child: Checkbox(
                  activeColor: Colors.red,
                  value: widget.valuefirst,
                  onChanged: (bool value) {
                    setState(() {
                      widget.valuefirst = value;
                    });
                  },
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
                size: 17,
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
        ]),
      ),
    );
  }
}
