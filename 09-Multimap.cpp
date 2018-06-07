

#include "stdafx.h"

using namespace std;

//////////// Main Functions ////////////
void function_maps_04(void) {

	// Multimap is a map that allow store multiple pairs with same key. Ordenating it in a incressing order
	typedef multimap<string, string> ss_map;

	ss_map lookup;

	lookup.insert(make_pair("aaa", "Mario"));
	lookup.insert(make_pair("aad", "Lonchas"));
	lookup.insert(make_pair("aab", "Dunha"));
	lookup.insert(make_pair("aac", "Bob"));
	lookup.insert(make_pair("aaf", "Vicky"));
	lookup.insert(make_pair("aae", "Rob"));
	lookup.insert(make_pair("aae", "Martin"));


	// iterates entire multimap object
	for(ss_map::iterator it=lookup.begin(); it !=lookup.end(); it++) {
		cout << it->first << " : " << it->second << endl;
	}

	cout << endl;

	// Return the pointer to first found with same key
	for(ss_map::iterator it=lookup.find("aae"); it !=lookup.end(); it++) {
		cout << it->first << " : " << it->second << endl;
	}

	cout << endl;

	// Return a range of this key
	// pair<ss_map::iterator, ss_map::iterator> its = lookup.equal_range("aae");
	auto its = lookup.equal_range("aae"); // Alternative from C++11 where specify auto type


	for(ss_map::iterator it=its.first; it !=its.second; it++) {
		cout << it->first << " : " << it->second << endl;
	}

}





