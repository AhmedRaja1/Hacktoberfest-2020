import 'package:flutter/material.dart';
import 'package:flutter_vector_icons/flutter_vector_icons.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';

const List type1 = [
  "My Wallet",
  "Payment History",
  "Income history",
  "Recharge",
];

class Wallet extends StatefulWidget {
  @override
  _WalletState createState() => _WalletState();
}

class _WalletState extends State<Wallet> {
  int activeMenu1 = 0;

  @override
  Widget build(BuildContext context) {
    double height = MediaQuery.of(context).size.height;
    double width = MediaQuery.of(context).size.width;
    return Scaffold(
      backgroundColor: Colors.white,
      appBar: AppBar(
        centerTitle: true,
        title: Text(
          'My Wallet',
          style: TextStyle(
            color: Colors.black,
          ),
        ),
        backgroundColor: Colors.white,
        elevation: 2,
        leading: IconButton(
          icon: Icon(
            Icons.arrow_back_ios,
            color: Colors.black,
          ),
          onPressed: () {
            Navigator.pop(context);
          },
        ),
      ),
      body: SingleChildScrollView(
        child: Column(children: [
          SingleChildScrollView(
            scrollDirection: Axis.horizontal,
            child: Row(
              mainAxisAlignment: MainAxisAlignment.spaceBetween,
              children: List.generate(type1.length, (index) {
                return Padding(
                    padding: const EdgeInsets.only(left: 7, right: 7, top: 30),
                    child: GestureDetector(
                      onTap: () {
                        setState(() {
                          activeMenu1 = index;
                        });
                      },
                      child: Column(
                        mainAxisAlignment: MainAxisAlignment.spaceBetween,
                        children: [
                          Text(
                            type1[index],
                            style: TextStyle(
                                fontSize: 13,
                                color: activeMenu1 == index
                                    ? Colors.red
                                    : Colors.grey,
                                fontWeight: FontWeight.w600),
                          ),
                          activeMenu1 == index
                              ? Container(
                                  width: 70,
                                  height: 3,
                                  decoration: BoxDecoration(
                                      color: Colors.red,
                                      borderRadius: BorderRadius.circular(5)),
                                )
                              : Container(),
                          SizedBox(
                            height: 20,
                          ),
                        ],
                      ),
                    ));
              }),
            ),
          ),
          if (activeMenu1 == 0)
            MyWalletoption(height: height, width: width)
          else if (activeMenu1 == 1)
            MyPaymentHistoryOption()
          else if (activeMenu1 == 2)
            IncomeHistoryOption()
          else if (activeMenu1 == 3)
            RechargeOption1()
          else
            MyWalletoption(height: height, width: width)
        ]),
      ),
    );
  }
}

class RechargeOption1by5 extends StatefulWidget {
  const RechargeOption1by5({
    Key key,
  }) : super(key: key);

  @override
  _RechargeOption1by5State createState() => _RechargeOption1by5State();
}

