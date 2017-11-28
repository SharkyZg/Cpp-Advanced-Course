/*
 * Complex.cpp
 *
 *  Created on: 2017 M11 23
 *      Author: sharky
 */

#include "Complex.h"

namespace caveofprogramming {

ostream &operator<<(ostream &out, const Complex &c){
	out << "(" << c.getReal() << "," << c.getImaginary() << ")";
	return out;
}

Complex::Complex() :
		real(0), imaginary(0) {

}

Complex::Complex(double real, double imaginary) :
		real(real), imaginary(imaginary) {

}

Complex::Complex(const Complex &other) {
	cout << "Copy" << endl;
	real = other.real;
	imaginary = other.imaginary;
//
//		return *this;
}

const Complex &Complex::operator=(const Complex &other) {
	real = other.real;
	imaginary = other.imaginary;

	return *this;
}
//	Complex(const Complex &other) {
//		*this = other;
//	}
//
//	friend ostream &operator<<(ostream &out, const Complex &complex) {
//		out << complex.real << ": " << complex.imaginary;
//		return out;
//	}
}/* namespace caveofprogramming */
