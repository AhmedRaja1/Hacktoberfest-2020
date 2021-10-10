import 'package:flutter/material.dart';
import 'package:swishapp/login/shippingaddress.dart';

const primary = Color(0xffff7043);
const white = Color(0xffffffff);
const grey = Color(0xFFBDBDBD);

class Urshipping extends StatefulWidget {
  @override
  _UrshippingState createState() => _UrshippingState();
}

class _UrshippingState extends State<Urshipping> {
  bool checkBoxValue = false;
  String dropdownValue = 'Tunisie';
  final TextEditingController _controllerEmail = new TextEditingController();
  final TextEditingController _controllerPassword = new TextEditingController();
  final TextEditingController _controllerFullname = new TextEditingController();
  bool isShowPassword = false;
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: getBody(),
    );
  }

  Widget getBody() {
    bool value = false;
    return Scaffold(
      appBar: AppBar(
        centerTitle: true,
        title: Text(
          'Your Shipping Address',
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
                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: <Widget>[
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
                    TextField(
                      cursorColor: grey,
                      controller: _controllerEmail,
                      decoration: InputDecoration(
                        enabledBorder: UnderlineInputBorder(
                            borderSide: BorderSide(color: grey)),
                        focusedBorder: UnderlineInputBorder(
                            borderSide: BorderSide(color: grey)),
                        hintText: "User",
                      ),
                    ),
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
                    TextField(
                      cursorColor: grey,
                      controller: _controllerEmail,
                      decoration: InputDecoration(
                        enabledBorder: UnderlineInputBorder(
                            borderSide: BorderSide(color: grey)),
                        focusedBorder: UnderlineInputBorder(
                            borderSide: BorderSide(color: grey)),
                        hintText: "5555555555",
                      ),
                    ),
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
                    TextField(
                      cursorColor: grey,
                      controller: _controllerEmail,
                      decoration: InputDecoration(
                        enabledBorder: UnderlineInputBorder(
                            borderSide: BorderSide(color: grey)),
                        focusedBorder: UnderlineInputBorder(
                            borderSide: BorderSide(color: grey)),
                        hintText: "Steet,Adress,Company name,",
                      ),
                    ),
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
                    TextField(
                      cursorColor: grey,
                      controller: _controllerEmail,
                      decoration: InputDecoration(
                        enabledBorder: UnderlineInputBorder(
                            borderSide: BorderSide(color: grey)),
                        focusedBorder: UnderlineInputBorder(
                            borderSide: BorderSide(color: grey)),
                        hintText: "Steet,Adress,Company name,",
                      ),
                    ),
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
                    TextField(
                      cursorColor: grey,
                      controller: _controllerEmail,
                      decoration: InputDecoration(
                        enabledBorder: UnderlineInputBorder(
                            borderSide: BorderSide(color: grey)),
                        focusedBorder: UnderlineInputBorder(
                            borderSide: BorderSide(color: grey)),
                        hintText: "Your City",
                      ),
                    ),
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
                    TextField(
                      cursorColor: grey,
                      controller: _controllerEmail,
                      decoration: InputDecoration(
                        enabledBorder: UnderlineInputBorder(
                            borderSide: BorderSide(color: grey)),
                        focusedBorder: UnderlineInputBorder(
                            borderSide: BorderSide(color: grey)),
                        hintText: "Your Zipcode",
                      ),
                    ),
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
                            value: value,
                            checkColor:
                                Colors.orange[400], // color of tick Mark
                            activeColor: Colors.grey,
                            onChanged: (bool value) {
                              setState(() {
                                value = value;
                              });
                            }),
                        Text("Default Adress"),
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
                                signUP();
                              },
                              child: Text(
                                "Validate",
                                style: TextStyle(color: white),
                              )),
                        ),
                      ],
                    ),
                    Row(
                      children: <Widget>[
                        Expanded(
                          // ignore: deprecated_member_use
                          child: FlatButton(
                              color: Colors.red,
                              onPressed: () {
                                Navigator.push(
                                    context,
                                    MaterialPageRoute(
                                        builder: (context) => ShipingPage()));
                              },
                              child: Text(
                                "Add New Adress",
                                style: TextStyle(color: white),
                              )),
                        ),
                      ],
                    ),
                    SizedBox(
                      height: 15,
                    )
                  ],
                ),
              )
            ],
          ),
        ),
      ),
    );
  }

  signUP() {
    String email = _controllerEmail.text;
    String password = _controllerPassword.text;
    String fullname = _controllerFullname.text;
    print("$email, $password, $fullname");
  }
}
