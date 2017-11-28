//============================================================================
// Name        : Maps.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using namespace std;

int main() {
	map<string, int> ages;

	ages["Mile"] = 40;
	ages["Marko"] = 40;
	ages["Vicky"] = 40;

	ages["Mile"] = 70;

	ages.insert(make_pair("Peter", 100));

	cout << ages["Mile"] << endl;

	cout << ages["Sue"] << endl;

	if(ages.find("Vicky1") != ages.end()) {
		cout << "Found Vicky" << endl;
	}
	else {
		cout << "Key not found" << endl;
	}

	for(map<string, int>::iterator it=ages.begin(); it != ages.end(); it++) {
		pair<string, int> age = *it;
		cout << age.first << ": " << age.second << endl;
	}

	for(map<string, int>::iterator it=ages.begin(); it != ages.end(); it++) {
		cout << it->first << ":" << it->second << endl;
	}

	return 0;
}
