import 'package:flutter/material.dart';
import 'package:swishapp/pages/Thankyou.dart';

class Checkout2 extends StatefulWidget {
  @override
  _Checkout2State createState() => _Checkout2State();
}

class _Checkout2State extends State<Checkout2> {
  bool valuefirst = false;
  bool valuesecond = false;
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      bottomNavigationBar: BottomAppBar(
        child: Row(
          mainAxisSize: MainAxisSize.max,
          mainAxisAlignment: MainAxisAlignment.spaceBetween,
          children: <Widget>[
            Padding(
              padding: const EdgeInsets.all(8.0),
              child: Row(
                children: [
                  Text("Total: "),
                  Text(
                    "133.00 TND",
                    style: TextStyle(fontWeight: FontWeight.bold),
                  ),
                ],
              ),
            ),
            Padding(
              padding: const EdgeInsets.only(right: 8.0),
              child: ElevatedButton(
                  style: ButtonStyle(
                      backgroundColor:
                          MaterialStateProperty.all<Color>(Color(0xFFFF5D55))),
                  onPressed: () {
                    Navigator.push(context,
                        MaterialPageRoute(builder: (context) => Thankyou()));
                  },
                  child: Text("Validate")),
            )
          ],
        ),
      ),
      appBar: AppBar(
        centerTitle: true,
        elevation: 0.0,
        backgroundColor: Colors.white,
        leading: IconButton(
            icon: Icon(Icons.arrow_back_ios, color: Colors.black),
            onPressed: () {
              Navigator.pop(context);
            }),
        title: Text(
          "Checkout",
          style: TextStyle(color: Colors.black),
        ),
      ),
      body: SingleChildScrollView(
          child: Padding(
        padding: const EdgeInsets.all(15.0),
        child: Column(
          children: [
            Card(
              child: Padding(
                padding: const EdgeInsets.all(8.0),
                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Text(
                      "Apply the voucher",
                      style: TextStyle(fontSize: 18),
                    ),
                    Divider(color: Colors.grey),
                    Row(
                      children: [
                        Checkbox(
                          activeColor: Colors.red,
                          value: this.valuefirst,
                          onChanged: (bool value) {
                            setState(() {
                              this.valuefirst = value;
                            });
                          },
                        ),
                        Column(
                          crossAxisAlignment: CrossAxisAlignment.start,
                          children: [
                            Text(
                              "-10.00 TND",
                              style: TextStyle(fontSize: 18),
                            ),
                            Text(
                              "Valid from 100.00 TND of purchase",
                              style: TextStyle(color: Colors.red, fontSize: 12),
                            ),
                          ],
                        ),
                      ],
                    ),
                    Row(
                      children: [
                        SizedBox(
                          width: 50,
                        ),
                        Container(child: Text("For all Products")),
                      ],
                    ),
                    Row(
                      children: [
                        SizedBox(
                          width: 50,
                        ),
                        Container(
                            child: Text("1/11/2020 09.00 to 30/11/2020 09.00")),
                      ],
                    ),
                  ],
                ),
              ),
            ),
            SizedBox(
              height: 20,
            ),
            Card(
              child: Padding(
                padding: const EdgeInsets.all(15.0),
                child: Column(
                  children: [
                    Row(
                      mainAxisAlignment: MainAxisAlignment.spaceBetween,
                      children: [
                        Text("SubTotal"),
                        Text(
                          "133.00 TND",
                          style: (TextStyle(fontWeight: FontWeight.bold)),
                        ),
                      ],
                    ),
                    SizedBox(
                      height: 20,
                    ),
                    Row(
                      mainAxisAlignment: MainAxisAlignment.spaceBetween,
                      children: [
                        Text("Shipping fee"),
                        Text(
                          "10.00 TND",
                          style: (TextStyle(fontWeight: FontWeight.bold)),
                        ),
                      ],
                    ),
                    SizedBox(
                      height: 20,
                    ),
                    Row(
                      mainAxisAlignment: MainAxisAlignment.spaceBetween,
                      children: [
                        Text("Discount"),
                        Text(
                          "-10.00 TND",
                          style: (TextStyle(
                              fontWeight: FontWeight.bold, color: Colors.red)),
                        ),
                      ],
                    ),
                  ],
                ),
              ),
            )
          ],
        ),
      )),
    );
  }
}
