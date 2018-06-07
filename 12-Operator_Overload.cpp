

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
	// Default destroctor
	~Worker() {
		cout << "Destroying: " << name << endl;
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
void function_op_overload_01(void) {


}






