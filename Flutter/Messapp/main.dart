import 'package:flutter/material.dart';
import 'package:messapp/LoginPage.dart'; 
import 'package:messapp/Employee.dart';
import 'package:messapp/StudentScreen.dart';
import 'package:messapp/admin_part/adminscreen.dart';
import 'package:messapp/admin_part/signupPage.dart';
import 'package:messapp/stdleave.dart';
import 'package:messapp/stdBalance.dart';


void main() => runApp(MyApp());

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return new MaterialApp(
      initialRoute: '/',
      routes: {
        '/':(context)=>WelcomePage(),
        'LoginPage':(context)=>LoginPage(),
        'EmployeeScreen':(context)=>Employee(),
        'StudentScreen':(context)=>Student(),
        'Leave':(context)=>Leave(),
        'Balance':(context)=>CheckBalance(),
        'AdminScreen':(context)=>AdminScreen(),
        'Signup':(context)=>SignupPage(),
        //'SelectionPage':(context)=>SelectionPage(),
       },
    );
  }
}


class WelcomePage extends StatefulWidget {
  @override
  _WelcomePageState createState() => _WelcomePageState();
}

class _WelcomePageState extends State<WelcomePage> {

  @override
    void initState(){
      super.initState();
        Navigator.pushNamed(context, 'LoginPage');
    }

  @override
  Widget build(BuildContext context) {
    return  Scaffold(
      body:  new Container(
        width: MediaQuery.of(context).size.width,
        height: MediaQuery.of(context).size.height,
        color: Colors.deepPurple[200],
        child: Stack(
        children: <Widget>[
           Center(
          child: Container(
            width: 400,
            height: 400,
            child: Column(
              mainAxisAlignment: MainAxisAlignment.center,
              children: <Widget>[
                   Image.asset('images/messlogo.PNG',width: 350,height: 350,),
                Text('MESSAPP',
                   style: TextStyle(color: Colors.white,
                   fontSize: 30.0,
                   fontWeight:FontWeight.bold)
                 )
              ],
            ),
          ),
        ),
        ],
      )
      )
      );
  }
}


