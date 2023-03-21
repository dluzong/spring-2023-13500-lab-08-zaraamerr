#include <iostream>
#include <string>
#include "funcs.h"
#include "imageio.h"

int main() {
    int img[MAX_H][MAX_W];
    int h = 0;
    int w = 0;
    std::string input("inImage.pgm");
    // Read in the dimensions of the input image
    readImage(input, img, h, w);
    // Call invert function to invert the image
    invert(img, h, w);
    //Call half invert function to invert the image
    invert_half(img, h, w);
    //Call box function
    box(img, h, w);
    //Call frame function
    frame (img, h, w);
    //Call scale function
    scale(img, h, w);
    //Call pixelate function
    pixelate(img, h, w);
    return 0;
}

