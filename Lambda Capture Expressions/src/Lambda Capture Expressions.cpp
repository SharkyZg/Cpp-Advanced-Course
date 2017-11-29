//============================================================================
// Name        : Lambda.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int one = 1;
	int two = 2;
	int three = 3;

	// Capture all local variables by value
	[=]() {cout <<"Hello "<<one<< ", "<< two <<endl;}();

	// Capture all local variables by value, but capture three by reference.
	[=, &three]() {
		cout <<"Hello "<<one<< ", "<< two << ", " << three<<endl;
		three = 7;
	}();

	cout << three << endl;

	// Capture all local variables by reference.
	[&]() {
		cout <<"Hello "<<one<< ", "<< two << ", " << three<<endl;
		three = 10;
	}();

	cout << three << endl;

	// Capture all local variables by reference but two and three by value.
	[&, two, three]() {
		cout <<"Hello "<<one<< ", "<< two << ", " << three<<endl;
	}();

	return 0;
}
