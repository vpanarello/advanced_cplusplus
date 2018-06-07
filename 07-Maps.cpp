

#include "stdafx.h"

using namespace std;


void function_maps_01(void) {

	map<string, int> ages;


	ages["Mike"] = 40;
	ages["Raj"] = 20;
	ages["Vicky"] = 30;
	ages["Mike"] = 70;


	// insering with pair class constructor
	pair<string, int> addToMap("Peter", 100);
	ages.insert(addToMap);

	// insering values with function
	ages.insert(make_pair("Lonchas", 55));


	cout << ages["Raj"] << endl;

	//cout << ages["Sue"] << endl;

	if(ages.find("Sue") != ages.end()) {
		cout << "Found Sue" << endl;
	} else {
		cout << "Key not found" << endl;
	}

	// accessing content throught pair object
	for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		pair<string, int> age = *it;

		cout << age.first << " : " << age.second << endl;

	}

	// accessing content directely with pointer
	for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		cout << it->first << " : " << it->second << endl;
	}
	

	
}


