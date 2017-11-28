//============================================================================
// Name        : Ring.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ring.h"

using namespace std;

int main() {
	ring<string> textring(3);

	textring.add("one");
	textring.add("two");
	textring.add("three");

	for(ring<string>::iterator it=textring.begin(); it != textring.end(); it++) {
		cout << *it << endl;
	}

	for(int i=0; i<textring.size();i++) {
		cout << textring.get(i) << endl;
	}

	return 0;
}
