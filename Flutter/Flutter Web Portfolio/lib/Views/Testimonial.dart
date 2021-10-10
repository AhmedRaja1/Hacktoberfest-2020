import 'package:flutter/material.dart';

class Testimonial extends StatefulWidget {
  @override
  _TestimonialState createState() => _TestimonialState();
}

class _TestimonialState extends State<Testimonial> {
  final img1 = AssetImage('assets/t1.jpg');
  final img2 = AssetImage('assets/t2.jpg');
  final img4 = AssetImage("assets/arrow.png");
  @override
  void didChangeDependencies() {
    precacheImage(img1, context);
    precacheImage(img2, context);
    precacheImage(img4, context);

    super.didChangeDependencies();
  }

  @override
  Widget build(BuildContext context) {
    List apps = [
      {
        'img': img1,
        'title': 'Abudullah Nadeem',
        'description':
            "Hamas is different from general crowd, Maybe that's why I found him a bit controversial as well but I think it's healthy. I noticed his creativity years ago and now it's showing colours. He is good in balancing many Situations in the same time. I also sensed a lot of confidence which drives him to try new.",
        'contact': 'abdullahnadeem940187@gmail.com',
      },
      {
        'img': img2,
        'title': 'Salman',
        'description':
            "I needed a quick app solution with a design of my choice it was hard to get any cheap solution but this guy is the best. He completed my task very beautifully and effectively and I am very satisfied with him. I would recommend him to any future buyers this guy is the best",
        'contact': 'salman1916@gmail.com',
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
            SizedBox(
              height: 30,
            ),
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
                      contact: apps[index]['contact'],
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
                  image: "assets/t1.jpg",
                  apptitle: "Abudullah Nadeem",
                  contact: "abdullahnadeem940187@gmail.com",
                  description:
                      "Hamas is different from general crowd, Maybe that's why I found him a bit controversial as well but I think it's healthy. I noticed his creativity years ago and now it's showing colours. He is good in balancing many Situations in the same time. I also sensed a lot of confidence which drives him to try new.",
                ),
                AppDisplay(
                  image: "assets/t2.jpg",
                  apptitle: "Salman",
                  contact: "abdullahnadeem940187@gmail.com",
                  description:
                      "I needed a quick app solution with a design of my choice it was hard to get any cheap solution but this guy is the best. He completed my task very beautifully and effectively and I am very satisfied with him. I would recommend him to any future buyers this guy is the best",
                ),
 */

class AppDisplay extends StatelessWidget {
  final AssetImage image;
  final String apptitle;
  final String description;
  final String contact;

  AppDisplay({this.image, this.apptitle, this.description, this.contact});

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.fromLTRB(250, 20, 150, 150),
      child: Row(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          Container(
            width: 100,
            height: 100,
            child: CircleAvatar(
              backgroundImage: image,
            ),
          ),
          SizedBox(width: 15),
          Container(
            width: 700,
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Column(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Text(
                      apptitle,
                      style: TextStyle(
                          fontSize: 30,
                          fontFamily: 'Agustina',
                          color: Colors.white,
                          fontWeight: FontWeight.w600),
                    ),
                    Text(
                      contact,
                      style: TextStyle(
                          fontSize: 18,
                          color: Colors.grey,
                          fontWeight: FontWeight.w200),
                    ),
                  ],
                ),
                SizedBox(
                  height: 10,
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
