import 'package:flutter/material.dart';

class NavbarLogoDesk extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return SizedBox(
        height: 80,
        width: 500,
        child: Row(
          children: [
            Text(
              '<',
              style: TextStyle(fontSize: 30, color: Colors.white),
            ),
            Text(
              'Hamas ur Rehman',
              style: TextStyle(
                  color: Colors.blueAccent,
                  fontSize: 30,
                  fontFamily: 'Agustina'),
            ),
            Text(
              '/',
              style: TextStyle(color: Colors.grey, fontSize: 40),
            ),
            Text(
              '>',
              style: TextStyle(fontSize: 30, color: Colors.white),
            )
          ],
        )
        //Image.asset('assets/images/logo.png'),
        );
  }
}