class _RechargeOption1by5State extends State<RechargeOption1by5> {
  @override
  Widget build(BuildContext context) {
    return Column(
      children: [
        Padding(
          padding: const EdgeInsets.all(8.0),
          child: Container(
            height: MediaQuery.of(context).size.height / 6.5,
            width: MediaQuery.of(context).size.width,
            child: Card(
              shape: RoundedRectangleBorder(
                side: BorderSide(color: Colors.grey),
              ),
              elevation: 10,
              child: Padding(
                padding: const EdgeInsets.all(20.0),
                child: Column(
                  mainAxisAlignment: MainAxisAlignment.start,
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Row(
                      mainAxisAlignment: MainAxisAlignment.spaceBetween,
                      children: [
                        Text(
                          "Order # 30855453217",
                          style: TextStyle(fontSize: 18),
                        ),
                        Text(
                          "2 items",
                          style: TextStyle(color: Colors.grey),
                        )
                      ],
                    ),
                    Padding(
                      padding: const EdgeInsets.only(top: 15.0),
                      child: Row(
                        mainAxisAlignment: MainAxisAlignment.spaceBetween,
                        children: [
                          Text(
                            "2020-12-20",
                            style: TextStyle(color: Colors.grey, fontSize: 16),
                          ),
                          Text(
                            "\$123",
                          ),
                        ],
                      ),
                    )
                  ],
                ),
              ),
            ),
          ),
        ),
        Padding(
          padding: const EdgeInsets.all(10.0),
          child: Container(
            height: MediaQuery.of(context).size.height / 3.3,
            width: MediaQuery.of(context).size.width,
            child: Card(
              shape: RoundedRectangleBorder(
                side: BorderSide(color: Colors.grey),
              ),
              elevation: 10,
              child: Padding(
                padding: const EdgeInsets.all(15.0),
                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Row(
                      mainAxisAlignment: MainAxisAlignment.spaceBetween,
                      children: [
                        Text("Payment"),
                        Text("Swish Wallet",
                            style: TextStyle(
                                color: Color(0xFF7A7A7A),
                                fontWeight: FontWeight.bold)),
                        Icon(Icons.keyboard_arrow_down)
                      ],
                    ),
                    Divider(
                      color: Colors.grey,
                    ),
                    SizedBox(height: 20),
                    Row(
                      mainAxisAlignment: MainAxisAlignment.spaceBetween,
                      children: [Text("Subtotal:"), Text("\$133.00")],
                    ),
                    SizedBox(height: 20),
                    Row(
                      mainAxisAlignment: MainAxisAlignment.spaceBetween,
                      children: [
                        Text("Discount:"),
                        Text(
                          "\$10.00",
                          style: TextStyle(color: Colors.red),
                        )
                      ],
                    ),
                    SizedBox(height: 40),
                    Row(
                      mainAxisAlignment: MainAxisAlignment.spaceBetween,
                      children: [
                        Text(
                          "TOTAL:",
                          style: TextStyle(fontSize: 22),
                        ),
                        Text(
                          "\$123.00",
                          style: TextStyle(fontSize: 22),
                        )
                      ],
                    )
                  ],
                ),
              ),
            ),
          ),
        ),
        Padding(
          padding: const EdgeInsets.all(8.0),
          child: Container(
            height: MediaQuery.of(context).size.height / 6.5,
            width: MediaQuery.of(context).size.width,
            child: Card(
              shape: RoundedRectangleBorder(
                side: BorderSide(color: Colors.grey),
              ),
              elevation: 10,
              child: Padding(
                padding: const EdgeInsets.all(20.0),
                child: Column(
                  mainAxisAlignment: MainAxisAlignment.start,
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Row(
                      mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                      children: [
                        Image.asset("assets/log/gem6.PNG"),
                        Column(
                          crossAxisAlignment: CrossAxisAlignment.start,
                          children: [
                            Text(
                              "100 Diamonds",
                              style: TextStyle(fontSize: 18),
                            ),
                            SizedBox(
                              height: 10,
                            ),
                            Text(
                              "\$123.00",
                            ),
                          ],
                        ),
                      ],
                    ),
                  ],
                ),
              ),
            ),
          ),
        ),
      ],
    );
  }
}

class RechargeOption1 extends StatefulWidget {
  @override
  _RechargeOption1State createState() => _RechargeOption1State();
}

