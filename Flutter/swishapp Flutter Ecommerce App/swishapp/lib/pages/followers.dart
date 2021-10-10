import 'package:flutter/material.dart';

class Followers extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    String profilePictureURL =
        "https://storage.needpix.com/rsynced_images/smile-1726471_1280.jpg";

    return Container(
      child: Padding(
        padding: const EdgeInsets.all(15.0),
        child: Column(
          children: [
            Padding(
              padding: const EdgeInsets.all(15),
              child: TextField(
                decoration: InputDecoration(
                  suffixIcon: Icon(
                    Icons.search,
                    color: Colors.black,
                  ),
                  filled: true,
                  fillColor: Colors.grey[200],
                  focusColor: Colors.orange,
                  hintText: "Enter a username to search",
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
            CustomRow(
                name: "Altre Dureg", profilePictureURL: profilePictureURL),
            CustomRow(
                name: "Sarah ben",
                profilePictureURL:
                    "https://mobirise.com/bootstrap-template/profile-template/assets/images/timothy-paul-smith-256424-1200x800.jpg"),
            CustomRow(
                name: "Diana wiliam",
                profilePictureURL:
                    "https://images.unsplash.com/photo-1532074205216-d0e1f4b87368?ixid=MXwxMjA3fDB8MHxzZWFyY2h8MjJ8fHByb2ZpbGV8ZW58MHx8MHw%3D&ixlib=rb-1.2.1&w=1000&q=80"),
            CustomRow(
                name: "Ben Albert",
                profilePictureURL:
                    "https://expertphotography.com/wp-content/uploads/2020/08/social-media-profile-photos-3.jpg"),
            CustomRow(
                name: "Dan ALbert",
                profilePictureURL:
                    "https://miro.medium.com/max/785/0*Ggt-XwliwAO6QURi.jpg"),
            CustomRow(
                name: "Salma Hameed",
                profilePictureURL:
                    "https://statusshayarii.com/wp-content/uploads/2019/09/Best-Whatsapp-DP-Images-Profile-Pics.gif"),
            CustomRow(
                name: "David",
                profilePictureURL:
                    "https://sm.askmen.com/askmen_in/article/f/facebook-p/facebook-profile-picture-affects-chances-of-gettin_gstt.jpg"),
            CustomRow(
                name: "Jane Levingson",
                profilePictureURL:
                    "https://perfectczechwomen.com/wp-content/uploads/2019/04/New-Profile-20-500x536.jpg"),
          ],
        ),
      ),
    );
  }
}

class CustomRow extends StatelessWidget {
  final String profilePictureURL;
  final String name;

  CustomRow({this.name, this.profilePictureURL});

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.only(bottom: 15.0),
      child: Row(
        mainAxisAlignment: MainAxisAlignment.spaceAround,
        children: [
          Container(
            width: 70,
            height: 70,
            child: CircleAvatar(
              backgroundImage: NetworkImage(profilePictureURL),
            ),
          ),
          Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              Text(
                name,
                style: TextStyle(fontWeight: FontWeight.bold),
              ),
              Text(
                "Description bio",
                style: TextStyle(color: Colors.grey[350]),
              ),
            ],
          ),
          SizedBox(
            width: 20,
          ),
          ElevatedButton(
              style: ButtonStyle(
                  backgroundColor:
                      MaterialStateProperty.all<Color>(Colors.red)),
              onPressed: () {},
              child: Text("Follow"))
        ],
      ),
    );
  }
}
