

#include "stdafx.h"

using namespace std;


void function_lists_01(void) {

	list<int> numbers;

	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_front(0);

	
	list<int>::iterator it = numbers.begin();
	it++;
	
	// insert element on 'it' specified position.
	numbers.insert(it, 100);

	// cout << "Element: " << *it << endl;

	//list<int>::iterator it = numbers.begin();
	it++;

	// cout << "Element: " << *it << endl;


	// interate a list
	for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		cout << "Element: " <<  *it << endl;
	}

}