class _RechargeOption1State extends State<RechargeOption1> {
  bool clicked = false;
  bool clicked2 = false;
  @override
  Widget build(BuildContext context) {
    return clicked
        ? Padding(
            padding: const EdgeInsets.all(15.0),
            child: Container(
              height: MediaQuery.of(context).size.height / 1.7,
              width: MediaQuery.of(context).size.width,
              child: Card(
                elevation: 10,
                child: Padding(
                  padding: const EdgeInsets.all(20.0),
                  child: Column(
                    crossAxisAlignment: CrossAxisAlignment.center,
                    children: [
                      Text(
                        "Details of payement",
                        style: TextStyle(
                            fontWeight: FontWeight.w500, fontSize: 18),
                      ),
                      SizedBox(
                        height: 10,
                      ),
                      Row(
                        mainAxisAlignment: MainAxisAlignment.center,
                        children: [
                          Container(
                              height: 25,
                              child: Image.asset("assets/log/mastercard.png")),
                          SizedBox(
                            width: 10,
                          ),
                          Container(
                              height: 25,
                              child: Image.asset("assets/log/visa.png")),
                        ],
                      ),
                      Padding(
                        padding: const EdgeInsets.only(top: 35.0),
                        child: TextField(
                          decoration: InputDecoration(
                            focusColor: Colors.blue,
                            hintText: "Email",
                            contentPadding: EdgeInsets.fromLTRB(10, 0, 0, 0),
                            focusedBorder: OutlineInputBorder(
                                borderRadius: BorderRadius.circular(5),
                                borderSide: BorderSide(color: Colors.grey)),
                            disabledBorder: OutlineInputBorder(
                                borderRadius: BorderRadius.circular(5),
                                borderSide: BorderSide(color: Colors.grey)),
                            enabledBorder: OutlineInputBorder(
                                borderRadius: BorderRadius.circular(5),
                                borderSide: BorderSide(color: Colors.grey)),
                          ),
                        ),
                      ),
                      Row(
                        children: [
                          Expanded(
                            child: Padding(
                              padding: const EdgeInsets.only(top: 35.0),
                              child: TextField(
                                decoration: InputDecoration(
                                  focusColor: Colors.blue,
                                  hintText: "Expiration Date",
                                  contentPadding:
                                      EdgeInsets.fromLTRB(10, 0, 0, 0),
                                  focusedBorder: OutlineInputBorder(
                                      borderRadius: BorderRadius.circular(5),
                                      borderSide:
                                          BorderSide(color: Colors.grey)),
                                  disabledBorder: OutlineInputBorder(
                                      borderRadius: BorderRadius.circular(5),
                                      borderSide:
                                          BorderSide(color: Colors.grey)),
                                  enabledBorder: OutlineInputBorder(
                                      borderRadius: BorderRadius.circular(5),
                                      borderSide:
                                          BorderSide(color: Colors.grey)),
                                ),
                              ),
                            ),
                          ),
                          SizedBox(
                            width: 10,
                          ),
                          Expanded(
                            child: Padding(
                              padding: const EdgeInsets.only(top: 35.0),
                              child: TextField(
                                decoration: InputDecoration(
                                  focusColor: Colors.blue,
                                  hintText: "CVV",
                                  contentPadding:
                                      EdgeInsets.fromLTRB(10, 0, 0, 0),
                                  focusedBorder: OutlineInputBorder(
                                      borderRadius: BorderRadius.circular(5),
                                      borderSide:
                                          BorderSide(color: Colors.grey)),
                                  disabledBorder: OutlineInputBorder(
                                      borderRadius: BorderRadius.circular(5),
                                      borderSide:
                                          BorderSide(color: Colors.grey)),
                                  enabledBorder: OutlineInputBorder(
                                      borderRadius: BorderRadius.circular(5),
                                      borderSide:
                                          BorderSide(color: Colors.grey)),
                                ),
                              ),
                            ),
                          )
                        ],
                      ),
                      SizedBox(
                        height: 20,
                      ),
                      CustomBtn("Validate", Color(0xFFFF5D55), () {
                        setState(() {
                          clicked = false;
                          clicked2 = true;
                        });
                      }),
                      CustomBtn("Modify Order", Color(0xFFE61610), () {
                        setState(() {
                          clicked = false;
                          clicked2 = true;
                        });
                      })
                    ],
                  ),
                ),
              ),
            ),
          )
        : clicked2
            ? RechargeOption1by5()
            : Padding(
                padding: const EdgeInsets.all(20.0),
                child: Container(
                  height: MediaQuery.of(context).size.height / 1.4,
                  width: MediaQuery.of(context).size.width,
                  child: Card(
                    elevation: 10,
                    child: Padding(
                      padding: const EdgeInsets.all(15.0),
                      child: Column(
                          crossAxisAlignment: CrossAxisAlignment.start,
                          children: [
                            Row(
                              mainAxisAlignment: MainAxisAlignment.center,
                              children: [
                                Text("You have",
                                    style: TextStyle(fontSize: 20)),
                                Image.asset("assets/log/gem1.PNG"),
                                Text(" 0 Diamonds",
                                    style: TextStyle(fontSize: 20))
                              ],
                            ),
                            SizedBox(
                              height: 20,
                            ),
                            Text("Use Diamonds to support streamers"),
                            Divider(color: Colors.grey),
                            Row(
                              mainAxisAlignment: MainAxisAlignment.spaceBetween,
                              children: [
                                Column(
                                  crossAxisAlignment: CrossAxisAlignment.start,
                                  children: [
                                    Text("100 diamonds",
                                        style: TextStyle(
                                            fontWeight: FontWeight.bold)),
                                    Image.asset("assets/log/gem2.PNG"),
                                  ],
                                ),
                                ElevatedButton(
                                    style: ButtonStyle(
                                        backgroundColor:
                                            MaterialStateProperty.all<Color>(
                                                Color(0xFFFF5D55))),
                                    onPressed: () {
                                      setState(() {
                                        clicked = true;
                                      });
                                    },
                                    child: Text("\$1.40"))
                              ],
                            ),
                            Divider(color: Colors.grey),
                            Row(
                              mainAxisAlignment: MainAxisAlignment.spaceBetween,
                              children: [
                                Column(
                                  crossAxisAlignment: CrossAxisAlignment.start,
                                  children: [
                                    Text("300 diamonds",
                                        style: TextStyle(
                                            fontWeight: FontWeight.bold)),
                                    Image.asset("assets/log/gem2.PNG"),
                                  ],
                                ),
                                ElevatedButton(
                                    style: ButtonStyle(
                                        backgroundColor:
                                            MaterialStateProperty.all<Color>(
                                                Color(0xFFFF5D55))),
                                    onPressed: () {
                                      setState(() {
                                        clicked = true;
                                      });
                                    },
                                    child: Text("\$3.00"))
                              ],
                            ),
                            Divider(color: Colors.grey),
                            Row(
                              mainAxisAlignment: MainAxisAlignment.spaceBetween,
                              children: [
                                Column(
                                  crossAxisAlignment: CrossAxisAlignment.start,
                                  children: [
                                    Text("500 diamonds",
                                        style: TextStyle(
                                            fontWeight: FontWeight.bold)),
                                    Image.asset("assets/log/gem2.PNG"),
                                  ],
                                ),
                                ElevatedButton(
                                    style: ButtonStyle(
                                        backgroundColor:
                                            MaterialStateProperty.all<Color>(
                                                Color(0xFFFF5D55))),
                                    onPressed: () {
                                      setState(() {
                                        clicked = true;
                                      });
                                    },
                                    child: Text("\$7.00"))
                              ],
                            ),
                            Divider(color: Colors.grey),
                            Row(
                              mainAxisAlignment: MainAxisAlignment.spaceBetween,
                              children: [
                                Column(
                                  crossAxisAlignment: CrossAxisAlignment.start,
                                  children: [
                                    Text("1500 diamonds",
                                        style: TextStyle(
                                            fontWeight: FontWeight.bold)),
                                    Image.asset("assets/log/gem3.PNG"),
                                  ],
                                ),
                                ElevatedButton(
                                    style: ButtonStyle(
                                        backgroundColor:
                                            MaterialStateProperty.all<Color>(
                                                Color(0xFFFF5D55))),
                                    onPressed: () {
                                      setState(() {
                                        clicked = true;
                                      });
                                    },
                                    child: Text("\$19.95"))
                              ],
                            ),
                            Divider(color: Colors.grey),
                            Row(
                              mainAxisAlignment: MainAxisAlignment.spaceBetween,
                              children: [
                                Column(
                                  crossAxisAlignment: CrossAxisAlignment.start,
                                  children: [
                                    Text("5000 diamonds",
                                        style: TextStyle(
                                            fontWeight: FontWeight.bold)),
                                    Image.asset("assets/log/gem4.PNG"),
                                  ],
                                ),
                                ElevatedButton(
                                    style: ButtonStyle(
                                        backgroundColor:
                                            MaterialStateProperty.all<Color>(
                                                Color(0xFFFF5D55))),
                                    onPressed: () {
                                      setState(() {
                                        clicked = true;
                                      });
                                    },
                                    child: Text("\$64.40"))
                              ],
                            ),
                            Divider(color: Colors.grey),
                            Row(
                              mainAxisAlignment: MainAxisAlignment.spaceBetween,
                              children: [
                                Column(
                                  crossAxisAlignment: CrossAxisAlignment.start,
                                  children: [
                                    Text("10000 diamonds",
                                        style: TextStyle(
                                            fontWeight: FontWeight.bold)),
                                    Image.asset("assets/log/gem5.PNG"),
                                  ],
                                ),
                                ElevatedButton(
                                    style: ButtonStyle(
                                        backgroundColor:
                                            MaterialStateProperty.all<Color>(
                                                Color(0xFFFF5D55))),
                                    onPressed: () {
                                      setState(() {
                                        clicked = true;
                                      });
                                    },
                                    child: Text("\$120.00"))
                              ],
                            )
                          ]),
                    ),
                  ),
                ),
              );
  }
}

