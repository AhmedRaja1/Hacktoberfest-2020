import 'package:flutter/material.dart';
import 'package:swishapp/pages/DetailsOrders.dart';

const List type1 = [
  "ALL ORDERS",
  "PROCESSING",
  "SHIPPED",
];

class Orders extends StatefulWidget {
  @override
  _OrdersState createState() => _OrdersState();
}

class _OrdersState extends State<Orders> {
  int activeMenu1 = 0;

  @override
  Widget build(BuildContext context) {
    double height = MediaQuery.of(context).size.height;
    double width = MediaQuery.of(context).size.width;
    return Scaffold(
      appBar: AppBar(
        centerTitle: true,
        title: Text(
          'Orders',
          style: TextStyle(
            color: Colors.black,
          ),
        ),
        backgroundColor: Colors.white,
        elevation: 20,
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
      body: ListView(children: [
        Column(children: [
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
            children: List.generate(type1.length, (index) {
              return Padding(
                  padding: const EdgeInsets.only(left: 0, right: 0, top: 30),
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
                              fontSize: 15,
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
          Container(
              height: height * 0.08,
              width: width,
              color: Colors.white,
              child: Padding(
                  padding: const EdgeInsets.all(15),
                  child: Text(
                    "MY PURCHASE HISTORY",
                    style: TextStyle(
                        fontSize: 15,
                        color: Colors.grey,
                        fontWeight: FontWeight.w600),
                  ))),
          OrderManagment(
            onPress: () {
              Navigator.push(
                  context,
                  MaterialPageRoute(
                      builder: (context) =>
                          DetailsOrders(ordernumber: "Order#308577549")));
            },
            height: height,
            width: width,
            ordernumber: "Order#308577549",
            item: 2,
            price: 123.00,
          ),
          SizedBox(
            height: height * 0.001,
          ),
          OrderManagment(
              onPress: () {
                Navigator.push(
                    context,
                    MaterialPageRoute(
                        builder: (context) =>
                            DetailsOrders(ordernumber: "Order#308577549")));
              },
              height: height,
              width: width,
              ordernumber: "Order#308577549",
              item: 5,
              price: 250.00)
        ]),
      ]),
    );
  }
}

class OrderManagment extends StatelessWidget {
  const OrderManagment(
      {Key key,
      @required this.height,
      @required this.width,
      @required this.ordernumber,
      @required this.item,
      @required this.price,
      @required this.onPress})
      : super(key: key);

  final double height;
  final double width;
  final String ordernumber;
  final int item;
  final double price;
  final Function onPress;

  @override
  Widget build(BuildContext context) {
    return GestureDetector(
      onTap: onPress,
      child: Container(
          height: height * 0.12,
          width: width,
          color: Colors.white,
          child: Padding(
              padding: const EdgeInsets.all(15),
              child: Column(
                  mainAxisAlignment: MainAxisAlignment.spaceBetween,
                  children: [
                    Row(
                        mainAxisAlignment: MainAxisAlignment.spaceBetween,
                        children: [
                          Text(
                            ordernumber,
                            style: TextStyle(
                                fontSize: 15,
                                color: Colors.black,
                                fontWeight: FontWeight.w600),
                          ),
                          Text(
                            "$item items",
                            style: TextStyle(
                                fontSize: 15,
                                color: Colors.grey,
                                fontWeight: FontWeight.w600),
                          ),
                        ]),
                    Row(
                        mainAxisAlignment: MainAxisAlignment.spaceBetween,
                        children: [
                          Text(
                            "2020-11-20",
                            style: TextStyle(
                                fontSize: 15,
                                color: Colors.grey,
                                fontWeight: FontWeight.w600),
                          ),
                          Text(
                            "$price TND",
                            style: TextStyle(
                                fontSize: 15,
                                color: Colors.black,
                                fontWeight: FontWeight.w600),
                          ),
                        ])
                  ]))),
    );
  }
}
