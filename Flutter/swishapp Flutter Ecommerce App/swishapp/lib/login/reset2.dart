import 'package:flutter/material.dart';

const primary = Color(0xffff7043);
const white = Color(0xffffffff);
const grey = Color(0xFFBDBDBD);

class Reset2Page extends StatefulWidget {
  @override
  _Reset2PageState createState() => _Reset2PageState();
}

class _Reset2PageState extends State<Reset2Page> {
  bool isShowPassword = false;
  bool isShowPassword1 = false;

  final TextEditingController _controllerPassword = new TextEditingController();
  final TextEditingController _controllerPassword1 =
      new TextEditingController();
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: getBody(),
    );
  }

  Widget getBody() {
    return Scaffold(
      appBar: AppBar(
        centerTitle: true,
        title: Text(
          'Reset Password ',
          style: TextStyle(
            color: Colors.black,
          ),
        ),
        backgroundColor: Colors.white,
        leading: InkWell(
          onTap: () {
            Navigator.pop(context);
          },
          child: Icon(
            Icons.arrow_back_ios,
            color: Colors.black,
          ),
        ),
      ),
      body: Container(
        child: SingleChildScrollView(
          padding: const EdgeInsets.all(30.0),
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: <Widget>[
              SizedBox(
                height: 40,
              ),
              Text(
                "You forget password ? ",
                style: TextStyle(fontWeight: FontWeight.bold, fontSize: 24),
              ),
              SizedBox(
                height: 20,
              ),
              Text(
                "Add your new password",
                style: TextStyle(
                    color: Colors.black38,
                    fontWeight: FontWeight.bold,
                    fontSize: 15),
              ),
              SizedBox(
                height: 40,
              ),
              Text(
                "New password",
                style: TextStyle(fontWeight: FontWeight.bold, fontSize: 15),
              ),
              TextField(
                obscureText: !isShowPassword1,
                cursorColor: grey,
                controller: _controllerPassword1,
                decoration: InputDecoration(
                    hintText: "*************",
                    enabledBorder: UnderlineInputBorder(
                        borderSide: BorderSide(color: grey)),
                    focusedBorder: UnderlineInputBorder(
                        borderSide: BorderSide(color: grey)),
                    // ignore: deprecated_member_use
                    suffixIcon: FlatButton(
                        onPressed: () {
                          setState(() {
                            isShowPassword1 = !isShowPassword1;
                          });
                        },
                        child: Icon(
                          isShowPassword1
                              ? Icons.visibility
                              : Icons.visibility_off,
                          color: grey,
                        ))),
              ),
              SizedBox(
                height: 30,
              ),
              Text(
                "verification Code",
                style: TextStyle(fontWeight: FontWeight.bold, fontSize: 15),
              ),
              TextField(
                obscureText: !isShowPassword,
                cursorColor: grey,
                controller: _controllerPassword,
                decoration: InputDecoration(
                    hintText: "*************",
                    enabledBorder: UnderlineInputBorder(
                        borderSide: BorderSide(color: grey)),
                    focusedBorder: UnderlineInputBorder(
                        borderSide: BorderSide(color: grey)),
                    // ignore: deprecated_member_use
                    suffixIcon: FlatButton(
                        onPressed: () {
                          setState(() {
                            isShowPassword = !isShowPassword;
                          });
                        },
                        child: Icon(
                          isShowPassword
                              ? Icons.visibility
                              : Icons.visibility_off,
                          color: grey,
                        ))),
              ),
              SizedBox(
                height: 100,
              ),
              Row(
                children: <Widget>[
                  Expanded(
                    // ignore: deprecated_member_use
                    child: FlatButton(
                        color: primary,
                        onPressed: () {
                          print("login action");
                        },
                        child: Text(
                          "Submit",
                          style: TextStyle(color: white),
                        )),
                  )
                ],
              ),
            ],
          ),
        ),
      ),
    );
  }
}
