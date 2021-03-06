//============================================================================
// Name        : Capturing.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test {
private:
	int one { 1 };
	int two { 2 };

public:
	void run() {

		int three { 3 };
		int four { 4 };
		auto pLambda = [&, this]() {
			cout << one << ", "<< three << ", " << four << endl;
		};
		pLambda();
	}
};

int main() {
	Test test;
	test.run();

	return 0;
}
