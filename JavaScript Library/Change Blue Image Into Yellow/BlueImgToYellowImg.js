var image = new SimpleImage("duke_blue_devil.png");
print(image);

print("\n\nThe above picture is converted into: ")

for (var pixel of image.values()) {    //Each blue pixel is converted into yellow
    if (pixel.getGreen() != 255 && pixel.getRed() != 255) {
        pixel.setRed(255);
        pixel.setGreen(255);
        pixel.setBlue(0);
    }
}

print(image);