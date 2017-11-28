//============================================================================
// Name        : Sets.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <set>
using namespace std;

int main() {
	set<int> numbers;

	numbers.insert(50);
	numbers.insert(10);
	numbers.insert(30);
	numbers.insert(20);

	for(set<int>::iterator it=numbers.begin(); it != numbers.end(); it++) {
		int number = *it;
		cout << number << endl;
	}

	set<int>::iterator itFind = numbers.find(30);

	if(itFind != numbers.end()) {
		cout << "Found: " << *itFind << endl;
	}

	if(numbers.count(30)) {
		cout << "Number found." << endl;
	}

	return 0;
}
