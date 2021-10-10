import 'package:flutter/material.dart';
import 'package:swishapp/categories/constant/data1.dart';
import 'package:swishapp/pages/store.dart';

class Categories1 extends StatefulWidget {
  @override
  _Categories1State createState() => _Categories1State();
}

class _Categories1State extends State<Categories1> {
  bool home = true;
  bool women = false;
  bool men = false;
  bool kids = false;
  int activeIndex = 0;
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: new AppBar(
        centerTitle: true,
        title: Text(
          'Categories',
          style: TextStyle(
            color: Colors.black,
          ),
        ),
        backgroundColor: Colors.white,
        elevation: 20,
        actions: <Widget>[
          IconButton(
            icon: Icon(
              Icons.search,
              color: Colors.black,
            ),
            onPressed: () {},
          ),
          IconButton(
            icon: Icon(
              Icons.shopping_bag_outlined,
              color: Colors.black,
            ),
            onPressed: () {},
          ),
        ],
      ),
      body: new ListView(
        children: [
          Container(
            height: 150,
            padding: const EdgeInsets.all(8),
            decoration: BoxDecoration(
                image: DecorationImage(
                    image: AssetImage("assets/img/carosel3.jpg"),
                    fit: BoxFit.cover)),
          ),
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
                              color: home ? Colors.orange : Colors.black),
                        )),
                        elevation: 2,
                        shape: RoundedRectangleBorder(
                          side: home
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
                              color: women ? Colors.orange : Colors.black),
                        )),
                        elevation: 2,
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
                              color: men ? Colors.orange : Colors.black),
                        )),
                        elevation: 2,
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
                              color: kids ? Colors.orange : Colors.black),
                        )),
                        elevation: 2,
                        shape: RoundedRectangleBorder(
                          side: kids
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
          ]),
          SizedBox(
            height: 10,
          ),
          Column(
            children: List.generate(
              women
                  ? items2.length
                  : men
                      ? items3.length
                      : kids
                          ? items4.length
                          : items.length,
              (index) => InkWell(
                  onTap: () {
                    Navigator.push(context,
                        MaterialPageRoute(builder: (context) => Store()));
                  },
                  child: Card(
                    child: Row(
                      mainAxisAlignment: MainAxisAlignment.spaceBetween,
                      children: <Widget>[
                        Row(children: <Widget>[
                          Hero(
                            tag: items[index]['id'].toString(),
                            child: Container(
                              height: 120,
                              width: 120,
                              decoration: BoxDecoration(
                                  image: DecorationImage(
                                      image: AssetImage(women
                                          ? items2[index]['img']
                                          : men
                                              ? items3[index]['img']
                                              : kids
                                                  ? items4[index]['img']
                                                  : items[index]['img']),
                                      fit: BoxFit.cover)),
                            ),
                          ),
                          SizedBox(
                            width: 20,
                          ),
                          Column(
                            crossAxisAlignment: CrossAxisAlignment.start,
                            children: <Widget>[
                              Text(
                                women
                                    ? items2[index]['name']
                                    : men
                                        ? items3[index]['name']
                                        : kids
                                            ? items4[index]['name']
                                            : items[index]['name'],
                                style: TextStyle(
                                    fontSize: 18, fontWeight: FontWeight.w500),
                              ),
                              SizedBox(
                                height: 10,
                              ),
                              Text(
                                women
                                    ? items[index]['p_promotion_price']
                                        .toString()
                                    : men
                                        ? items3[index]['p_promotion_price']
                                            .toString()
                                        : kids
                                            ? items4[index]['p_promotion_price']
                                                .toString()
                                            : items[index]['p_promotion_price']
                                                .toString(),
                                style: TextStyle(
                                  fontSize: 12,
                                ),
                              ),
                            ],
                          ),
                        ]),
                        Row(
                          children: <Widget>[
                            Icon(
                              Icons.arrow_forward_ios,
                              color: Colors.black,
                            )
                          ],
                        ),
                      ],
                    ),
                  )),
            ),
          ),
        ],
      ),
    );
  }
}
