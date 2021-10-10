import 'package:flutter/material.dart';
import 'package:flutter_staggered_grid_view/flutter_staggered_grid_view.dart';
import 'package:smooth_star_rating/smooth_star_rating.dart';

class StreamList extends StatefulWidget {
  @override
  _StreamListState createState() => _StreamListState();
}

class _StreamListState extends State<StreamList> {
  //List of Cards with size
  List<StaggeredTile> _cardTile = <StaggeredTile>[
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
    ),
    BackGroundTile(
      subtitle: "Green Dress",
      title: "Dress",
      image: "assets/gird4/dress.jpg",
      ratingnumber: 80,
      rating: 3.0,
    ),
    BackGroundTile(
      subtitle: "Green Dress",
      title: "Dress",
      image: "assets/gird4/dress.jpg",
      ratingnumber: 80,
      rating: 3.0,
    ),
    BackGroundTile(
      subtitle: "Green Dress",
      title: "Dress",
      image: "assets/gird4/dress.jpg",
      ratingnumber: 80,
      rating: 3.0,
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
      appBar: new AppBar(
        centerTitle: true,
        title: Text(
          'StreamList',
          style: TextStyle(
            color: Colors.black,
          ),
        ),
        backgroundColor: Colors.white,
        elevation: 20,
        leading: IconButton(
          icon: Icon(
            Icons.arrow_back_ios,
            color: Colors.black,
          ),
          onPressed: () {
            Navigator.pop(context);
          },
        ),
      ),
      body: SingleChildScrollView(
        child: Column(
          children: [
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
        ),
      ),
    );
  }
}

class BackGroundTile extends StatelessWidget {
  final double rating;
  final String image;
  final String title;

  final int ratingnumber;
  final String subtitle;

  BackGroundTile({
    this.rating,
    this.image,
    this.title,
    this.ratingnumber,
    this.subtitle,
  });

  @override
  Widget build(BuildContext context) {
    return Card(
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
                        image: AssetImage(image), fit: BoxFit.cover)),
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
              child: Card(
                color: Color(0xFFE61610),
                child: Padding(
                  padding: const EdgeInsets.fromLTRB(8, 5, 8, 5),
                  child: Text(
                    "-20%",
                    style: TextStyle(color: Colors.white),
                  ),
                ),
              ),
            ),
          ],
        ),
        Row(
          mainAxisAlignment: MainAxisAlignment.spaceBetween,
          children: [
            Text(
              title,
              style: TextStyle(color: Colors.grey),
            ),
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
        Row(
          mainAxisAlignment: MainAxisAlignment.start,
          children: [
            Text(subtitle,
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
    );
  }
}
