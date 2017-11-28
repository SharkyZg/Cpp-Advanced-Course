//============================================================================
// Name        : Functors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Test {
	virtual bool operator()(string &text) = 0;

	virtual ~Test() {
	}
};

struct MatchTest: public Test {
	virtual bool operator()(string &text) {
		return text == "lion";
	}
};

void check(string text, Test &test) {
	if (test(text)) {
		cout << "Text matches!" << endl;
	} else {
		cout << "Text doesn't matches!" << endl;
	}
}

int main() {

	MatchTest pred;

	string value = "lion";


	check(value, pred);

	return 0;
}
