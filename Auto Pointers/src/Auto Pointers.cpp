//============================================================================
// Name        : Auto.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <memory>

using namespace std;

class Test {
public:
	Test() {
		cout << "created" << endl;
	}

	void greet() {
		cout << "Hello" << endl;
	}

	~Test() {
		cout << "destroyed" << endl;
	}
};

int main() {

	unique_ptr<Test[]> pTest(new Test[2]);

	pTest[1].greet();

	cout << "Finished!" << endl;
	return 0;
}
