//Zara Amer
//CSCI 135
//Prof Zamansky
//3/20/23

#include <iostream>
#include <string>
#include "imageio.h"
#include "funcs.h"

//Lab 8 task A: Write a new program invert.cpp that inverts all colors, 
//so white shades become black, and black become white: Since black = 0, and white = 255, you should do
//the following transformation for each pixel color:
//0 → 255
//1 → 254
//2 → 253
//…
//254 → 1
//255 → 0

void invert(int img[MAX_H][MAX_W], int& h, int& w) {
    int output[MAX_H][MAX_W];
    // Invert the colors
    for (int row = 0; row < h; row++) {
        for (int col = 0; col < w; col++) {
            output[row][col] = 255 - img[row][col];
        }
    }
    writeImage("taskA.pgm", output, h, w);
}



