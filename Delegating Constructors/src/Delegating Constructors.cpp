//============================================================================
// Name        : Delegating.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Parent {
	int dogs;
	string text;

public:
	Parent(): Parent("hello") {

	}

	Parent(string text) {
		dogs = 5;
		this->text = text;
		cout << "string parent constructor" << endl;
	}
};

class Child: public Parent {
public:
	Child() = default;
};

int main() {
	Parent parent;
	Child child;
	return 0;
}
