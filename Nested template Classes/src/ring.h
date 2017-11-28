/*
 * ring.h
 *
 *  Created on: 2017 M11 27
 *      Author: sharky
 */

#ifndef RING_H_
#define RING_H_

#include <iostream>
using namespace std;

template<typename T>
class ring {
public:
	class iterator;
};

template<typename T>
class ring<T>::iterator {
public:
	void print() {
		cout << "Hello from iterator: " << T() << endl;
	}
};



#endif /* RING_H_ */