class IncomeHistoryOption extends StatelessWidget {
  const IncomeHistoryOption({
    Key key,
  }) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.all(15.0),
      child: Container(
          height: MediaQuery.of(context).size.height / 1.35,
          width: MediaQuery.of(context).size.width,
          child: Card(
            elevation: 10,
            child: Padding(
              padding: const EdgeInsets.all(20.0),
              child: Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  Row(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
                    children: [
                      Text("Live Gift",
                          style: TextStyle(fontWeight: FontWeight.bold)),
                      Icon(Icons.keyboard_arrow_down)
                    ],
                  ),
                  Divider(
                    thickness: 2,
                    color: Colors.grey,
                  ),
                  Row(
                    mainAxisAlignment: MainAxisAlignment.start,
                    children: [
                      customverticaldivider(),
                      Column(
                        crossAxisAlignment: CrossAxisAlignment.start,
                        children: [
                          Text(
                            "   05/01/2020 at 10:37:52",
                            style: TextStyle(color: Colors.grey, fontSize: 10),
                          ),
                          SizedBox(height: 10),
                          Row(
                            children: [
                              Text(
                                "  200 diamonds",
                                style: TextStyle(fontWeight: FontWeight.bold),
                              ),
                              Text(
                                "   \$50.00",
                                style: TextStyle(color: Colors.red),
                              ),
                            ],
                          ),
                        ],
                      )
                    ],
                  ),
                  Row(
                    mainAxisAlignment: MainAxisAlignment.center,
                    children: [
                      SizedBox(
                        width: 250,
                        child: Divider(
                          color: Colors.grey,
                        ),
                      ),
                    ],
                  ),
                  Row(
                    mainAxisAlignment: MainAxisAlignment.start,
                    children: [
                      customverticaldivider2(),
                      Column(
                        crossAxisAlignment: CrossAxisAlignment.start,
                        children: [
                          Text(
                            "   27/11/2020 at 10:37:52",
                            style: TextStyle(color: Colors.grey, fontSize: 10),
                          ),
                          SizedBox(height: 10),
                          Row(
                            children: [
                              Text(
                                "  2300 diamonds",
                                style: TextStyle(fontWeight: FontWeight.bold),
                              ),
                              Text(
                                "   \$250.00",
                                style: TextStyle(color: Colors.red),
                              ),
                            ],
                          ),
                        ],
                      )
                    ],
                  ),
                  Row(
                    mainAxisAlignment: MainAxisAlignment.center,
                    children: [
                      SizedBox(
                        width: 250,
                        child: Divider(
                          color: Colors.grey,
                        ),
                      ),
                    ],
                  ),
                  Row(
                    mainAxisAlignment: MainAxisAlignment.start,
                    children: [
                      customverticaldivider2(),
                      Column(
                        crossAxisAlignment: CrossAxisAlignment.start,
                        children: [
                          Text(
                            "   25/10/2020 at 10:37:52",
                            style: TextStyle(color: Colors.grey, fontSize: 10),
                          ),
                          SizedBox(height: 10),
                          Row(
                            children: [
                              Text(
                                "  12 diamonds",
                                style: TextStyle(fontWeight: FontWeight.bold),
                              ),
                              Text(
                                "   \$64.00",
                                style: TextStyle(color: Colors.red),
                              ),
                            ],
                          ),
                        ],
                      )
                    ],
                  ),
                  Row(
                    mainAxisAlignment: MainAxisAlignment.center,
                    children: [
                      SizedBox(
                        width: 250,
                        child: Divider(
                          color: Colors.grey,
                        ),
                      ),
                    ],
                  ),
                  SizedBox(height: 20),
                  Row(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
                    children: [
                      Text("Recharge",
                          style: TextStyle(fontWeight: FontWeight.bold)),
                      Icon(Icons.keyboard_arrow_right)
                    ],
                  ),
                  Divider(
                    thickness: 2,
                    color: Colors.grey,
                  ),
                ],
              ),
            ),
          )),
    );
  }
}

