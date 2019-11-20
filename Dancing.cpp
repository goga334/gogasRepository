#include "pch.h"
#include "Dancing.h"
#include <math.h>
#include <iostream>

using namespace std;

int charToBinary(char a) {

	int n = 0, binar = 0;
	int trans = a + 0;

	while (trans >= pow(2, n)) {
		n++;
	}

	for (int i = n - 1; i >= 0; i--) {
		if (trans >= pow(2, i)) {
			binar = binar + pow(10, i);
			trans -= pow(2, i);
		}
	}
	return binar;
}


void binaryToDancer(int input) {

	int bitArray[7];

	for (int i = 0; i <= 6; i++) {
		bitArray[i] = input % 10;
		input = (input - bitArray[i]) / 10;
	}

	for (int i = 0; i <= 6; i++) {

		switch (i)
		{
		case 0:

			if (bitArray[1] == 1) {
				cout << " /";
			}
			else {
				cout << "  ";
			}

			if (bitArray[0] == 0) {
				cout << "(^-^)";
			}
			else {
				cout << "{^-^}";
			}

			if (bitArray[2] == 1) {
				cout << "/ " << endl;
			}
			else {
				cout << endl;
			}
			break;

		case 1:

			if (bitArray[1] == 0) {
				cout << "  /";
			}
			else {
				cout << "   ";
			}

			cout << " | ";

			break;

		case 2:
			if (bitArray[2] == 0) {
				cout << "> ";
			}
			else {
				cout << "   ";
			}
			cout << endl <<
				"    |" << endl <<
				"   / | " << endl;

			break;

		case 3:

			if (bitArray[3] == 0) {
				cout << "  /  ";
			}
			else {
				cout << "   | ";
			}

			break;

		case 4:

			if (bitArray[4] == 0) {
				cout << "/";
			}
			else {
				cout << "L ";
			}

			cout << endl;
			break;

		case 5:

			break;

		case 6:

			break;

		default:

			break;
		}

	}
	cout << endl;
}