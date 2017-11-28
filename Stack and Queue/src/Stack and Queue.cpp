//============================================================================
// Name        : Stack.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Test {
private:
	string name;

public:
	Test(string name) :
		name(name) {

	}

	~Test() {
		//cout << "Object destroyed" << endl;
	}

	void print() {
		cout << name << endl;
	}
};

int main() {

	// LIFO
	stack<Test> testStack;

	testStack.push(Test("Mike"));
	testStack.push(Test("John"));
	testStack.push(Test("Sue"));

//	Test test1 = testStack.top();
//	test1 = testStack.top();
//	test1.print();
//
//	testStack.pop();
//
//	Test test2 = testStack.top();
//	test2.print();

	while(testStack.size() > 0) {
		Test &test = testStack.top();
		test.print();
		testStack.pop();
	}

	cout << endl;

	queue<Test> testQueue;

	testQueue.push(Test("Mike"));
	testQueue.push(Test("John"));
	testQueue.push(Test("Sue"));

//	Test test1 = testStack.top();
//	test1 = testStack.top();
//	test1.print();
//
//	testStack.pop();
//
//	Test test2 = testStack.top();
//	test2.print();

	testQueue.back().print();

	cout << endl;

	while(testQueue.size() > 0) {
		Test &test = testQueue.front();
		test.print();
		testQueue.pop();
	}

	return 0;
}
