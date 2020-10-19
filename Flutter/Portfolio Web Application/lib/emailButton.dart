import 'package:flutter/material.dart';
import 'constants.dart';
import 'package:url_launcher/url_launcher.dart';
import 'package:url_launcher_web/url_launcher_web.dart';

class EmailButton extends StatelessWidget {
  _sendEmail() async {
    const emailaddress =
        'mailto:alexjacob260@gmail.com?subject=hello@ashley&body=';
    if (await UrlLauncherPlugin().canLaunch(emailaddress)) {
      await UrlLauncherPlugin().launch(
        emailaddress,
        useWebView: true,
        enableDomStorage: true,
        enableJavaScript: true,
        useSafariVC: true,
        webOnlyWindowName: 'Arudito',
        headers: null,
        universalLinksOnly: false,
      );
    } else {
      throw 'Could not launch $emailaddress';
    }
  }

  @override
  Widget build(BuildContext context) {
    return Material(
      elevation: 3.0,
      color: kC1,
      borderRadius: BorderRadius.circular(30.0),
      child: MaterialButton(
        onPressed: () {
          _sendEmail();
        },
        minWidth: 200.0,
        height: 42.0,
        child: Text(
          "CONTACT ME",
          style: TextStyle(
            color: Colors.white,
            fontSize: 15,
            letterSpacing: 1.5,
            fontWeight: FontWeight.w700,
            fontFamily: "OpenSans",
          ),
        ),
      ),
    );
  }
}
