#include "pch.h"
#include "Dancing.h"
#include <math.h>
#include <iostream>

using namespace std;


int main()
{
	int length = 0;
	char s;
	string phrase = "Ya damn cool))";
	//while ()
	//cin >> phrase;

	for (int i = 0; phrase[i] != '\0'; i++) {
		binaryToDancer(charToBinary(phrase[i]));
		length++;
	}

}

