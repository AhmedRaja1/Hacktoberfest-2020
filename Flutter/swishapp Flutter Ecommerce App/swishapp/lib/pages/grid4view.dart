import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:flutter/material.dart';
import 'package:swishapp/componets/home_page.dart';
import 'package:swishapp/pages/products/products.dart';

class Gird4 extends StatefulWidget {
  @override
  _Gird4State createState() => _Gird4State();
}

class _Gird4State extends State<Gird4> {
  final firestoreInstance = FirebaseFirestore.instance;

  List firebasedata = [];

  _onPressed() async {
    await firestoreInstance.collection("Products").get().then((querySnapshot) {
      querySnapshot.docs.forEach((result) {
        firestoreInstance
            .collection("Products")
            .doc(result.id)
            .collection("Home")
            .get()
            .then((querySnapshot) {
          querySnapshot.docs.forEach((result) {
            setState(() {
              firebasedata.add(result.data());
            });
          });
        });
      });
    });
  }

  @override
  void initState() {
    super.initState();
    _onPressed();
  }

  Product home;
  @override
  Widget build(BuildContext context) {
    return Container(
        padding: EdgeInsets.fromLTRB(8, 0, 8, 0),
        height: 320.0,
        child: GridView.builder(
          gridDelegate: SliverGridDelegateWithMaxCrossAxisExtent(
              maxCrossAxisExtent: 100,
              childAspectRatio: 1.6 / 2,
              crossAxisSpacing: 10,
              mainAxisSpacing: 10),
          itemCount: firebasedata.length,
          itemBuilder: (BuildContext ctx, index) {
            return Gridelement(
                firebasedata[index]['image'], firebasedata[index]['name']);
          },
        ));
  }
}

class Gridelement extends StatelessWidget {
  final String image;
  final String title;

  Gridelement(this.image, this.title);
  @override
  Widget build(BuildContext context) {
    return Container(
      child: Card(
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: <Widget>[
            Expanded(
              child: Container(
                width: double.infinity,
                child: Image.network(
                  image,
                  fit: BoxFit.fitWidth,
                ),
              ),
            ),
            Padding(
              padding: const EdgeInsets.symmetric(vertical: 5),
              child: Text(title),
            ),
          ],
        ),
      ),
    );
  }
}

class WomenGrid extends StatefulWidget {
  @override
  _WomenGridState createState() => _WomenGridState();
}

class _WomenGridState extends State<WomenGrid> {
  final firestoreInstance = FirebaseFirestore.instance;

  List firebaseWomendata = [];

  _onPressed() async {
    await firestoreInstance.collection("Products").get().then((querySnapshot) {
      querySnapshot.docs.forEach((result) {
        firestoreInstance
            .collection("Products")
            .doc(result.id)
            .collection("Women")
            .get()
            .then((querySnapshot) {
          querySnapshot.docs.forEach((result) {
            setState(() {
              firebaseWomendata.add(result.data());
            });
          });
        });
      });
    });
  }

  @override
  void initState() {
    super.initState();
    _onPressed();
  }

  @override
  Widget build(BuildContext context) {
    return Container(
        padding: EdgeInsets.fromLTRB(8, 0, 8, 0),
        height: 320.0,
        child: GridView.builder(
          gridDelegate: SliverGridDelegateWithMaxCrossAxisExtent(
              maxCrossAxisExtent: 100,
              childAspectRatio: 1.6 / 2,
              crossAxisSpacing: 10,
              mainAxisSpacing: 10),
          itemCount: firebaseWomendata.length,
          itemBuilder: (BuildContext ctx, index) {
            return Gridelement(firebaseWomendata[index]['image'],
                firebaseWomendata[index]['name']);
          },
        ));
  }
}

class MenGrid extends StatefulWidget {
  @override
  _MenGridState createState() => _MenGridState();
}

class _MenGridState extends State<MenGrid> {
  final firestoreInstance = FirebaseFirestore.instance;

  List firebasemendata = [];

  _onPressed() async {
    await firestoreInstance.collection("Products").get().then((querySnapshot) {
      querySnapshot.docs.forEach((result) {
        firestoreInstance
            .collection("Products")
            .doc(result.id)
            .collection("Men")
            .get()
            .then((querySnapshot) {
          querySnapshot.docs.forEach((result) {
            setState(() {
              firebasemendata.add(result.data());
            });
          });
        });
      });
    });
  }

  @override
  void initState() {
    super.initState();
    _onPressed();
  }

  @override
  Widget build(BuildContext context) {
    return Container(
        padding: EdgeInsets.fromLTRB(8, 0, 8, 0),
        height: 320.0,
        child: GridView.builder(
          gridDelegate: SliverGridDelegateWithMaxCrossAxisExtent(
              maxCrossAxisExtent: 100,
              childAspectRatio: 1.6 / 2,
              crossAxisSpacing: 10,
              mainAxisSpacing: 10),
          itemCount: firebasemendata.length,
          itemBuilder: (BuildContext ctx, index) {
            return Gridelement(firebasemendata[index]['image'],
                firebasemendata[index]['name']);
          },
        ));
  }
}

class KidsGrid extends StatefulWidget {
  @override
  _KidsGridState createState() => _KidsGridState();
}

class _KidsGridState extends State<KidsGrid> {
  final firestoreInstance = FirebaseFirestore.instance;

  List firebasekidsdata = [];

  _onPressed() async {
    await firestoreInstance.collection("Products").get().then((querySnapshot) {
      querySnapshot.docs.forEach((result) {
        firestoreInstance
            .collection("Products")
            .doc(result.id)
            .collection("kids")
            .get()
            .then((querySnapshot) {
          querySnapshot.docs.forEach((result) {
            setState(() {
              firebasekidsdata.add(result.data());
            });
          });
        });
      });
    });
  }

  @override
  void initState() {
    super.initState();
    _onPressed();
  }

  @override
  Widget build(BuildContext context) {
    return Container(
        padding: EdgeInsets.fromLTRB(8, 0, 8, 0),
        height: 320.0,
        child: GridView.builder(
          gridDelegate: SliverGridDelegateWithMaxCrossAxisExtent(
              maxCrossAxisExtent: 100,
              childAspectRatio: 1.6 / 2,
              crossAxisSpacing: 10,
              mainAxisSpacing: 10),
          itemCount: firebasekidsdata.length,
          itemBuilder: (BuildContext ctx, index) {
            return Gridelement(firebasekidsdata[index]['image'],
                firebasekidsdata[index]['name']);
          },
        ));
  }
}
