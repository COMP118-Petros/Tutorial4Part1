/** \file Tutorial4Part1
* \brief A little program.
* \details The program illustrates a multifile.
* \author Petros Ttaris
* \version 0.1
* \date 13/05/2021
* \bug No bugs so far.
* \copyright University of Nicosia.
*/

#include<iostream>
#include<cassert>
#include "Shapes.h"

using namespace std;

int main() {
	int option;
	char symbol;
	int len, height;

	const int MAX_ARRAY = 10;

	srand(time(NULL));

	do {
		menu();
		cin >> option;
		switch (option) {
		case 1: //Horizontal Line
			do {
				cout << "Enter length (>0): " << endl;
				cin >> len;

			} while (len < 1);
			cout << "Enter symbol: " << endl;
			cin >> symbol;
			drawHorizontalLine(len, symbol);
			break;
		case 2: //Vertical Line
			do {
				cout << "Enter length (>0): " << endl;
				cin >> len;

			} while (len < 1);
			cout << "Enter symbol: " << endl;
			cin >> symbol;
			drawVerticalLine(len, symbol);
			break;
		case 3: //Square
			do {
				cout << "Enter length (>0): " << endl;
				cin >> len;

			} while (len < 2);
			cout << "Enter symbol: " << endl;
			cin >> symbol;
			drawSquare(len, symbol);
			break;
		case 4: //Rectangle
			do {
				cout << "Enter height (>0): " << endl;
				cin >> height;
				cout << "Enter length (>0): " << endl;
				cin >> len;

			} while (len < 2);
			cout << "Enter symbol: " << endl;
			cin >> symbol;
			drawRectangle(height, len, symbol);
			break;
		case 5: //Exit
			break;
		default:
			cout << "Wrong choice!!" << endl;
		}
	} while (option != 5);

}