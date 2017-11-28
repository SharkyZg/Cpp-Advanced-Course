//============================================================================
// Name        : Overloading.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Complex.h"

using namespace std;
using namespace caveofprogramming;

int main() {
	Complex c1(3, 4);
	Complex c2(3, 4);

	if (c1 == c2) {
		cout << "Equals" << endl;
	} else {
		cout << "Not Equal" << endl;
	}

	if (c1 != c2) {
		cout << "Not Equal" << endl;
	} else {
		cout << "Equals" << endl;
	}

	return 0;
}
