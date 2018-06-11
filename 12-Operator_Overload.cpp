

#include "stdafx.h"

//#define DEBUG_MODE

#include "Somebody.h"

using namespace std;

void print_obj(Somebody w) {
	w.print();
} 


//////////// Main Functions ////////////
void function_op_overload_01(void) {


	Somebody w01 = Somebody(10, "Mike");
	Somebody w02 = Somebody(20, "Bob");
	
	//w01.print();
	//w02.print();

	// Operation call a method of w02 and pass w01 as argument 
	cout << endl << "... Execute a shadow copy of object ..." << endl << endl;
	
	int* ptr = NULL;

	
	w02 = w01;
	//w01.print();
	//w02.print();

	Somebody w03;
	
	//w03.operator=(w02);
	//w02.set_name("Lonchas");

	//cout << endl;
	
	//w01.print();
	//w02.print();
	//w03.print();

	cout << endl <<"... Initialize and obj with another object ..." << endl << endl;
	Somebody w04 = w01;
	//w04.print();

	cout << endl << "... Returning ..." << endl << endl;
}






