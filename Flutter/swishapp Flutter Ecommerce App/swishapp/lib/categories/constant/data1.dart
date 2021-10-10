import 'package:flutter/material.dart';

List items = [
  {
    "id": 1,
    "name": "APPAREL",
    "code": "SSH081686",
    "img": "assets/images/f_01.jpg",
    "p_promotion_price": "Clothing,Dress,T-shirts..."
  },
  {
    "id": 2,
    "name": "FOOTWEAR",
    "code": "SSH023912",
    "img": "assets/images/f_02.jpg",
    "p_promotion_price": "Shoes,Sneakers...",
  },
  {
    "id": 3,
    "name": "ACCESOIRES",
    "code": "PC985170",
    "img": "assets/images/f_03.jpg",
    "p_promotion_price": "Watch,Jewellery,Glass...",
  },
  {
    "id": 4,
    "name": "BAGS",
    "code": "PC980394",
    "img": "assets/images/f_04.jpg",
    "p_promotion_price": "Backbag,woman's bags...",
  },
  {
    "id": 5,
    "name": "SPORT",
    "code": "PC932721",
    "img": "assets/images/f_05.jpg",
    "p_promotion_price": "Clothing...",
  },
  {
    "id": 6,
    "name": "Fragrance",
    "code": "PC900005",
    "img": "assets/images/f_06.jpg",
    "p_promotion_price": "Makeup,SkinCare,Perfume..."
  }
];

List items2 = [
  {
    "id": 1,
    "name": "APPAREL",
    "code": "SSH081686",
    "img": "assets/gird4/coats.jpg",
    "p_promotion_price": "Clothing,Dress,T-shirts..."
  },
  {
    "id": 2,
    "name": "FOOTWEAR",
    "code": "SSH023912",
    "img": "assets/gird4/shoes.jpg",
    "p_promotion_price": "Shoes,Sneakers...",
  },
  {
    "id": 3,
    "name": "ACCESOIRES",
    "code": "PC985170",
    "img": "assets/gird4/dress.jpg",
    "p_promotion_price": "Watch,Jewellery,Glass...",
  },
  {
    "id": 4,
    "name": "LINGERIE",
    "code": "PC980394",
    "img": "assets/gird4/lingerie.png",
    "p_promotion_price": "Backbag,woman's bags...",
  },
  {
    "id": 5,
    "name": "SPORT",
    "code": "PC932721",
    "img": "assets/gird4/sport.jpg",
    "p_promotion_price": "Clothing...",
  },
  {
    "id": 6,
    "name": "GLASES",
    "code": "PC900005",
    "img": "assets/gird4/glasses.jpg",
    "p_promotion_price": "Makeup,SkinCare,Perfume..."
  }
];

List items3 = [
  {
    "id": 1,
    "name": "APPAREL",
    "code": "SSH081686",
    "img": "assets/gird4/w1.jpg",
    "p_promotion_price": "Clothing,Dress,T-shirts..."
  },
  {
    "id": 2,
    "name": "FOOTWEAR",
    "code": "SSH023912",
    "img": "assets/gird4/w2.jpg",
    "p_promotion_price": "Shoes,Sneakers...",
  },
  {
    "id": 3,
    "name": "ACCESOIRES",
    "code": "PC985170",
    "img": "assets/gird4/w3.jpg",
    "p_promotion_price": "Watch,Jewellery,Glass...",
  },
  {
    "id": 4,
    "name": "JACKET",
    "code": "PC980394",
    "img": "assets/gird4/w4.jpg",
    "p_promotion_price": "Backbag,woman's bags...",
  },
  {
    "id": 5,
    "name": "CASUAL",
    "code": "PC932721",
    "img": "assets/gird4/w5.jpg",
    "p_promotion_price": "Clothing...",
  },
  {
    "id": 6,
    "name": "GLASES",
    "code": "PC900005",
    "img": "assets/gird4/glasses.jpg",
    "p_promotion_price": "Makeup,SkinCare,Perfume..."
  }
];

List items4 = [
  {
    "id": 1,
    "name": "APPAREL",
    "code": "SSH081686",
    "img": "assets/gird4/k1.jpg",
    "p_promotion_price": "Clothing,Dress,T-shirts..."
  },
  {
    "id": 2,
    "name": "FOOTWEAR",
    "code": "SSH023912",
    "img": "assets/gird4/k2.jpg",
    "p_promotion_price": "Shoes,Sneakers...",
  },
  {
    "id": 3,
    "name": "ACCESOIRES",
    "code": "PC985170",
    "img": "assets/gird4/k3.jpg",
    "p_promotion_price": "Watch,Jewellery,Glass...",
  },
  {
    "id": 4,
    "name": "JACKET",
    "code": "PC980394",
    "img": "assets/gird4/k4.jpg",
    "p_promotion_price": "Backbag,woman's bags...",
  },
  {
    "id": 5,
    "name": "CASUAL",
    "code": "PC932721",
    "img": "assets/gird4/k5.jpg",
    "p_promotion_price": "Clothing...",
  },
  {
    "id": 6,
    "name": "GLASES",
    "code": "PC900005",
    "img": "assets/gird4/glasses.jpg",
    "p_promotion_price": "Makeup,SkinCare,Perfume..."
  }
];

List colors = [
  Colors.redAccent,
  Colors.greenAccent,
  Colors.cyanAccent,
  Colors.orangeAccent,
  Colors.purpleAccent,
  Colors.blueAccent
];

class Items extends StatefulWidget {
  @override
  _ItemsGridState createState() => _ItemsGridState();
}

class _ItemsGridState extends State<Items> {
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
