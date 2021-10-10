import 'package:flutter/material.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';

class LiveScreen extends StatefulWidget {
  @override
  _LiveScreenState createState() => _LiveScreenState();
}

class _LiveScreenState extends State<LiveScreen> {
  var textHeadinDiasplayStyle =
      TextStyle(color: Colors.white, fontWeight: FontWeight.bold, fontSize: 18);

  var textHeadinDiasplayStyle2 =
      TextStyle(fontWeight: FontWeight.bold, fontSize: 18);

  var textHeadinDiasplayStyle3 = TextStyle(color: Color(0xFFED2124));
  Widget customButton(Function onPressed, String buttonText) {
    return Container(
      height: 40.0,
      width: 70,
      child: GestureDetector(
        onTap: onPressed,
        child: Container(
          decoration: BoxDecoration(
            border: Border.all(
              color: Colors.white,
              style: BorderStyle.solid,
              width: 1.0,
            ),
            color: Colors.transparent,
            borderRadius: BorderRadius.circular(10.0),
          ),
          child: Row(
            mainAxisAlignment: MainAxisAlignment.center,
            children: <Widget>[
              Center(
                child: Text(
                  buttonText,
                  style: TextStyle(
                    color: Colors.white,
                    fontSize: 16,
                    fontWeight: FontWeight.w600,
                    letterSpacing: 1,
                  ),
                ),
              )
            ],
          ),
        ),
      ),
    );
  }

