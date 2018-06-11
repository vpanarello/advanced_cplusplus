#pragma once

#include <iostream>

using namespace std;

namespace cpp_course {

	class Complex
	{

	private:
		double real;
		double imaginary;
	public:

		Complex(void): real(0), imaginary(0) {}
		Complex(double real, double imaginary): real(real), imaginary(imaginary) {}
		Complex(const Complex &other): real(other.real), imaginary(other.imaginary) {}

		double get_real(void) const {
			return real;
		}
		double get_imaginary(void) const {
			return imaginary;
		}

		// Operator Overload
		const Complex &operator=(const Complex &other)
		{
			real = other.real;
			imaginary = other.imaginary;
			return *this;
		}
		const Complex &operator=(const double &d1)
		{
			real = d1;
			return *this;
		}

		const Complex operator~(void)
		{
			return Complex(real, -imaginary);
		}

		// Boolean Operator Overload
		bool operator==(const Complex &c1) const {
			return this->real == c1.real && this->imaginary == c1.imaginary;
		}
		bool operator!=(const Complex &c1) const {
			return !this->operator==(c1);
		}
		virtual ~Complex(void)
		{
		}
	};


	Complex operator+(const Complex &c1, const Complex &c2) {
		return Complex(c1.get_real() + c2.get_real(),  c1.get_imaginary() + c2.get_imaginary());
	}

	Complex operator+(const Complex &c1, double d2) {
		return Complex(c1.get_real() + d2,  c1.get_imaginary());
	}

	Complex operator+(double d1, const Complex &c2) {
		return Complex(c2.get_real() + d1,  c2.get_imaginary());
	}

	ostream &operator<<(ostream &out, const Complex &c) {
		out << "(" << c.get_real() << ", " << c.get_imaginary() << ")";
		return out;
	}





}

