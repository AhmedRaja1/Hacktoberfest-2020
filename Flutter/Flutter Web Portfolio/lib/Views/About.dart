import 'package:flutter/material.dart';

class About extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return SingleChildScrollView(
      child: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          crossAxisAlignment: CrossAxisAlignment.center,
          children: [
            Container(
              width: MediaQuery.of(context).size.width / 1.5,
              child: Row(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: [
                  Expanded(
                      child: Text(
                    "About",
                    style: TextStyle(
                        fontSize: 50,
                        color: Colors.white,
                        fontWeight: FontWeight.w400),
                  )),
                  Expanded(
                      flex: 3,
                      child: Text(
                        "I am a 1st-year student at University of Engineering and Technology Peshawar, pursuing the field of Computer Science."
                        "I am highly interested and skilled in Computer Science"
                        " and am constantly making my way to learn new skills and grab knowledge every day through hard work and dedication"
                        "to improving myself to succeed in the future.\n\n"
                        "Currently, I is learning Flutter. "
                        "I am highly skilled in making Android, Web, and Desktop apps using Flutter and Dart. I am also good at Machine Learning and Deep Learning."
                        "I also believe in giving back to the community; therefore, I regularly make Open Source contributions."
                        "I am also interested in Competetive Coding is trying to improve his skills every day.\n"
                        "I have a vision to improve myself every day and achieve great success with sheer hard work and dedication in the near future.\n\n"
                        "Do Cheer up for me...!",
                        style: TextStyle(
                            fontSize: 18,
                            color: Colors.white,
                            fontWeight: FontWeight.w400),
                      )),
                ],
              ),
            ),
            SizedBox(
              height: 20,
            ),
            Container(
              width: MediaQuery.of(context).size.width / 1.5,
              child: Row(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: [
                  Expanded(
                      child: Image.asset(
                    "assets/uet.png",
                    height: 150,
                  )),
                  Expanded(
                      flex: 3,
                      child: Text(
                        "Bachelor in Computer Science( 2020 -2024 )",
                        style: TextStyle(
                            fontSize: 20,
                            color: Colors.white,
                            fontWeight: FontWeight.w400),
                      )),
                ],
              ),
            ),
            SizedBox(
              height: 20,
            ),
            Container(
              width: MediaQuery.of(context).size.width / 1.5,
              child: Column(
                children: [
                  Text(
                    "Tools and Lannguages I use",
                    style: TextStyle(
                        fontSize: 50,
                        color: Colors.white,
                        fontWeight: FontWeight.w400),
                  ),
                  SizedBox(
                    height: 20,
                  ),
                  Row(
                    mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                    children: [
                      Image.network(
                          "https://raw.githubusercontent.com/github/explore/80688e429a7d4ef2fca1e82350fe8e3517d3494d/topics/visual-studio-code/visual-studio-code.png",
                          height: 50),
                      Image.network(
                        "https://image.flaticon.com/icons/png/512/906/906324.png",
                        height: 50,
                      ),
                      Image.network(
                        "https://image.flaticon.com/icons/png/512/518/518705.png",
                        height: 50,
                      ),
                      Image.network(
                          "https://image.flaticon.com/icons/png/512/919/919827.png",
                          height: 50),
                      Image.network(
                          "https://image.flaticon.com/icons/png/512/919/919826.png",
                          height: 50),
                      Image.network(
                          "https://image.flaticon.com/icons/png/512/919/919828.png",
                          height: 50),
                      Image.network(
                          "https://image.flaticon.com/icons/png/512/919/919852.png",
                          height: 50),
                      Image.network(
                        "https://image.flaticon.com/icons/png/512/919/919830.png",
                        height: 50,
                      ),
                      Image.network(
                        "https://image.flaticon.com/icons/png/128/919/919836.png",
                        height: 50,
                      ),
                      Image.network(
                        "https://image.flaticon.com/icons/png/512/919/919841.png",
                        height: 50,
                      ),
                      Image.network(
                        "https://image.flaticon.com/icons/png/512/919/919855.png",
                        height: 50,
                      ),
                      Image.network(
                        "https://upload.wikimedia.org/wikipedia/commons/thumb/8/87/Arduino_Logo.svg/800px-Arduino_Logo.svg.png",
                        height: 50,
                      ),
                      Image.network(
                          "https://raw.githubusercontent.com/github/explore/80688e429a7d4ef2fca1e82350fe8e3517d3494d/topics/terminal/terminal.png",
                          height: 50),
                      Image.network(
                          "https://iconape.com/wp-content/png_logo_vector/git-icon.png",
                          height: 50),
                      Image.network(
                          "https://iconape.com/wp-content/files/tw/370888/svg/370888.svg",
                          height: 50),
                    ],
                  ),
                  SizedBox(
                    height: 50,
                  ),
                ],
              ),
            ),
          ],
        ),
      ),
    );
  }
}
