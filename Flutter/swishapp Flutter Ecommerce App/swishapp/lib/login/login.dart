import 'package:firebase_auth/firebase_auth.dart';
import 'package:firebase_core/firebase_core.dart';
import 'package:flutter/material.dart';
import 'package:swishapp/componets/home.dart';
import 'package:swishapp/login/forgot_password_page.dart';
import 'package:swishapp/login/sign_up_page.dart';
import 'package:validators/validators.dart';

const primary = Color(0xffff7043);
const white = Color(0xffffffff);
const grey = Color(0xFFBDBDBD);

class Login extends StatefulWidget {
  @override
  _LoginState createState() => _LoginState();
}

class _LoginState extends State<Login> {
  @override
  void initState() {
    super.initState();
    Firebase.initializeApp().whenComplete(() => print("Firebase Initialized"));
  }

  final TextEditingController _controllerEmail = new TextEditingController();
  final TextEditingController _controllerPassword = new TextEditingController();
  final _formKey = GlobalKey<FormState>();
  final GlobalKey<ScaffoldState> _scaffoldkey = GlobalKey<ScaffoldState>();
  bool isShowPassword = false;

  void signinFireBaseUser() async {
    try {
      UserCredential result = await FirebaseAuth.instance
          .signInWithEmailAndPassword(email: email, password: password);
      var snackBar = SnackBar(content: Text("Logged In successfully"));
      ScaffoldMessenger.of(_scaffoldkey.currentContext).showSnackBar(snackBar);
      print(result.user.uid);

      Navigator.push(context, MaterialPageRoute(builder: (context) => Home()));
    } catch (e) {
      var snackBar = SnackBar(content: Text(e.message));
      ScaffoldMessenger.of(_scaffoldkey.currentContext).showSnackBar(snackBar);
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: getBody(),
    );
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
    } else
      return null;
  }

  String password;
  String email;

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

  Widget getBody() {
    return Scaffold(
      key: _scaffoldkey,
      appBar: AppBar(
        centerTitle: true,
        title: Text(
          'Log in',
          style: TextStyle(
            color: Colors.black,
          ),
        ),
        backgroundColor: Colors.white,
      ),
      body: Container(
        child: SingleChildScrollView(
          padding: const EdgeInsets.all(30.0),
          child: Form(
            key: _formKey,
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: <Widget>[
                SizedBox(
                  height: 40,
                ),
                Text(
                  "Sign In ",
                  style: TextStyle(fontWeight: FontWeight.bold, fontSize: 24),
                ),
                SizedBox(
                  height: 40,
                ),
                Text(
                  "Email",
                  style: TextStyle(fontWeight: FontWeight.bold, fontSize: 15),
                ),
                customform("Email", validateemail, _controllerEmail),
                SizedBox(
                  height: 30,
                ),
                Text(
                  "Password",
                  style: TextStyle(fontWeight: FontWeight.bold, fontSize: 15),
                ),
                passwordfield(),
                SizedBox(
                  height: 30,
                ),
                InkWell(
                    onTap: () {
                      gotoForgotPassword();
                    },
                    child: Align(
                      child: Text(
                        "Forgot your Password?",
                        style: TextStyle(color: Colors.red),
                      ),
                      alignment: Alignment.centerRight,
                    )),
                SizedBox(
                  height: 20,
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
                                email = _controllerEmail.text;
                                password = _controllerPassword.text;
                              });

                              signinFireBaseUser();
                            } else {
                              print("failed to validate");
                            }
                          },
                          child: Text(
                            "Sign In",
                            style: TextStyle(color: white),
                          )),
                    )
                  ],
                ),
                SizedBox(
                  height: 15,
                ),
                Row(children: <Widget>[
                  Expanded(
                    child: new Container(
                        margin: const EdgeInsets.only(left: 10.0, right: 20.0),
                        child: Divider(
                          color: Colors.grey,
                          height: 36,
                        )),
                  ),
                  Text(
                    "OR",
                    style: TextStyle(color: Colors.grey, fontSize: 15),
                  ),
                  Expanded(
                    child: new Container(
                        margin: const EdgeInsets.only(left: 20.0, right: 10.0),
                        child: Divider(
                          color: Colors.grey,
                          height: 36,
                        )),
                  ),
                ]),
                Padding(
                  padding: EdgeInsets.symmetric(vertical: 30.0),
                  child: Row(
                    mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                    children: <Widget>[
                      GestureDetector(
                        onTap: () => print('Login with Google'),
                        child: Container(
                          height: 30,
                          width: 30,
                          decoration: BoxDecoration(
                            shape: BoxShape.circle,
                            color: Colors.white,
                            boxShadow: [
                              BoxShadow(
                                color: Colors.black26,
                                offset: Offset(0, 2),
                                blurRadius: 6.0,
                              )
                            ],
                            image: DecorationImage(
                              image: AssetImage(
                                'assets/log/google.jpg',
                              ),
                            ),
                          ),
                        ),
                      ),
                      GestureDetector(
                        onTap: () => print('Login with Facebook'),
                        child: Container(
                          height: 30,
                          width: 30,
                          decoration: BoxDecoration(
                            shape: BoxShape.circle,
                            color: Colors.white,
                            boxShadow: [
                              BoxShadow(
                                color: Colors.black26,
                                offset: Offset(0, 2),
                                blurRadius: 6.0,
                              )
                            ],
                            image: DecorationImage(
                              image: AssetImage(
                                'assets/log/facebook.jpg',
                              ),
                            ),
                          ),
                        ),
                      ),
                    ],
                  ),
                ),
                SizedBox(
                  height: 5,
                ),
                Row(
                  children: [
                    Text(
                      "New on SWISH ? ",
                      style:
                          TextStyle(fontWeight: FontWeight.bold, fontSize: 15),
                    ),
                    InkWell(
                      onTap: () {
                        goToSignUpPage();
                      },
                      child: Text(
                        "CREATE AN ACCOUNT",
                        style: TextStyle(
                            color: Colors.red,
                            fontWeight: FontWeight.bold,
                            fontSize: 15),
                      ),
                    ),
                  ],
                ),
              ],
            ),
          ),
        ),
      ),
    );
  }

  goToSignUpPage() {
    Navigator.push(
        context, MaterialPageRoute(builder: (context) => SignUpPage()));
  }

  gotoForgotPassword() {
    Navigator.push(
        context, MaterialPageRoute(builder: (context) => ForgotPasswordPage()));
  }
}
