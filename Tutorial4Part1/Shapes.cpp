/** \file Shapes.cpp
* \brief Library to draw various shapes,implementation.
* \details The program illustrates a multifile.
* \author Petros Ttaris
* \version 0.1
* \date 13/05/2021
* \copyright University of Nicosia.
*/
#include "Shapes.h"
#include <iostream>

using namespace std;

/**
* Function <code>drawHorizontalLine<code> draws a horizontal line according to the arguments.
* <BR>
* @param length The length of the line to be drawn.
* @param ch The symbol used to draw the line.
*/
void drawHorizontalLine(const int length, const char ch) {
	cout << "HorizontalLine (" << length << ", '" << ch << "')" << endl;
	cout << endl;
	for (int i = 0; i < length; i++) {
		cout << ch;

	}
}
/**
* Function <code>drawVerticalLine<code> draws a vertical line according to the arguments.
* <BR>
* @param length The length of the line to be drawn.
* @param ch The symbol used to draw the line.
*/
void drawVerticalLine(const int height, const char ch) {
	cout << "Vertical Line (" << height << ", '" << ch << "')" << endl;
	cout << endl;
	for (int i = 0; i < height; i++) {
		cout << ch << endl;
	}
}
/**
* Function <code>drawSquare<code> draws a square according to the arguments.
* <BR>
* @param size The size of the square.
* @param ch The symbol used to draw the square.
*/
void drawSquare(const int size, const char ch) {
	cout << "Square (" << size << ", '" << ch << "')" << endl;
	cout << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
				cout << ch;
			}
			else
				cout << " ";
		}
		cout << endl;
	}
}
/**
* Function <code>drawRectangle<code> draws a rectangle according to the arguments.
* <BR>
* @param height The height of the rectangle.
* @param length The length of the rectangle.
* @param ch The symbol used to draw the rectangle.
*/
void drawRectangle(const int height, const int length, const char ch) {
	cout << "Rectangle (" << height << ", '" << length << ", '" << ch << "')" << endl;
	cout << endl;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < length; j++) {
			if (i == 0 || i == height - 1 || j == 0 || j == length - 1) {
				cout << ch;
			}
			else
				cout << " ";
		}
		cout << endl;
	}
}