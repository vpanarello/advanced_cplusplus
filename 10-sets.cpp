

#include "stdafx.h"

using namespace std;

class Worker {
private:
	// Class attributes
	int id;
	string name;
public:
	// Default Contructor
	Worker(): name(""), id(0) {}
	// Constructor
	Worker(string name, int id) : name(name), id(id) {}

	// Copy constructor (if not defined the compiler itself defines one)
	Worker(const Worker &other) {
		name = other.name;
		id = other.id;
	}

	// Class methods
	void print() const {
		cout << id << ": " << name << endl;
	}

	// Operators for Map Obj as Key comparison
	bool operator<(const Worker &other) const {
		return id < other.id;
	}
};


//////////// Main Functions ////////////
void function_sets_01(void) {

	typedef set<Worker> set_t;	
	typedef set_t::iterator set_iterator;

	// Set is a type such Arrays but only allow unique elements
	set_t numbers;

	numbers.insert(Worker("Mike", 1));
	numbers.insert(Worker("Joe", 2));
	numbers.insert(Worker("Sue", 3));
	numbers.insert(Worker("Mario", 4));
	numbers.insert(Worker("Lonchas", 3));
	numbers.insert(Worker("Dunha", 6));
	numbers.insert(Worker("Michael", 7));

	
	// Iterate all set elements
	for(set_iterator it=numbers.begin(); it!=numbers.end(); it++) {
		it->print();
	}


	// Find and return element pointer or end address if do not find.
	/*set_iterator itFind = numbers.find(30);
	if(itFind != numbers.end()) {
		cout << "Found: " << *itFind << endl;
	} */

}





