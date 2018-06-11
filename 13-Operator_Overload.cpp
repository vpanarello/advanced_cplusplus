

#include "stdafx.h"
#include "MyString.h"

//#define DEBUG_MODE


using namespace std;


//////////// Main Functions ////////////
void function_op_overload_02(void) {

	MyString str1 = MyString("Texto dentro da string 2");
	MyString str2 = MyString(100);
	MyString str3;
	MyString str4;


	// operator '=' (const char* string)
	str1 = "Texto 1";
	str2 = "Texto 2";
	str3 = "Texto 3";
	str4 = "Texto 4";

	MyString space = MyString(" ");

	// operator '+'
	cout << endl << "Operacao: (str4 = str2 + str1)" << endl << endl;
	str4 = str1 + space + str2 + space + str3 + space + str4;

	//cout << endl << "Operacao: (str5 = str3 = str2 = str1)" << endl << endl;
	//MyString str5 = str3 = str2 = str1; // Statement call copy constructor

	//dump_object(&str1, sizeof(str1));
	//dump_object(&str2, sizeof(str2));
	//dump_object(&str3, sizeof(str3));

	cout << endl << "========== Printing objects ==========" << endl << endl;

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;



}