class MyPaymentHistoryOption extends StatelessWidget {
  const MyPaymentHistoryOption({
    Key key,
  }) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Column(
      children: [
        Padding(
          padding: const EdgeInsets.all(8.0),
          child: Container(
            height: MediaQuery.of(context).size.height / 6.5,
            width: MediaQuery.of(context).size.width,
            child: Card(
              elevation: 10,
              child: Padding(
                padding: const EdgeInsets.all(20.0),
                child: Column(
                  mainAxisAlignment: MainAxisAlignment.start,
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Row(
                      mainAxisAlignment: MainAxisAlignment.spaceBetween,
                      children: [
                        Text(
                          "Order # 30855453217",
                          style: TextStyle(fontSize: 18),
                        ),
                        Text(
                          "2 items",
                          style: TextStyle(color: Colors.grey),
                        )
                      ],
                    ),
                    Padding(
                      padding: const EdgeInsets.only(top: 15.0),
                      child: Row(
                        mainAxisAlignment: MainAxisAlignment.spaceBetween,
                        children: [
                          Text(
                            "2020-12-20",
                            style: TextStyle(color: Colors.grey, fontSize: 16),
                          ),
                          Text(
                            "\$123",
                          ),
                        ],
                      ),
                    )
                  ],
                ),
              ),
            ),
          ),
        ),
        Padding(
          padding: const EdgeInsets.all(8.0),
          child: Container(
            height: MediaQuery.of(context).size.height / 6.5,
            width: MediaQuery.of(context).size.width,
            child: Card(
              elevation: 10,
              child: Padding(
                padding: const EdgeInsets.all(20.0),
                child: Column(
                  mainAxisAlignment: MainAxisAlignment.start,
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Row(
                      mainAxisAlignment: MainAxisAlignment.spaceBetween,
                      children: [
                        Text(
                          "Order # 30855453217",
                          style: TextStyle(fontSize: 18),
                        ),
                        Text(
                          "100 diamonds",
                          style: TextStyle(color: Colors.grey),
                        )
                      ],
                    ),
                    Padding(
                      padding: const EdgeInsets.only(top: 15.0),
                      child: Row(
                        mainAxisAlignment: MainAxisAlignment.spaceBetween,
                        children: [
                          Text(
                            "2020-12-20",
                            style: TextStyle(color: Colors.grey, fontSize: 16),
                          ),
                          Text(
                            "\$123",
                          ),
                        ],
                      ),
                    )
                  ],
                ),
              ),
            ),
          ),
        ),
        Padding(
          padding: const EdgeInsets.all(8.0),
          child: Container(
            height: MediaQuery.of(context).size.height / 6.5,
            width: MediaQuery.of(context).size.width,
            child: Card(
              elevation: 10,
              child: Padding(
                padding: const EdgeInsets.all(20.0),
                child: Column(
                  mainAxisAlignment: MainAxisAlignment.start,
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Row(
                      mainAxisAlignment: MainAxisAlignment.spaceBetween,
                      children: [
                        Text(
                          "Order # 30855453217",
                          style: TextStyle(fontSize: 18),
                        ),
                        Text(
                          "100 diamonds",
                          style: TextStyle(color: Colors.grey),
                        )
                      ],
                    ),
                    Padding(
                      padding: const EdgeInsets.only(top: 15.0),
                      child: Row(
                        mainAxisAlignment: MainAxisAlignment.spaceBetween,
                        children: [
                          Text(
                            "2020-12-20",
                            style: TextStyle(color: Colors.grey, fontSize: 16),
                          ),
                          Text(
                            "\$123",
                          ),
                        ],
                      ),
                    )
                  ],
                ),
              ),
            ),
          ),
        ),
      ],
    );
  }
}

