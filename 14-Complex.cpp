

#include "stdafx.h"
#include "Complex.h"

using namespace std;
using namespace cpp_course;


//////////// Main Functions ////////////
void function_complex_01(void) {

	Complex c01(1,1);
	Complex c02 = Complex(5, 10);
	Complex c03(2, 3);
	Complex c04;

	c01 = c02 + c03;

	c04 = 4;


	cout << c01 << endl;
	cout << ~c01 << endl;
	cout << c02 << endl;
	cout << c03 << endl;


	cout << 4 + c01 + 2 + c02 + 1000 + c03 << endl;
	cout << ~c04 << endl;

	c01 = c02;

	if (c01 == c02) {
		cout << "EQUAL" << endl;
	} else  {
		cout << "NOT EQUAL" << endl;
	}

}
