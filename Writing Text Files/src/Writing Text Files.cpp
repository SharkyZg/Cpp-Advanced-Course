//============================================================================
// Name        : Writing.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>

using namespace std;

int main() {

	ofstream outFile;

	char *outputFileName = "text.txt";

	outFile.open(outputFileName);

	if(outFile.is_open()) {
		outFile << "Hello there" << endl;
		outFile << 123 << endl;
		outFile.close();
	}
	else {
		cout << "Could not create file: " << outputFileName << endl;
	}
	return 0;
}
