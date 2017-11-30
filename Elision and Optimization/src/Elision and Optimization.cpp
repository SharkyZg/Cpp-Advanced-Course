//============================================================================
// Name        : Elision.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory.h>
#include <vector>
using namespace std;

class Test {
private:
	static const int SIZE = 100;
	int *_pBuffer;

public:
	Test() {
		cout << "constructor" << endl;
		_pBuffer = new int[SIZE] { };
	}
	Test(int i) {
		cout << "parameterized constructor" << endl;
		_pBuffer = new int[SIZE] { };
		for (int i = 0; i < SIZE; i++) {
			_pBuffer[i] = 7 * i;
		}
	}

	Test(const Test &other) {
		cout << "copy constructor" << endl;

		_pBuffer = new int[SIZE] { };

		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
	}

	Test &operator=(const Test &other) {
		cout << "copy constructor" << endl;

		_pBuffer = new int[SIZE] { };

		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
	}

	~Test() {
		cout << "destructor" << endl;

		delete[] _pBuffer;
	}
	friend ostream &operator<<(ostream &out, const Test &test);
};

ostream &operator<<(ostream &out, const Test &test) {
	cout << "Hello from test" << endl;
	return out;
}

Test getTest() {
	return Test();
}

void check(const Test &value) {
	cout << "lValue function!" <<endl;
}

void check(Test &&value) {
	cout << "rValue function!" <<endl;
}

int main() {

	Test test1 = getTest();
	cout << test1 << endl;

	vector<Test> vec;
	vec.push_back(Test());

	Test &ltest1 = test1;

	Test &&rtest1 = Test();
	Test &&rtest2 = getTest();

	check(ltest1);
	check(getTest());
	return 0;
}