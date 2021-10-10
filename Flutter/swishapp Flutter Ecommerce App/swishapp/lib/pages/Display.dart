import 'package:flutter/material.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';

import 'displaydataofstream.dart';

class Displa extends StatefulWidget {
  @override
  _DisplaState createState() => _DisplaState();
}

class _DisplaState extends State<Displa> {
  List data = [
    {
      "url":
          "https://p0.pikist.com/photos/927/83/rose-eyes-portrait-woman-person-makeup-flowers-roses-eye.jpg",
      "title": "Makeup",
    },
    {
      "url":
          "https://www.thestreet.com/.image/ar_16:9%2Cc_fill%2Ccs_srgb%2Cfl_progressive%2Cg_faces:center%2Cq_auto:good%2Cw_768/MTY4NjQ3MzkyMTk0Mjc0OTUx/leather-sales-crack-the-whip-for-stuttering-luxury-sector.jpg",
      "title": "Bags",
    },
    {
      "url":
          "https://i.pinimg.com/736x/fc/a6/54/fca6549c9f74373ae03d9df78c8317a2.jpg",
      "title": "Clothes",
    },
    {
      "url":
          "https://cdn.shopify.com/s/files/1/2311/5649/products/2020-01-03katana5049_900x.jpg?v=1583746349",
      "title": "Pants",
    },
  ];
  List data2 = [
    {
      "url":
          "https://image.freepik.com/free-photo/attractive-young-caucasian-woman-customer-holding-hangers-with-two-pieces-clothing-feeling-doubtful-while-deciding-which-one-mathes-fits-her-shopping-choice-dilemma-buying-purchasing_273609-716.jpg"
    },
    {
      "url":
          "https://image.freepik.com/free-photo/woman-looking-clothes-store_23-2147888954.jpg"
    },
    {
      "url":
          "https://media.istockphoto.com/photos/interior-of-clothing-store-picture-id1023612090?k=6&m=1023612090&s=612x612&w=0&h=YNzgbQvGSqMQ5FUdeiz4o4ab7gYkl4kkopKi4tRGqZ0="
    },
  ];

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        backgroundColor: Colors.white,
        appBar: AppBar(
          elevation: 0.0,
          backgroundColor: Colors.white,
          leading: IconButton(
              icon: Icon(Icons.arrow_back_ios, color: Colors.black),
              onPressed: () {}),
          title: Text(
            "Discover Streams",
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
            Padding(
              padding: const EdgeInsets.fromLTRB(8, 0, 8, 0),
              child: Container(
                child: Stack(
                  alignment: Alignment.bottomLeft,
                  children: [
                    ClipRRect(
                      borderRadius: BorderRadius.circular(20),
                      child: Image.network(
                          "https://www.mediafusionapp.com/wp-content/uploads/2018/07/Camera-films-concert-and-phone-wathces-it.jpg"),
                    ),
                    Padding(
                      padding: const EdgeInsets.all(8.0),
                      child: Row(
                        children: [
                          Column(
                            children: [
                              Padding(
                                padding: const EdgeInsets.only(right: 50.0),
                                child: Text(
                                  "Title Screen",
                                  style: TextStyle(color: Colors.white),
                                ),
                              ),
                              Row(
                                children: [
                                  Padding(
                                    padding: const EdgeInsets.only(right: 15.0),
                                    child: Card(
                                      color: Color(0xFFE61610),
                                      child: Padding(
                                        padding: const EdgeInsets.fromLTRB(
                                            8, 5, 8, 5),
                                        child: Text(
                                          "LIVE",
                                          style: TextStyle(color: Colors.white),
                                        ),
                                      ),
                                    ),
                                  ),
                                  Row(
                                    children: [
                                      Icon(
                                        FontAwesomeIcons.eye,
                                        color: Colors.white,
                                        size: 20,
                                      ),
                                      Padding(
                                        padding:
                                            const EdgeInsets.only(left: 8.0),
                                        child: Text(
                                          "126 k",
                                          style: TextStyle(
                                              color: Colors.white,
                                              fontWeight: FontWeight.bold),
                                        ),
                                      ),
                                      Container(
                                        height: 5,
                                        width: 5,
                                        child: Card(
                                          child: Text("ff"),
                                        ),
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
            ),
            SizedBox(
              height: 20.0,
            ),
            Padding(
              padding: const EdgeInsets.all(8.0),
              child: Row(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: [
                  new Text(
                    'Categories',
                    style: TextStyle(fontSize: 18, fontWeight: FontWeight.bold),
                  ),
                  new Text(
                    'View all',
                    style: TextStyle(
                      color: Colors.red,
                    ),
                  ),
                ],
              ),
            ),
            Container(
              width: MediaQuery.of(context).size.width,
              height: 150,
              child: ListView.builder(
                  scrollDirection: Axis.horizontal,
                  itemCount: data.length,
                  itemBuilder: (context, index) {
                    return GestureDetector(
                      onTap: () {
                        Navigator.push(
                            context,
                            MaterialPageRoute(
                                builder: (context) => StreamData(
                                      title: data[index]["title"],
                                      url: data[index]["url"],
                                    )));
                      },
                      child: Container(
                        height: 100,
                        width: 150,
                        child: Card(
                          color: Colors.orange,
                          shape: RoundedRectangleBorder(
                              borderRadius: BorderRadius.circular(20)),
                          child: Stack(
                            children: [
                              Container(
                                width: double.infinity,
                                height: double.infinity,
                                child: ClipRRect(
                                  borderRadius: BorderRadius.circular(20),
                                  child: Image.network(
                                    data[index]["url"],
                                    fit: BoxFit.cover,
                                  ),
                                ),
                              ),
                              Align(
                                alignment: Alignment.bottomCenter,
                                child: Padding(
                                  padding: const EdgeInsets.all(8.0),
                                  child: Text(data[index]["title"],
                                      style: TextStyle(
                                          fontSize: 18,
                                          color: Colors.white,
                                          fontWeight: FontWeight.w600)),
                                ),
                              )
                            ],
                          ),
                        ),
                      ),
                    );
                  }),
            ),
            Padding(
              padding: const EdgeInsets.all(8.0),
              child: Row(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: [
                  new Text(
                    'Popular Live Channels',
                    style: TextStyle(
                        fontSize: 18,
                        fontWeight: FontWeight.bold,
                        color: Colors.black),
                  ),
                  Icon(Icons.category, color: Colors.orange),
                ],
              ),
            ),
            Pop(data2[0]["url"]),
            Pop(data2[1]["url"]),
            Pop(data2[2]["url"]),
            Padding(
              padding: const EdgeInsets.all(8.0),
              child: Row(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: [
                  new Text(
                    'Live Channels you Follow',
                    style: TextStyle(
                        fontSize: 18,
                        fontWeight: FontWeight.bold,
                        color: Colors.black),
                  ),
                  Icon(Icons.category, color: Colors.orange),
                ],
              ),
            ),
            Pop(data2[0]["url"]),
            Pop(data2[1]["url"]),
            Padding(
              padding: const EdgeInsets.all(8.0),
              child: Row(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: [
                  new Text(
                    'Recommended Live Channels',
                    style: TextStyle(
                        fontSize: 18,
                        fontWeight: FontWeight.bold,
                        color: Colors.black),
                  ),
                  Icon(Icons.category, color: Colors.orange),
                ],
              ),
            ),
            Row(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                Recpop(data2[0]["url"]),
                Recpop(data2[1]["url"]),
              ],
            ),
            Padding(
              padding: const EdgeInsets.all(8.0),
              child: Row(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: [
                  new Text(
                    'Offline Channels',
                    style: TextStyle(
                        fontSize: 18,
                        fontWeight: FontWeight.bold,
                        color: Colors.black),
                  ),
                ],
              ),
            ),
            Row(
              mainAxisAlignment: MainAxisAlignment.spaceAround,
              children: [
                Column(
                  children: [
                    CustomRow(
                      name: "influencer#1",
                      profilePictureURL:
                          "https://i.pinimg.com/474x/10/ca/3e/10ca3ebf744ed949b4c598795f51803b.jpg",
                    ),
                    CustomRow(
                      name: "influencer#2",
                      profilePictureURL:
                          "https://i.pinimg.com/originals/e4/57/e9/e457e9abaabaf01aa957a9b7def01326.jpg",
                    ),
                    CustomRow(
                      name: "influencer#3",
                      profilePictureURL:
                          "https://lh3.googleusercontent.com/proxy/RZKpcxvZSDy9WLr-Iz1tErSLDxUV-GXEgvbYl_fjiNckPFuxSf9bcwTavae4lMe1U-zr_rKb_PhefmQKVWTfH9036b3kRoiAAVQQ8BhpHpwSPZkeVLQXFsq_yc13hLE8-LAnBLfyKw4K14UWDYRKyfKMi_M3HGC5OXLSr9106UuAGw",
                    ),
                  ],
                ),
                Stack(
                  alignment: Alignment.topRight,
                  children: [
                    Container(
                        width: MediaQuery.of(context).size.width / 2,
                        height: 250,
                        child: Image.network(
                          "https://influenter.pl/wp-content/uploads/2020/03/influencer-marketing-3.jpg",
                          fit: BoxFit.cover,
                        )),
                    Padding(
                      padding: const EdgeInsets.all(8.0),
                      child: Icon(
                        Icons.close,
                      ),
                    ),
                  ],
                ),
              ],
            ),
          ],
        )));
  }
}

class Recpop extends StatelessWidget {
  final String url;
  Recpop(this.url);

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.all(8.0),
      child: Stack(
        children: [
          Container(
            width: 150,
            height: 200,
            child: ClipRRect(
              borderRadius: BorderRadius.circular(20),
              child: Image.network(
                url,
                fit: BoxFit.cover,
              ),
            ),
          ),
          Align(
            alignment: Alignment.topLeft,
            child: Padding(
              padding: const EdgeInsets.all(8.0),
              child: Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  Row(
                    children: [
                      Card(
                        color: Color(0xFFE61610),
                        child: Padding(
                          padding: const EdgeInsets.fromLTRB(8, 5, 8, 5),
                          child: Text(
                            "LIVE",
                            style: TextStyle(color: Colors.white),
                          ),
                        ),
                      ),
                      SizedBox(
                        width: MediaQuery.of(context).size.width / 7,
                      ),
                      Icon(Icons.more_vert, color: Colors.white),
                    ],
                  ),
                  SizedBox(
                    height: MediaQuery.of(context).size.height / 7,
                  ),
                  Text(
                    "Title Stream",
                    style: TextStyle(
                        color: Colors.white, fontWeight: FontWeight.bold),
                  ),
                  Column(
                    children: [
                      Row(
                        children: [
                          Container(
                            width: 30,
                            height: 30,
                            child: CircleAvatar(
                              backgroundImage: NetworkImage(
                                  "https://writestylesonline.com/wp-content/uploads/2019/01/What-To-Wear-For-Your-Professional-Profile-Picture-or-Headshot.jpg"),
                            ),
                          ),
                          SizedBox(
                            width: 5,
                          ),
                          Container(
                            child: Text(
                              "Sarah ben salah",
                              style: TextStyle(color: Colors.white),
                            ),
                          ),
                        ],
                      ),
                    ],
                  ),
                ],
              ),
            ),
          ),
        ],
      ),
    );
  }
}

class Pop extends StatelessWidget {
  final String url;

  Pop(this.url);

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.all(8.0),
      child: Column(
        children: [
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: [
              Stack(
                alignment: Alignment.bottomLeft,
                children: [
                  Container(
                    width: 150,
                    height: 100,
                    child: ClipRRect(
                      borderRadius: BorderRadius.circular(20),
                      child: Image.network(
                        url,
                        fit: BoxFit.cover,
                      ),
                    ),
                  ),
                  Padding(
                    padding: const EdgeInsets.all(8.0),
                    child: Card(
                      color: Color(0xFFE61610),
                      child: Padding(
                        padding: const EdgeInsets.fromLTRB(8, 5, 8, 5),
                        child: Text(
                          "LIVE",
                          style: TextStyle(color: Colors.white),
                        ),
                      ),
                    ),
                  ),
                ],
              ),
              Column(
                children: [
                  Row(
                    children: [
                      Container(
                        width: 30,
                        height: 30,
                        child: CircleAvatar(
                          backgroundImage: NetworkImage(
                              "https://writestylesonline.com/wp-content/uploads/2019/01/What-To-Wear-For-Your-Professional-Profile-Picture-or-Headshot.jpg"),
                        ),
                      ),
                      SizedBox(
                        width: 5,
                      ),
                      Text("title Stream")
                    ],
                  ),
                  Container(
                    width: 100,
                    child: Text("Lorem ipsum dolor sit amet,"),
                  ),
                  Row(
                    mainAxisAlignment: MainAxisAlignment.center,
                    children: [
                      Container(
                        height: 30,
                        width: 70,
                        child: Card(
                          color: Colors.grey,
                          child: Center(
                            child: Text(
                              "Fashion",
                              style: TextStyle(
                                color: Colors.white,
                              ),
                            ),
                          ),
                        ),
                      ),
                      Container(
                        height: 30,
                        width: 70,
                        child: Card(
                          color: Colors.grey,
                          child: Center(
                            child: Text(
                              "Dress",
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
              Icon(
                Icons.more_vert,
              ),
            ],
          ),
          Divider(
            color: Colors.grey,
          )
        ],
      ),
    );
  }
}

class CustomRow extends StatelessWidget {
  final String profilePictureURL;
  final String name;

  CustomRow({this.name, this.profilePictureURL});

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.only(bottom: 15.0),
      child: Row(
        mainAxisAlignment: MainAxisAlignment.start,
        children: [
          Container(
            width: 70,
            height: 70,
            child: CircleAvatar(
              backgroundImage: NetworkImage(profilePictureURL),
            ),
          ),
          SizedBox(
            width: 10,
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
        ],
      ),
    );
  }
}
