

#include "stdafx.h"

using namespace std;



void function_vectors_02(void) {


	vector<double> numbers(0);

	int capacity = numbers.capacity();

	for(int i=0; i<10000; i++) {
		if(numbers.capacity() != capacity) {
			capacity = numbers.capacity();
			cout << endl << "Capacity: " << capacity << endl;
		}
		cout << ", " << i ;
	
		numbers.push_back(i);
	}

	cout << "Capacity: " << numbers.capacity() << endl;


	numbers.clear();
	numbers.reserve(100000);

	cout << "Size: " << numbers.size() << endl;
	cout << "Capacity: " << numbers.capacity() << endl;
}

