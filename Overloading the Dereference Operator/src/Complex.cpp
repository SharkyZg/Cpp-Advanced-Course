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

Complex operator+(const Complex &c1, const Complex &c2) {
	return Complex(c1.getReal()+c2.getReal(), c1.getImaginary()+c2.getImaginary());
}

Complex operator+(const Complex &c1, double d) {
	return Complex(c1.getReal()+d, c1.getImaginary());
}

Complex operator+(double d, const Complex &c1) {
	return Complex(c1.getReal()+d, c1.getImaginary());
}

Complex::Complex() :
		real(0), imaginary(0) {

}

Complex Complex::operator*() const {
	return Complex(real, -imaginary);
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

bool Complex::operator==(const Complex &other) const{
	return real == other.real && imaginary == other.imaginary;
}

bool Complex::operator!=(const Complex &other) const{
	return !(*this==other);
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
