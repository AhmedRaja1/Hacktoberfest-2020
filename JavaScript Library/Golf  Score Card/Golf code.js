var titles = ["Hole-in-one",
    "Eagle",
    "Birdie",
    "Par",
    "Bogey",
    "Double Bogey",
    "Go Home!"
]
function golf(par, strokes) {
    if (strokes == 1) {
        return titles[0];
    } else if (strokes <= par - 2) {
        return titles[1];
    } else if (strokes == par - 1) {
        return titles[2];
    } else if (strokes == par) {
        return titles[3];
    } else if (strokes == par + 1) {
        return titles[4];
    } else if (strokes == par + 2) {
        return titles[5];
    } else if (strokes == par + 3) {
        return titles[6];
    }
}


result = golf(5, 8);
console.log(result);