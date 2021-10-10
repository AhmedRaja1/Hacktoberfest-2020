import 'package:flutter/material.dart';
import 'package:swishapp/componets/home_page.dart';
import 'package:swishapp/pages/Checkout1.dart';

class Cart extends StatefulWidget {
  @override
  _CartState createState() => _CartState();
}

class _CartState extends State<Cart> {
  bool clicked = false;
  bool clicked2 = false;

  bool click = false;
  bool click2 = false;
  bool click3 = false;
  bool click4 = false;
  var rating = 3.0;
  int number = 1;
  int numberx = 1;
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      bottomNavigationBar: BottomAppBar(
        child: new Row(
          mainAxisSize: MainAxisSize.max,
          mainAxisAlignment: MainAxisAlignment.spaceBetween,
          children: <Widget>[
            Padding(
              padding: const EdgeInsets.all(8.0),
              child: Row(
                children: [
                  Text("Total: "),
                  Text(
                    "133.00 TND",
                    style: TextStyle(fontWeight: FontWeight.bold),
                  ),
                ],
              ),
            ),
            Padding(
              padding: const EdgeInsets.only(right: 8.0),
              child: ElevatedButton(
                  style: ButtonStyle(
                      backgroundColor:
                          MaterialStateProperty.all<Color>(Color(0xFFFF5D55))),
                  onPressed: () {
                    Navigator.push(context,
                        MaterialPageRoute(builder: (context) => Checkout1()));
                  },
                  child: Text("Checkout")),
            )
          ],
        ),
      ),
      appBar: AppBar(
        centerTitle: true,
        title: Text(
          'My Cart',
          style: TextStyle(color: Colors.black, fontWeight: FontWeight.bold),
        ),
        backgroundColor: Colors.white,
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
      body: Column(
        children: [
          Padding(
            padding: const EdgeInsets.all(8.0),
            child: Container(
              height: MediaQuery.of(context).size.height / 4.5,
              width: MediaQuery.of(context).size.width,
              child: Padding(
                padding: const EdgeInsets.all(8.0),
                child: Card(
                  elevation: 5,
                  child: Padding(
                    padding: const EdgeInsets.all(5.0),
                    child: Row(
                        mainAxisAlignment: MainAxisAlignment.spaceBetween,
                        children: [
                          Container(
                            height: 130,
                            child: Image.network(
                                "https://redcanoebrands.com/wp-content/uploads/2013/11/cessna-blue-tshirt-416x416.jpg"),
                          ),
                          Column(
                            mainAxisAlignment: MainAxisAlignment.start,
                            crossAxisAlignment: CrossAxisAlignment.start,
                            children: [
                              SizedBox(
                                height: 10,
                              ),
                              Text("T-Shirt 372 Black"),
                              SizedBox(
                                height: 10,
                              ),
                              Text(
                                "83.00 TND",
                                style: TextStyle(color: Colors.red),
                              ),
                              SizedBox(
                                height: 30,
                              ),
                              Container(
                                height: 40,
                                width: 150,
                                child: Card(
                                  shape: RoundedRectangleBorder(
                                      borderRadius: BorderRadius.circular(20),
                                      side: BorderSide(color: Colors.orange)),
                                  child: Row(
                                      mainAxisAlignment:
                                          MainAxisAlignment.spaceBetween,
                                      children: [
                                        IconButton(
                                            icon: Icon(Icons.remove),
                                            onPressed: () {
                                              setState(() {
                                                number--;
                                              });
                                            }),
                                        customverticaldivider(),
                                        Text("$number"),
                                        customverticaldivider(),
                                        IconButton(
                                            icon: Icon(Icons.add),
                                            onPressed: () {
                                              setState(() {
                                                number++;
                                              });
                                            })
                                      ]),
                                ),
                              )
                            ],
                          ),
                          Column(
                            mainAxisAlignment: MainAxisAlignment.start,
                            children: [
                              SizedBox(
                                height: 5,
                              ),
                              Icon(Icons.close),
                              SizedBox(
                                height: 5,
                              ),
                              GestureDetector(
                                onTap: () {
                                  setState(() {
                                    clicked = !clicked;
                                  });
                                },
                                child: Icon(
                                  clicked
                                      ? Icons.favorite
                                      : Icons.favorite_border,
                                  color: Colors.red,
                                ),
                              ),
                            ],
                          )
                        ]),
                  ),
                ),
              ),
            ),
          ),
          Padding(
            padding: const EdgeInsets.all(8.0),
            child: Container(
              height: MediaQuery.of(context).size.height / 4.5,
              width: MediaQuery.of(context).size.width,
              child: Padding(
                padding: const EdgeInsets.all(8.0),
                child: Card(
                  elevation: 5,
                  child: Padding(
                    padding: const EdgeInsets.all(5.0),
                    child: Row(
                        mainAxisAlignment: MainAxisAlignment.spaceBetween,
                        children: [
                          Container(
                            height: 130,
                            child: Image.network(
                                "https://upload.wikimedia.org/wikipedia/commons/8/89/Totebag.jpg"),
                          ),
                          Column(
                            mainAxisAlignment: MainAxisAlignment.start,
                            crossAxisAlignment: CrossAxisAlignment.start,
                            children: [
                              SizedBox(
                                height: 10,
                              ),
                              Text("T-Shirt 372 Black"),
                              SizedBox(
                                height: 10,
                              ),
                              Text(
                                "83.00 TND",
                                style: TextStyle(color: Colors.red),
                              ),
                              SizedBox(
                                height: 30,
                              ),
                              Container(
                                height: 40,
                                width: 150,
                                child: Card(
                                  shape: RoundedRectangleBorder(
                                      borderRadius: BorderRadius.circular(20),
                                      side: BorderSide(color: Colors.orange)),
                                  child: Row(
                                      mainAxisAlignment:
                                          MainAxisAlignment.spaceBetween,
                                      children: [
                                        IconButton(
                                            icon: Icon(Icons.remove),
                                            onPressed: () {
                                              setState(() {
                                                numberx--;
                                              });
                                            }),
                                        customverticaldivider(),
                                        Text("$numberx"),
                                        customverticaldivider(),
                                        IconButton(
                                            icon: Icon(Icons.add),
                                            onPressed: () {
                                              setState(() {
                                                numberx++;
                                              });
                                            })
                                      ]),
                                ),
                              )
                            ],
                          ),
                          Column(
                            mainAxisAlignment: MainAxisAlignment.start,
                            children: [
                              SizedBox(
                                height: 5,
                              ),
                              Icon(Icons.close),
                              SizedBox(
                                height: 5,
                              ),
                              GestureDetector(
                                onTap: () {
                                  setState(() {
                                    clicked2 = !clicked2;
                                  });
                                },
                                child: Icon(
                                  clicked
                                      ? Icons.favorite
                                      : Icons.favorite_border,
                                  color: Colors.red,
                                ),
                              ),
                            ],
                          )
                        ]),
                  ),
                ),
              ),
            ),
          ),
          Container(
            height: 180.0,
            child: GridView.count(
              scrollDirection: Axis.vertical,
              primary: false,
              padding: const EdgeInsets.all(20),
              crossAxisSpacing: 10,
              mainAxisSpacing: 25,
              crossAxisCount: 2,
              children: <Widget>[
                GestureDetector(
                  onTap: () {
                    setState(() {
                      click ? click = false : click = true;
                    });
                  },
                  child: Gridelementshome(rating, "assets/gird4/dress.jpg",
                      "Dress", click, 25, "Green Dress", 80),
                ),
                GestureDetector(
                  onTap: () {
                    setState(() {
                      click2 ? click2 = false : click2 = true;
                    });
                  },
                  child: Gridelementshome(rating, "assets/gird4/shoes.jpg",
                      "Shoes", click2, 30, "High heels", 70),
                ),
              ],
            ),
          ),
        ],
      ),
    );
  }
}

Widget customverticaldivider() {
  return Column(
    children: [
      Container(
        width: 2,
        height: 30,
        color: Colors.orange,
      ),
    ],
  );
}
