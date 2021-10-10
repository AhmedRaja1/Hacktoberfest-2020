import 'package:flutter/material.dart';

import 'Checkout2.dart';

enum SingingCharacter { lafayette, jefferson, paypal, paypal1, paypal2 }

class Checkout1 extends StatefulWidget {
  @override
  _Checkout1State createState() => _Checkout1State();
}

class _Checkout1State extends State<Checkout1> {
  SingingCharacter _character = SingingCharacter.lafayette;

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      bottomNavigationBar: BottomAppBar(
        child: new Row(
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
                        MaterialPageRoute(builder: (context) => Checkout2()));
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
      body: Padding(
        padding: const EdgeInsets.all(8.0),
        child: SingleChildScrollView(
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              Text(
                "Cart Details".toUpperCase(),
                style: TextStyle(color: Colors.grey),
              ),
              Container(
                  child: Card(
                elevation: 5,
                child: Column(
                  children: [
                    Pop("https://cdn.shopify.com/s/files/1/0338/1945/9717/products/item_OneHit_PDP_1_2000x.jpg?v=1608658993"),
                    Pop("https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRCyfOZ8J3NklqRnt90NMree1T3ytbT3_zWfU35uQ4Pb2Sj-yQOiuOTZy-Ppq0taDAArus&usqp=CAU"),
                  ],
                ),
              )),
              SizedBox(
                height: 10,
              ),
              Text(
                "Address Details".toUpperCase(),
                style: TextStyle(color: Colors.grey),
              ),
              Container(
                  width: MediaQuery.of(context).size.width / 1,
                  height: MediaQuery.of(context).size.height / 5,
                  child: Card(
                    child: Padding(
                      padding: const EdgeInsets.all(15.0),
                      child: Column(
                        crossAxisAlignment: CrossAxisAlignment.start,
                        mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                        children: [
                          Text("Firstname lastname"),
                          Text("Address"),
                          Text("City, postcode"),
                          Text("Phonenumber"),
                          Text("Country"),
                        ],
                      ),
                    ),
                  )),
              SizedBox(
                height: 10,
              ),
              Text(
                "Select a Delivery method".toUpperCase(),
                style: TextStyle(color: Colors.grey),
              ),
              Card(
                elevation: 5,
                child: Padding(
                  padding: const EdgeInsets.all(8.0),
                  child: ListTile(
                    title: Column(
                      crossAxisAlignment: CrossAxisAlignment.start,
                      children: [
                        Text('Standard Delivery'),
                        Text('Shipping cost: 10TND'),
                        Text(
                            '(Orders placed now are expected to arrive before after 15 days)',
                            style: TextStyle(color: Colors.grey)),
                      ],
                    ),
                    leading: Radio(
                      value: SingingCharacter.lafayette,
                      groupValue: _character,
                      activeColor: Colors.orange,
                      onChanged: (SingingCharacter value) {
                        setState(() {
                          _character = value;
                        });
                      },
                    ),
                  ),
                ),
              ),
              Card(
                elevation: 5,
                color: Colors.white,
                child: Column(
                  children: [
                    ListTile(
                      title: Row(
                        children: [
                          Container(
                              height: 50,
                              child: Image.asset("assets/log/paypal.png")),
                          Text('    Paypal'),
                        ],
                      ),
                      leading: Radio(
                        value: SingingCharacter.paypal2,
                        groupValue: _character,
                        onChanged: (SingingCharacter value) {
                          setState(() {
                            _character = value;
                          });
                        },
                      ),
                    ),
                    Divider(
                      color: Colors.grey,
                    ),
                    ListTile(
                      title: Row(
                        children: [
                          Container(
                              height: 30,
                              child: Image.asset("assets/log/mastercard.png")),
                          Text('    Credit/Debit Card'),
                        ],
                      ),
                      leading: Radio(
                        value: SingingCharacter.paypal1,
                        groupValue: _character,
                        onChanged: (SingingCharacter value) {
                          setState(() {
                            _character = value;
                          });
                        },
                      ),
                    ),
                    Divider(
                      color: Colors.grey,
                    ),
                    ListTile(
                      title: Row(
                        children: [
                          Container(
                              height: 50,
                              child: Image.asset("assets/images/wallet.jpg")),
                          Text('Swish Wallet'),
                        ],
                      ),
                      leading: Radio(
                        value: SingingCharacter.paypal,
                        groupValue: _character,
                        onChanged: (SingingCharacter value) {
                          setState(() {
                            _character = value;
                          });
                        },
                      ),
                    ),
                  ],
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}

class Pop extends StatelessWidget {
  Pop(this.url);

  final String url;

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.all(8.0),
      child: Column(
        children: [
          Row(
            children: [
              Container(
                width: 150,
                height: 100,
                child: ClipRRect(
                  borderRadius: BorderRadius.circular(20),
                  child: Image.network(
                    url,
                    fit: BoxFit.cover,
                  ),
                ),
              ),
              SizedBox(
                width: 10,
              ),
              Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  Row(
                    children: [
                      Text("1x", style: TextStyle(color: Colors.red)),
                      SizedBox(
                        width: 7,
                      ),
                      Text("Product"),
                      SizedBox(
                        width: 7,
                      ),
                      Text("1#")
                    ],
                  ),
                  SizedBox(
                    height: 10,
                  ),
                  Container(
                    width: 100,
                    child: Text("83.00 TND",
                        style: TextStyle(fontWeight: FontWeight.bold)),
                  ),
                ],
              ),
            ],
          ),
          Divider(
            color: Colors.grey,
          )
        ],
      ),
    );
  }
}
