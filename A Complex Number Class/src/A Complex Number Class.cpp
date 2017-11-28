//============================================================================
// Name        : A.cpp
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

	Complex c1(2,3);
	Complex c2 = c1;

	c1 = c2;

	cout << c1 << " " << c2 << endl;

	return 0;
}
