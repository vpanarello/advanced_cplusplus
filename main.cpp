
#include "stdafx.h"

using namespace std;


void _start(void) {
	cout << "Starting App..." << endl;
}

void _exit(void) {
	cout << "Exiting App..." << endl;
	system("PAUSE");
}


int _tmain(int argc, _TCHAR* argv[])
{	
	Callbacks cb = Callbacks(100);
	cb.set_callback(&_start);


	cb.set_callback(&function_test_area);
	

	//cb.set_callback(&first); // Write text file
	//cb.set_callback(&second); // Read text file
	//cb.set_callback(&third);  // Read ASCII codes
	//cb.set_callback(&function_04); // Write a binary file
	//cb.set_callback(&function_05); // Read a binary file

	//cb.set_callback(&function_vectors_01); // Basic Vectors and interators
	// cb.set_callback(&function_vectors_02);  // Vectors and memory uses
	// cb.set_callback(&function_vectors_03);  // Vectors of 2 dimensions
	// cb.set_callback(&function_lists_01);  // Vectors of 2 dimensions

	// cb.set_callback(&function_maps_01);  // Maps example 1

	//cb.set_callback(&function_maps_02);  // Maps example 2
	//cb.set_callback(&function_maps_03);  // Maps example 3
	//cb.set_callback(&function_maps_04);  // multimap example

	//cb.set_callback(&function_sets_01);  // multimap example

	//cb.set_callback(&function_stack_01);
	//cb.set_callback(&function_queue_01);

	// Operator overload activities
	//cb.set_callback(&function_op_overload_01);

	//cb.set_callback(&function_op_overload_02);

	cb.set_callback(&function_complex_01);
	
	

	cb.set_callback(&_exit);
	cb.execute_all();
	return 0;
}