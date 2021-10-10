import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:swishapp/categories/pages/categories1.dart';
import 'package:swishapp/pages/CreateLiveStream.dart';

import 'package:swishapp/pages/Display.dart';

import 'package:swishapp/pages/profile.dart';

import 'home_page.dart';

class Home extends StatefulWidget {
  @override
  _HomeState createState() => _HomeState();
}

class _HomeState extends State<Home> {
  // Properties & Variables needed

  int currentTab = 0; // to keep track of active tab index
  final List<Widget> screens = [
    HomePage(),
    Categories1(),
    Displa(),
    ProfileSection(),
  ]; // to store nested tabs
  final PageStorageBucket bucket = PageStorageBucket();
  Widget currentScreen = HomePage(); // Our first view in viewport

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: PageStorage(
        child: currentScreen,
        bucket: bucket,
      ),
      floatingActionButton: FloatingActionButton(
        child: Icon(Icons.video_call_outlined),
        backgroundColor: Colors.red[700],
        onPressed: () {
          Navigator.push(context,
              MaterialPageRoute(builder: (context) => CreateLiveStream()));
        },
      ),
      floatingActionButtonLocation: FloatingActionButtonLocation.centerDocked,
      bottomNavigationBar: BottomAppBar(
        shape: CircularNotchedRectangle(),
        notchMargin: 10,
        child: Container(
          height: 60,
          child: Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: <Widget>[
              Row(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: <Widget>[
                  MaterialButton(
                    minWidth: 40,
                    onPressed: () {
                      setState(() {
                        currentScreen =
                            HomePage(); // if user taps on this HomePage tab will be active
                        currentTab = 0;
                      });
                    },
                    child: Column(
                      mainAxisAlignment: MainAxisAlignment.center,
                      children: <Widget>[
                        Icon(Icons.home,
                            color: currentTab == 0
                                ? Colors.red[700]
                                : Colors.black),
                        Text(
                          'Home',
                          style: TextStyle(
                            color: currentTab == 0
                                ? Colors.red[700]
                                : Colors.black,
                          ),
                        ),
                      ],
                    ),
                  ),
                  MaterialButton(
                    minWidth: 40,
                    onPressed: () {
                      setState(() {
                        currentScreen =
                            Categories1(); // if user taps on this HomePage tab will be active
                        currentTab = 1;
                      });
                    },
                    child: Column(
                      mainAxisAlignment: MainAxisAlignment.center,
                      children: <Widget>[
                        Icon(
                          Icons.drag_indicator_sharp,
                          color:
                              currentTab == 1 ? Colors.red[700] : Colors.black,
                        ),
                        Text(
                          'Categories',
                          style: TextStyle(
                            color: currentTab == 1
                                ? Colors.red[700]
                                : Colors.black,
                          ),
                        ),
                      ],
                    ),
                  )
                ],
              ),

              // Right Tab bar icons

              Row(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: <Widget>[
                  MaterialButton(
                    minWidth: 40,
                    onPressed: () {
                      setState(() {
                        currentScreen =
                            Displa(); // if user taps on this HomePage tab will be active
                        currentTab = 2;
                      });
                    },
                    child: Column(
                      mainAxisAlignment: MainAxisAlignment.center,
                      children: <Widget>[
                        Icon(
                          Icons.theaters_outlined,
                          color:
                              currentTab == 2 ? Colors.red[700] : Colors.black,
                        ),
                        Text(
                          'Watch',
                          style: TextStyle(
                            color: currentTab == 2
                                ? Colors.red[700]
                                : Colors.black,
                          ),
                        ),
                      ],
                    ),
                  ),
                  MaterialButton(
                    minWidth: 40,
                    onPressed: () {
                      setState(() {
                        currentScreen =
                            ProfileSection(); // if user taps on this HomePage tab will be active
                        currentTab = 3;
                      });
                    },
                    child: Column(
                      mainAxisAlignment: MainAxisAlignment.center,
                      children: <Widget>[
                        Icon(
                          Icons.person,
                          color:
                              currentTab == 3 ? Colors.red[700] : Colors.black,
                        ),
                        Text(
                          'Account',
                          style: TextStyle(
                            color: currentTab == 3
                                ? Colors.red[700]
                                : Colors.black,
                          ),
                        ),
                      ],
                    ),
                  )
                ],
              )
            ],
          ),
        ),
      ),
    );
  }
}