class MyWalletoption extends StatelessWidget {
  const MyWalletoption({
    Key key,
    @required this.height,
    @required this.width,
  }) : super(key: key);

  final double height;
  final double width;

  @override
  Widget build(BuildContext context) {
    return Column(
      children: [
        Container(
          height: height * 0.2,
          width: width * 0.45,
          padding: EdgeInsets.all(
            20.0,
          ),
          decoration: BoxDecoration(
              borderRadius: BorderRadius.circular(12.0),
              image: DecorationImage(
                  image: AssetImage("assets/images/wallet.jpg"),
                  fit: BoxFit.cover)),
        ),
        Container(
            height: MediaQuery.of(context).size.height / 2.5,
            width: MediaQuery.of(context).size.width,
            child: Card(
              color: Colors.white,
              shape: RoundedRectangleBorder(
                side: BorderSide(color: Colors.grey, width: 1),
              ),
              child: Padding(
                padding: const EdgeInsets.all(15.0),
                child: Column(
                  children: [
                    Text(
                      "Your Swish wallet is the single place to manage.Your Swish gift card balance. Pay the amount\nassociated with any Swish gift card to your balance to make shopping quick and easy.Swish gift card balances can be used to purchase:",
                      style: TextStyle(
                        fontSize: 15,
                        color: Colors.black,
                      ),
                    ),
                    Padding(
                      padding: const EdgeInsets.only(top: 15.0),
                      child: Row(
                        mainAxisAlignment: MainAxisAlignment.start,
                        children: [
                          Icon(Icons.star, color: Colors.red),
                          Text(
                            " Subscriptions",
                            style: TextStyle(
                                fontSize: 15,
                                color: Colors.black,
                                fontWeight: FontWeight.w800),
                          ),
                          Text(
                            " -for exclusive badges and emoticons",
                            style: TextStyle(
                              fontSize: 12,
                              color: Colors.black,
                            ),
                          ),
                        ],
                      ),
                    ),
                    Padding(
                        padding: const EdgeInsets.only(top: 15),
                        child: Row(
                          mainAxisAlignment: MainAxisAlignment.start,
                          children: [
                            Icon(Icons.wallet_giftcard_sharp,
                                color: Colors.red),
                            Text(
                              " Gift subscriptions",
                              style: TextStyle(
                                  fontSize: 15,
                                  color: Colors.black,
                                  fontWeight: FontWeight.w800),
                            ),
                            Text(
                              "  -for your followers",
                              style: TextStyle(
                                fontSize: 12,
                                color: Colors.black,
                              ),
                            ),
                          ],
                        )),
                    Padding(
                        padding: const EdgeInsets.only(top: 15),
                        child: Row(
                          mainAxisAlignment: MainAxisAlignment.start,
                          children: [
                            Icon(
                              FontAwesomeIcons.gem,
                              size: 20,
                              color: Colors.red,
                            ),
                            Text(
                              "   Diamonds",
                              style: TextStyle(
                                  fontSize: 15,
                                  color: Colors.black,
                                  fontWeight: FontWeight.w800),
                            ),
                            Text(
                              "  -to interact with your favorite streamers",
                              style: TextStyle(
                                fontSize: 12,
                                color: Colors.black,
                              ),
                            ),
                          ],
                        ))
                  ],
                ),
              ),
            )),
        Container(
          height: MediaQuery.of(context).size.height / 3,
          width: MediaQuery.of(context).size.width,
          child: Card(
            color: Colors.white,
            shape: RoundedRectangleBorder(
              side: BorderSide(color: Colors.grey, width: 1),
            ),
            child: Padding(
              padding: const EdgeInsets.all(20.0),
              child: Column(
                children: [
                  Row(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
                    children: [
                      Padding(
                        padding:
                            const EdgeInsets.only(left: 15, right: 15, top: 5),
                        child: Text(
                          "Balance",
                          style: TextStyle(
                              fontSize: 15,
                              color: Colors.red,
                              fontWeight: FontWeight.w800),
                        ),
                      ),
                      Padding(
                        padding:
                            const EdgeInsets.only(left: 15, right: 15, top: 5),
                        child: GestureDetector(
                          onTap: () {},
                          child: Text(
                            "More Details",
                            style: TextStyle(
                                fontSize: 15,
                                color: Colors.orange,
                                fontWeight: FontWeight.w800),
                          ),
                        ),
                      )
                    ],
                  ),
                  SizedBox(
                    child: Divider(color: Colors.grey),
                  ),
                  Row(
                    mainAxisAlignment: MainAxisAlignment.start,
                    children: [
                      Text(
                        "Your Balance: 0£",
                        style: TextStyle(
                            fontSize: 20,
                            color: Colors.black,
                            fontWeight: FontWeight.w800),
                      ),
                    ],
                  ),
                  Padding(
                    padding: const EdgeInsets.only(top: 15.0),
                    child: Row(
                      mainAxisAlignment: MainAxisAlignment.spaceBetween,
                      children: [
                        Column(
                          children: [
                            Text(
                              "Diamond of the day",
                              style: TextStyle(
                                fontSize: 15,
                                color: Colors.black,
                              ),
                            ),
                            Text(
                              "0",
                              style: TextStyle(
                                  fontSize: 20,
                                  color: Colors.black,
                                  fontWeight: FontWeight.w800),
                            ),
                          ],
                        ),
                        Column(
                          children: [
                            Text(
                              "Total of diamonds",
                              style: TextStyle(
                                fontSize: 15,
                                color: Colors.black,
                              ),
                            ),
                            Text(
                              "0",
                              style: TextStyle(
                                  fontSize: 20,
                                  color: Colors.black,
                                  fontWeight: FontWeight.w800),
                            ),
                          ],
                        ),
                      ],
                    ),
                  ),
                  Padding(
                    padding: const EdgeInsets.only(top: 3.0),
                    child: CustomBtn("Withdraw", Color(0xFFFF6624), () {}),
                  )
                ],
              ),
            ),
          ),
        )
      ],
    );
  }
}

class CustomBtn extends StatelessWidget {
  CustomBtn(this.text, this.color, this.function);

  final Color color;
  final Function function;
  final String text;

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.symmetric(vertical: 5.0),
      child: Material(
        child: MaterialButton(
          onPressed: function,
          minWidth: 280,
          height: 50.0,
          child: Text(
            text,
            style: TextStyle(
                color: Colors.white, fontSize: 20, fontWeight: FontWeight.bold),
          ),
          color: color,
          elevation: 5.0,
        ),
      ),
    );
  }
}

Widget customverticaldivider() {
  return Column(
    children: [
      Container(
        width: 2,
        height: 50,
        color: Colors.grey[350],
      ),
      Icon(
        FontAwesome.circle,
        color: Colors.grey[350],
        size: 10,
      )
    ],
  );
}

Widget customverticaldivider2() {
  return Column(
    children: [
      Container(
        width: 2,
        height: 100,
        color: Colors.grey[350],
      ),
      Icon(
        FontAwesome.circle,
        color: Colors.grey[350],
        size: 10,
      )
    ],
  );
}