  String time = "10:20";
  int views = 126;
  int likes = 126;
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Stack(
        children: [
          Container(
            decoration: BoxDecoration(
              image: DecorationImage(
                image: AssetImage("assets/images/pc.jpg"),
                fit: BoxFit.cover,
              ),
            ),
          ),
          SingleChildScrollView(
            child: Column(
              children: [
                Padding(
                  padding: const EdgeInsets.fromLTRB(5, 40, 5, 0),
                  child: Row(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
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
                      Card(
                        color: Color(0xFF403F3F),
                        child: Padding(
                          padding: const EdgeInsets.all(2.0),
                          child: Row(
                            children: [
                              Padding(
                                padding:
                                    const EdgeInsets.fromLTRB(8, 3.5, 8, 3.5),
                                child: Text(
                                  "$time",
                                  style: TextStyle(color: Colors.white),
                                ),
                              )
                            ],
                          ),
                        ),
                      ),
                      Row(
                        children: [
                          Icon(
                            FontAwesomeIcons.eye,
                            color: Colors.white,
                          ),
                          Padding(
                            padding: const EdgeInsets.only(left: 8.0),
                            child: Text(
                              "$views k",
                              style: TextStyle(
                                  color: Colors.white,
                                  fontWeight: FontWeight.bold),
                            ),
                          ),
                        ],
                      ),
                      Row(
                        children: [
                          Icon(
                            FontAwesomeIcons.solidHeart,
                            size: 20,
                            color: Colors.white,
                          ),
                          Padding(
                            padding: const EdgeInsets.only(left: 8.0),
                            child: Text(
                              "$likes k",
                              style: TextStyle(
                                  color: Colors.white,
                                  fontWeight: FontWeight.bold),
                            ),
                          ),
                        ],
                      ),
                      customButton(() {}, "END")
                    ],
                  ),
                ),
                Padding(
                  padding: EdgeInsets.only(
                      top: MediaQuery.of(context).size.height / 1.23),
                  child: Row(
                    children: [
                      Expanded(
                        flex: 4,
                        child: TextField(
                          autofocus: false,
                          style: TextStyle(fontSize: 15.0, color: Colors.black),
                          decoration: InputDecoration(
                            suffixIcon: Icon(FontAwesomeIcons.solidPaperPlane),
                            border: InputBorder.none,
                            hintText: 'Type Comment Here...',
                            filled: true,
                            fillColor: Colors.white60,
                            contentPadding: const EdgeInsets.only(
                                left: 14.0, bottom: 6.0, top: 8.0),
                            disabledBorder: OutlineInputBorder(
                              borderSide: BorderSide(color: Colors.white60),
                              borderRadius: BorderRadius.circular(30.0),
                            ),
                            focusedBorder: OutlineInputBorder(
                              borderSide: BorderSide(color: Colors.white60),
                              borderRadius: BorderRadius.circular(30.0),
                            ),
                            enabledBorder: UnderlineInputBorder(
                              borderSide: BorderSide(color: Colors.white60),
                              borderRadius: BorderRadius.circular(30.0),
                            ),
                          ),
                        ),
                      ),
                      Expanded(
                        flex: 1,
                        child: RawMaterialButton(
                          onPressed: () {},
                          elevation: 2.0,
                          fillColor: Colors.white60,
                          child: Icon(
                            FontAwesomeIcons.shoppingCart,
                            size: 20,
                            color: Colors.white,
                          ),
                          padding: EdgeInsets.all(15.0),
                          shape: CircleBorder(),
                        ),
                      ),
                      Expanded(
                        flex: 1,
                        child: RawMaterialButton(
                          onPressed: () {},
                          elevation: 2.0,
                          fillColor: Colors.white60,
                          child: Icon(
                            FontAwesomeIcons.solidCommentDots,
                            size: 20,
                            color: Colors.white,
                          ),
                          padding: EdgeInsets.all(15.0),
                          shape: CircleBorder(),
                        ),
                      ),
                      Expanded(
                        flex: 1,
                        child: RawMaterialButton(
                          onPressed: () {},
                          elevation: 2.0,
                          fillColor: Colors.white60,
                          child: Icon(
                            Icons.flip_camera_android,
                            size: 20,
                            color: Colors.white,
                          ),
                          padding: EdgeInsets.all(15.0),
                          shape: CircleBorder(),
                        ),
                      ),
                      Expanded(
                        flex: 1,
                        child: RawMaterialButton(
                          onPressed: () {},
                          elevation: 2.0,
                          fillColor: Colors.white60,
                          child: Icon(
                            Icons.settings,
                            size: 20,
                            color: Colors.white,
                          ),
                          padding: EdgeInsets.all(15.0),
                          shape: CircleBorder(),
                        ),
                      ),
                    ],
                  ),
                ),
              ],
            ),
          ),
          Padding(
            padding:
                EdgeInsets.only(top: MediaQuery.of(context).size.height / 1.6),
            child: Column(
              children: [
                Container(
                  width: 300,
                  height: 50,
                  child: Card(
                    child: Padding(
                      padding: const EdgeInsets.all(8.0),
                      child: Row(
                        children: [
                          Padding(
                            padding:
                                const EdgeInsets.only(right: 8.0, left: 10.0),
                            child: Icon(
                              FontAwesomeIcons.solidBell,
                              color: Color(0xFFFFC201),
                            ),
                          ),
                          Text(
                            "is simply dummy text of the",
                            style: TextStyle(color: Colors.white),
                          )
                        ],
                      ),
                    ),
                    shape: RoundedRectangleBorder(
                      borderRadius: BorderRadius.circular(40.0),
                    ),
                    color: Colors.green,
                  ),
                ),
                Container(
                  width: 300,
                  height: 50,
                  child: Card(
                    child: Padding(
                      padding: const EdgeInsets.all(8.0),
                      child: Row(
                        children: [
                          Padding(
                            padding: const EdgeInsets.only(right: 8.0),
                            child: Container(
                              width: 55,
                              height: 85,
                              child: Card(
                                shape: RoundedRectangleBorder(
                                  borderRadius: BorderRadius.circular(40.0),
                                ),
                                color: Color(0xFF449A20),

                                //instead of the crown icon you can insert a crown asset image just like in the mockup
                                child: Icon(
                                  FontAwesomeIcons.crown,
                                  size: 15,
                                  color: Colors.yellow,
                                ),
                              ),
                            ),
                          ),
                          Text(
                            "is simply dummy text of the",
                            style: TextStyle(color: Colors.white),
                          )
                        ],
                      ),
                    ),
                    shape: RoundedRectangleBorder(
                      borderRadius: BorderRadius.circular(40.0),
                    ),
                    color: Colors.red,
                  ),
                ),
                Container(
                  width: 300,
                  height: 50,
                  child: Card(
                    child: Padding(
                      padding: const EdgeInsets.all(8.0),
                      child: Row(
                        children: [
                          Padding(
                            padding: const EdgeInsets.only(right: 8.0),
                            child: Container(
                              width: 55,
                              height: 85,
                              child: Card(
                                shape: RoundedRectangleBorder(
                                  borderRadius: BorderRadius.circular(40.0),
                                ),
                                color: Color(0xFF449A20),

                                //instead of the crown icon you can insert a crown asset image just like in the mockup
                                child: Icon(
                                  FontAwesomeIcons.chessKing,
                                  size: 15,
                                  color: Colors.red,
                                ),
                              ),
                            ),
                          ),
                          Row(
                            children: [
                              Text(
                                "somebody: ",
                                style: TextStyle(color: Colors.yellow),
                              ),
                              Text(
                                "live streme lorem ♥",
                                style: TextStyle(color: Colors.white),
                              ),
                            ],
                          )
                        ],
                      ),
                    ),
                    shape: RoundedRectangleBorder(
                      borderRadius: BorderRadius.circular(40.0),
                    ),
                    color: Colors.white30,
                  ),
                ),
                Container(
                  width: 300,
                  height: 50,
                  child: Card(
                    child: Padding(
                      padding: const EdgeInsets.all(8.0),
                      child: Row(
                        children: [
                          Padding(
                            padding: const EdgeInsets.only(right: 8.0),
                            child: Container(
                              width: 55,
                              height: 85,
                              child: Card(
                                shape: RoundedRectangleBorder(
                                  borderRadius: BorderRadius.circular(40.0),
                                ),
                                color: Color(0xFF449A20),

                                //instead of the crown icon you can insert a crown asset image just like in the mockup
                                child: Icon(
                                  FontAwesomeIcons.crown,
                                  size: 15,
                                  color: Colors.yellow,
                                ),
                              ),
                            ),
                          ),
                          Row(
                            children: [
                              Text(
                                "somebody: ",
                                style: TextStyle(color: Colors.yellow),
                              ),
                              Text(
                                "live streme lorem ♥",
                                style: TextStyle(color: Colors.white),
                              ),
                            ],
                          )
                        ],
                      ),
                    ),
                    shape: RoundedRectangleBorder(
                      borderRadius: BorderRadius.circular(40.0),
                    ),
                    color: Colors.white30,
                  ),
                ),
              ],
            ),
          ),
        ],
      ),
    );
  }
}
