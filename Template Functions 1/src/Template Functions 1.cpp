//============================================================================
// Name        : Template.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<typename T>
void print(T n) {
	cout << "Template version: " << n << endl;
}

void print(int value) {
	cout << "Non-template version: " << value << endl;
}

int main() {
	print<int>(5);
	print<string>("Hello");

	print("Hi there");

	print<>(6);

	return 0;
}
