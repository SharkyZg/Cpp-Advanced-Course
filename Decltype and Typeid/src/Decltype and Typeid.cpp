//============================================================================
// Name        : Decltype.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <typeinfo>

using namespace std;

int main() {

	string value;

	cout << typeid(value).name() << endl;

	decltype(value) name;

	name = "Marko";

	cout << name << endl;

	return 0;
}
