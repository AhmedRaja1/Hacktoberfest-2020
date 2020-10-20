import 'package:flutter/material.dart';
import 'dart:js' as js;

class CustomIconButton extends StatelessWidget {
  final String url;
  final IconData icon;
  CustomIconButton({@required this.icon, @required this.url});
  @override
  Widget build(BuildContext context) {
    return GestureDetector(
      onTap: () {
        js.context.callMethod("open", [url]);
      },
      child: Icon(icon, color: Colors.white),
    );
  }
}
