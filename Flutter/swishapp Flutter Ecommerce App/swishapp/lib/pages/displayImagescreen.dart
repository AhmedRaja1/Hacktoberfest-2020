import 'package:flutter/material.dart';
import 'package:flutter_vector_icons/flutter_vector_icons.dart';

class DisplayScreen extends StatefulWidget {
  final String imageurl;

  DisplayScreen(this.imageurl);

  @override
  _DisplayScreenState createState() => _DisplayScreenState();
}

class _DisplayScreenState extends State<DisplayScreen> {
  @override
  Widget build(BuildContext context) {
    String profilePictureURL =
        "https://storage.needpix.com/rsynced_images/smile-1726471_1280.jpg";
    double _currentSliderValue = 20;
    return Scaffold(
      body: Stack(
        alignment: Alignment.topCenter,
        children: [
          Container(
            decoration: BoxDecoration(
              image: DecorationImage(
                image: NetworkImage(widget.imageurl),
                fit: BoxFit.cover,
              ),
            ),
          ),
          Column(
            children: [
              SizedBox(
                height: 50,
              ),
              Container(
                width: 200,
                height: 50,
                child: Card(
                  color: Colors.black54,
                  shape: RoundedRectangleBorder(
                      borderRadius: BorderRadius.circular(20)),
                  child: Row(
                    mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                    children: [
                      Container(
                        width: 50,
                        height: 50,
                        child: CircleAvatar(
                          backgroundImage: NetworkImage(profilePictureURL),
                        ),
                      ),
                      Column(
                        crossAxisAlignment: CrossAxisAlignment.center,
                        mainAxisAlignment: MainAxisAlignment.center,
                        children: [
                          Text(
                            "Afefe Dabangi",
                            style: TextStyle(color: Colors.white),
                          ),
                          Row(
                            children: [
                              Icon(
                                FontAwesome.eye,
                                size: 15,
                                color: Colors.white,
                              ),
                              Text(
                                "1200",
                                style: TextStyle(color: Colors.white),
                              ),
                            ],
                          ),
                        ],
                      ),
                      ClipOval(
                        child: Material(
                          color: Colors.orange, // button color
                          child: InkWell(
                            // inkwell color
                            child: SizedBox(
                                width: 40, height: 45, child: Icon(Icons.add)),
                            onTap: () {},
                          ),
                        ),
                      )
                    ],
                  ),
                ),
              ),
            ],
          ),
          Column(
            children: [
              SizedBox(
                height: 50,
              ),
              Row(
                children: [
                  SizedBox(
                    width: MediaQuery.of(context).size.width - 55,
                  ),
                  Column(
                    mainAxisAlignment: MainAxisAlignment.spaceAround,
                    children: [
                      Container(
                        height: 50,
                        width: 50,
                        child: Card(
                          color: Colors.black54,
                          shape: RoundedRectangleBorder(
                              borderRadius: BorderRadius.circular(20)),
                          child: Icon(
                            FontAwesome.times,
                            size: 20,
                            color: Colors.white,
                          ),
                        ),
                      ),
                      SizedBox(
                        height: MediaQuery.of(context).size.height - 210,
                      ),
                      Container(
                        height: 50,
                        width: 50,
                        child: Card(
                          color: Colors.black54,
                          shape: RoundedRectangleBorder(
                              borderRadius: BorderRadius.circular(20)),
                          child: Icon(
                            FontAwesome.shopping_cart,
                            size: 20,
                            color: Colors.white,
                          ),
                        ),
                      ),
                    ],
                  ),
                ],
              )
            ],
          ),
          Column(
            children: [
              SizedBox(
                height: MediaQuery.of(context).size.height - 50,
              ),
              Container(
                width: double.infinity,
                height: 50,
                child: Card(
                  color: Colors.black54,
                  child: Row(
                    mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                    children: [
                      Icon(
                        FontAwesome.play,
                        color: Colors.white,
                      ),
                      Slider(
                        value: _currentSliderValue,
                        min: 20,
                        max: 800,
                        inactiveColor: Colors.white,
                        activeColor: Colors.white,
                        label: _currentSliderValue.round().toString(),
                        onChanged: (double value) {
                          setState(() {
                            _currentSliderValue = value;
                          });
                        },
                      ),
                      Icon(
                        FontAwesome.volume_up,
                        color: Colors.white,
                      ),
                      Icon(
                        FontAwesome.expand,
                        color: Colors.white,
                      ),
                    ],
                  ),
                ),
              ),
            ],
          )
        ],
      ),
    );
  }
}
