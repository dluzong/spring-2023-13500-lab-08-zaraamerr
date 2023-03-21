//Zara Amer
//CSCI 135
//Prof Zamansky
//3/20/23

#include <iostream>
#include <string>
#include "imageio.h"
#include "funcs.h"

//task A: @param: 2D integer array of size MAX_H and MAX_W
//and two int references, height and width.

void invert(int img[MAX_H][MAX_W], int& h, int& w) {
    //declare a new 2D integer array of size MAX_H and MAX_W
    //it'll store the inverted image.
    int output[MAX_H][MAX_W];
    // Invert the colors by iterating thru each pixel of the image...
    for (int row = 0; row < h; row++) {
        for (int col = 0; col < w; col++) {
            output[row][col] = 255 - img[row][col]; //and subtracting 255 from the OG value of the pixel
        }
    }
    //call writeImage func & pass thru filename of inverted image, output array
    //which contains the inverted image, & h + w of image.
    writeImage("taskA.pgm", output, h, w); 
}

//task B: @param: 2D integer array of size MAX_H and MAX_W
//and two int references, height and width.

void invert_half(int image[MAX_H][MAX_W], int &h, int &w){
    //declare a new 2D integer array of size MAX_H and MAX_W
    //it'll store the half-inverted image.
	int output[MAX_H][MAX_W];
    //Invert half the colors by iterating thru each pixel in the image...
	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {
			if(col > w/2){ //and checking if the column number is greater than half the width of the image
				output[row][col] = 255 - image[row][col]; //if true, invert it
			}
			else{
				output[row][col] = image[row][col]; //if not, keep OG
			}
		}
	}
    //call writeImage func & pass thru filename of half-inverted image, output array
    //which contains the half-inverted image, & h + w of image.
	writeImage("taskB.pgm", output, h, w);
}

//task C: @param: 2D integer array of size MAX_H and MAX_W
//and two int references, height and width.

void box(int image[MAX_H][MAX_W], int &h, int &w){
    //declare a new 2D integer array of size MAX_H and MAX_W
    //it'll store the white box.
	int output[MAX_H][MAX_W];
    //Create the white box by iterating thru each pixel in the image
	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {
			if(col > w/4 && col < w - w/4  && row > h/4 && row < h - h/4){ //if its within these certain rows n columns
				output[row][col] = 255; //set pixel color to white
			}
			else{
				output[row][col] = image[row][col]; //otherwise use OG color
			}
		}
	}
    //call writeImage func & pass thru filename of white box image, output array
    //which contains the white box image, & h + w of image.
	writeImage("taskC.pgm", output, h, w);
}

//task D: @param: 2D integer array of size MAX_H and MAX_W
//and two int references, height and width.

void frame(int image[MAX_H][MAX_W], int &h, int &w){
    //declare a new 2D integer array of size MAX_H and MAX_W
	int output[MAX_H][MAX_W];
	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {
			output[row][col] = image[row][col]; //copy over values
		}
	}
    //borders of the frame
	for(int col = w/4; col < w-w/4; col++){
		output[h/4][col] = 255;
	}
	for(int col = w/4; col < w-w/4; col++){
		output[h-h/4][col] = 255;
	}
	for(int row = h/4; row < h-h/4; row++){
		output[row][w/4] = 255;
	}
	for(int row = h/4; row < h-h/4; row++){
		output[row][w-w/4] = 255;
	}
	//call writeImage func & pass thru filename of white frame image, output array
    //which contains the white frame image, & h + w of image.
	writeImage("taskD.pgm", output, h, w);
}
