import 'package:flutter/material.dart';
import 'constants.dart';
import 'dart:js' as js;

class Resume extends StatelessWidget {
  final String uRL =
      "https://drive.google.com/file/d/1Vb6u2YfgNYKE7Mc0vQimbym47nhrGpmJ/view?usp=sharing";
  @override
  Widget build(BuildContext context) {
    return FlatButton(
      onPressed: () {
        js.context.callMethod("open", [uRL]);
      },
      height: 42.0,
      minWidth: 200.0,
      shape: RoundedRectangleBorder(
          side: BorderSide(
              color: Colors.grey[700], width: 2, style: BorderStyle.solid),
          borderRadius: BorderRadius.circular(30)),
      child: Text(
        "RESUME",
        style: TextStyle(
          color: kTopGrey,
          fontSize: 15,
          letterSpacing: 1.5,
          fontWeight: FontWeight.w700,
          fontFamily: "OpenSans",
        ),
      ),
    );
  }
}
