import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:swishapp/componets/home.dart';
import 'package:firebase_core/firebase_core.dart';

const primary = Color(0xffff7043);
const white = Color(0xffffffff);
const grey = Color(0xFFBDBDBD);

class ShipingPage extends StatefulWidget {
  final String emailx;
  final String passwordx;

  ShipingPage({this.emailx, this.passwordx});
  @override
  _ShipingPageState createState() => _ShipingPageState();
}

class _ShipingPageState extends State<ShipingPage> {
  @override
  void initState() {
    super.initState();
    Firebase.initializeApp().whenComplete(() => print("Firebase Initialized"));
  }

  String dropdownValue = 'Tunisie';

  bool checkBoxValue = false;
  final TextEditingController _controllerphonenumber = TextEditingController();
  final TextEditingController _controlleraddress1 = TextEditingController();
  final TextEditingController _controlleraddress2 = TextEditingController();
  final TextEditingController _controllercity = TextEditingController();
  final TextEditingController _controllerzipcode = TextEditingController();
  final TextEditingController _controllerFullname = TextEditingController();
  final _formKey = GlobalKey<FormState>();
  final GlobalKey<ScaffoldState> _scaffoldkey = GlobalKey<ScaffoldState>();

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: getBody(),
    );
  }

  String validatename(value) {
    if (value.length < 6) {
      return "name is too short";
    } else if (value == "") {
      return "please fill Username";
    } else
      return null;
  }

  String validatephonenumber(value) {
    if (value == "") {
      return "Please Enter PhoneNumber";
    } else
      return null;
  }

  String validateaddress(value) {
    if (value == "") {
      return "Please Enter Address";
    } else
      return null;
  }

  String validatecity(value) {
    if (value == "") {
      return "Please Enter City";
    } else
      return null;
  }

  String validatezipcode(value) {
    if (value == "") {
      return "Please Enter ZipCode";
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

  void createFireBaseUser() async {
    try {
      UserCredential result = await FirebaseAuth.instance
          .createUserWithEmailAndPassword(email: email, password: password);
      var snackBar = SnackBar(content: Text("Account created successfully"));
      ScaffoldMessenger.of(_scaffoldkey.currentContext).showSnackBar(snackBar);
      print(result.user.uid);
      Navigator.push(context, MaterialPageRoute(builder: (context) => Home()));
    } catch (e) {
      var snackBar = SnackBar(content: Text(e.message));
      ScaffoldMessenger.of(_scaffoldkey.currentContext).showSnackBar(snackBar);
    }
  }

  String name;
  String email;
  String password;
  String phonenumber;
  String address1;
  String address2;
  String city;
  String zipcode;
  Widget getBody() {
    return Scaffold(
      key: _scaffoldkey,
      appBar: AppBar(
        centerTitle: true,
        title: Text(
          'Shipping Adress',
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
                        "Add new address",
                        style: TextStyle(
                            fontWeight: FontWeight.bold, fontSize: 24),
                      ),
                      SizedBox(
                        height: 40,
                      ),
                      Row(
                        children: [
                          Text(
                            "Name",
                            style: TextStyle(
                                fontWeight: FontWeight.bold, fontSize: 15),
                          ),
                          Text(
                            "*",
                            style: TextStyle(
                                color: Colors.red,
                                fontWeight: FontWeight.bold,
                                fontSize: 15),
                          ),
                        ],
                      ),
                      customform("Name", validatename, _controllerFullname),
                      SizedBox(
                        height: 30,
                      ),
                      Row(
                        children: [
                          Text(
                            "Phone Number",
                            style: TextStyle(
                                fontWeight: FontWeight.bold, fontSize: 15),
                          ),
                          Text(
                            "*",
                            style: TextStyle(
                                color: Colors.red,
                                fontWeight: FontWeight.bold,
                                fontSize: 15),
                          ),
                        ],
                      ),
                      customform("Phone Number", validatephonenumber,
                          _controllerphonenumber),
                      SizedBox(
                        height: 30,
                      ),
                      Row(
                        children: [
                          Text(
                            "Address Line 1",
                            style: TextStyle(
                                fontWeight: FontWeight.bold, fontSize: 15),
                          ),
                          Text(
                            "*",
                            style: TextStyle(
                                color: Colors.red,
                                fontWeight: FontWeight.bold,
                                fontSize: 15),
                          ),
                        ],
                      ),
                      customform("Steet,Address,Company name", validateaddress,
                          _controlleraddress1),
                      SizedBox(
                        height: 30,
                      ),
                      Row(
                        children: [
                          Text(
                            "Address Line 2",
                            style: TextStyle(
                                fontWeight: FontWeight.bold, fontSize: 15),
                          ),
                          Text(
                            "*",
                            style: TextStyle(
                                color: Colors.red,
                                fontWeight: FontWeight.bold,
                                fontSize: 15),
                          ),
                        ],
                      ),
                      customform("Steet,Address,Company name", validateaddress,
                          _controlleraddress2),
                      SizedBox(
                        height: 30,
                      ),
                      Row(
                        children: [
                          Text(
                            "City",
                            style: TextStyle(
                                fontWeight: FontWeight.bold, fontSize: 15),
                          ),
                          Text(
                            "*",
                            style: TextStyle(
                                color: Colors.red,
                                fontWeight: FontWeight.bold,
                                fontSize: 15),
                          ),
                        ],
                      ),
                      customform("City", validatecity, _controllercity),
                      SizedBox(
                        height: 30,
                      ),
                      Row(
                        children: [
                          Text(
                            "Zip code",
                            style: TextStyle(
                                fontWeight: FontWeight.bold, fontSize: 15),
                          ),
                          Text(
                            "*",
                            style: TextStyle(
                                color: Colors.red,
                                fontWeight: FontWeight.bold,
                                fontSize: 15),
                          ),
                        ],
                      ),
                      customform(
                          "Your ZipCode", validatezipcode, _controllerzipcode),
                      SizedBox(
                        height: 30,
                      ),
                      Row(
                        children: [
                          Text(
                            "Country",
                            style: TextStyle(
                                fontWeight: FontWeight.bold, fontSize: 15),
                          ),
                          Text(
                            "*",
                            style: TextStyle(
                                color: Colors.red,
                                fontWeight: FontWeight.bold,
                                fontSize: 15),
                          ),
                        ],
                      ),
                      DropdownButton<String>(
                        value: dropdownValue,
                        icon: const Icon(Icons.arrow_drop_down),
                        iconSize: 15,
                        isExpanded: true,
                        style: const TextStyle(color: Colors.grey),
                        underline: Container(
                          color: Colors.grey[300],
                          height: 1,
                        ),
                        onChanged: (String newValue) {
                          setState(() {
                            dropdownValue = newValue;
                          });
                        },
                        items: <String>[
                          'Tunisie',
                          'Germany',
                          'USA',
                          'UKA',
                          'UAE',
                          'Oman'
                        ].map<DropdownMenuItem<String>>((String value) {
                          return DropdownMenuItem<String>(
                            value: value,
                            child: Text(value),
                          );
                        }).toList(),
                      ),
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
                          Text("Default Adress"),
                        ],
                      ),
                      SizedBox(
                        height: 15,
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
                                      phonenumber = _controllerphonenumber.text;
                                      address1 = _controlleraddress1.text;
                                      address2 = _controlleraddress2.text;
                                      zipcode = _controllerzipcode.text;
                                      city = _controllercity.text;
                                      email = widget.emailx;
                                      password = widget.passwordx;
                                    });
                                    print(name);
                                    print(email);
                                    print(password);
                                    print(phonenumber);
                                    print(address1);
                                    print(address2);
                                    print(zipcode);
                                    print(city);
                                    print("Validated");
                                    if (checkBoxValue) {
                                      createFireBaseUser();
                                    } else {
                                      var snackBar = SnackBar(
                                          content:
                                              Text("Please check as default"));
                                      ScaffoldMessenger.of(context)
                                          .showSnackBar(snackBar);
                                    }
                                  } else {
                                    print("failed to validate");
                                  }
                                },
                                child: Text(
                                  "Create",
                                  style: TextStyle(color: white),
                                )),
                          ),
                          SizedBox(
                            height: 15,
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
