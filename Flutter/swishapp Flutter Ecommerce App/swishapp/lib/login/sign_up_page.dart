import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:swishapp/login/shippingaddress.dart';
import 'package:validators/validators.dart';
import 'package:fluttertoast/fluttertoast.dart';

const primary = Color(0xffff7043);
const white = Color(0xffffffff);
const grey = Color(0xFFBDBDBD);

class SignUpPage extends StatefulWidget {
  @override
  _SignUpPageState createState() => _SignUpPageState();
}

class _SignUpPageState extends State<SignUpPage> {
  final _formKey = GlobalKey<FormState>();
  bool checkBoxValue = false;
  final TextEditingController _controllerEmail = TextEditingController();
  final TextEditingController _controllerPassword = TextEditingController();
  final TextEditingController _controllerFullname = TextEditingController();
  final TextEditingController _controllerphonenumber =
      new TextEditingController();
  bool isShowPassword = false;
  String name;
  String email;
  String password;
  String phonenumber;

  String validatename(value) {
    if (value.length < 6) {
      return "name is too short";
    } else if (value == "") {
      return "please fill Username";
    } else
      return null;
  }

  String validateemail(value) {
    if (value == "") {
      return "Please fill the email";
    } else if (!isEmail(value)) {
      return "Invalid Email";
    } else
      return null;
  }

  String validatepassword(value) {
    if (value == "") {
      return "Please Enter password";
    } else if (value.length < 6) {
      return "Password too short";
    } else
      return null;
  }

  String validatephonenumber(value) {
    if (value == "") {
      return "Please Enter PhoneNumber";
    } else
      return null;
  }

  Widget customform(
      String name, Function onvalidate, TextEditingController controller) {
    return TextFormField(
      validator: onvalidate,
      cursorColor: grey,
      controller: controller,
      decoration: InputDecoration(
        enabledBorder:
            UnderlineInputBorder(borderSide: BorderSide(color: grey)),
        focusedBorder:
            UnderlineInputBorder(borderSide: BorderSide(color: grey)),
        hintText: name,
      ),
    );
  }

  Widget passwordfield() {
    return TextFormField(
      validator: validatepassword,
      obscureText: !isShowPassword,
      cursorColor: grey,
      controller: _controllerPassword,
      decoration: InputDecoration(
          hintText: "Password",
          enabledBorder:
              UnderlineInputBorder(borderSide: BorderSide(color: grey)),
          focusedBorder:
              UnderlineInputBorder(borderSide: BorderSide(color: grey)),
          // ignore: deprecated_member_use
          suffixIcon: FlatButton(
              onPressed: () {
                setState(() {
                  isShowPassword = !isShowPassword;
                });
              },
              child: Icon(
                isShowPassword ? Icons.visibility : Icons.visibility_off,
                color: grey,
              ))),
      onChanged: (String value) {
        password = value;
      },
    );
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        centerTitle: true,
        title: Text(
          'Create Account',
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
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: <Widget>[
              Padding(
                padding: const EdgeInsets.only(left: 30, right: 30),
                child: Form(
                  key: _formKey,
                  child: Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: <Widget>[
                      SizedBox(
                        height: 40,
                      ),
                      Text(
                        "Sign Up",
                        style: TextStyle(
                            fontWeight: FontWeight.bold, fontSize: 24),
                      ),
                      SizedBox(
                        height: 40,
                      ),
                      Text(
                        "Name",
                        style: TextStyle(
                            fontWeight: FontWeight.bold, fontSize: 15),
                      ),
                      customform("Name", validatename, _controllerFullname),
                      SizedBox(
                        height: 30,
                      ),
                      Text(
                        "Email",
                        style: TextStyle(
                            fontWeight: FontWeight.bold, fontSize: 15),
                      ),
                      customform("Email", validateemail, _controllerEmail),
                      SizedBox(
                        height: 30,
                      ),
                      Text(
                        "Password",
                        style: TextStyle(
                            fontWeight: FontWeight.bold, fontSize: 15),
                      ),
                      passwordfield(),
                      SizedBox(
                        height: 30,
                      ),
                      Text(
                        "Phone",
                        style: TextStyle(
                            fontWeight: FontWeight.bold, fontSize: 15),
                      ),
                      customform("Phone Number", validatephonenumber,
                          _controllerphonenumber),
                      SizedBox(
                        height: 30,
                      ),
                      Row(
                        children: <Widget>[
                          Checkbox(
                              value: checkBoxValue,
                              onChanged: (bool value) {
                                setState(() {
                                  checkBoxValue = value;
                                });
                              }),
                          Text(
                              "I agree to the terms of services \n and Privacy Policy"),
                        ],
                      ),
                      SizedBox(
                        height: 30,
                      ),
                      Row(
                        children: <Widget>[
                          Expanded(
                            // ignore: deprecated_member_use
                            child: FlatButton(
                                color: primary,
                                onPressed: () {
                                  if (_formKey.currentState.validate()) {
                                    setState(() {
                                      name = _controllerFullname.text;
                                      email = _controllerEmail.text;
                                      password = _controllerPassword.text;
                                      phonenumber = _controllerphonenumber.text;
                                    });
                                    print(name);
                                    print(email);
                                    print(password);
                                    print(phonenumber);
                                    if (checkBoxValue) {
                                      Navigator.push(
                                          context,
                                          MaterialPageRoute(
                                              builder: (context) => ShipingPage(
                                                    emailx: email,
                                                    passwordx: password,
                                                  )));
                                    } else {
                                      Fluttertoast.showToast(
                                          msg:
                                              "Please agree to terms and services",
                                          toastLength: Toast.LENGTH_SHORT,
                                          gravity: ToastGravity.BOTTOM,
                                          timeInSecForIosWeb: 1,
                                          backgroundColor: Colors.black,
                                          textColor: Colors.white,
                                          fontSize: 16.0);
                                    }
                                  } else {
                                    print("failed to validate");
                                  }
                                },
                                child: Text(
                                  "Continue",
                                  style: TextStyle(color: Colors.white),
                                )),
                          ),
                        ],
                      ),
                    ],
                  ),
                ),
              )
            ],
          ),
        ),
      ),
    );
  }
}
