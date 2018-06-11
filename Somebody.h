#pragma once

#include "stdafx.h"
using namespace std;

//#define DEBUG_MODE

// Class to generate a example object to manz exercices
class Somebody
{
private:
	// Class attributes
	int id;
	string name;

	void print_reference() const {
		//print_reference((Somebody*) 0);
	}

	void print_reference(Somebody other) const {
		if(&other) {
			//printf("   @%p <= @%p", (void *) this, (void *) other); 
		} else {
			printf("   @%p", (void *) this); 
		}

	}

public:
	///////////////  Constructors /////////////////
	// Default Contructor
	Somebody(void): name(""), id(0) {
		#ifdef DEBUG_MODE
		print_reference((Somebody) 0);
		cout << ": Constructor Default : " << name << endl;
		#endif
	}
	// Default Destructor
	virtual ~Somebody(void) {
		#ifdef DEBUG_MODE
		print_reference((Somebody*) 0);
		cout << ": Destroying: " << name << endl;
		#endif
	}
	// User Constructor
	Somebody (int id, string name) : name(name), id(id) {
		#ifdef DEBUG_MODE
		print_reference((Somebody*) 0);
		cout << ": Constructor User: " << name << endl;
		#endif
	}

	// Copy constructor (if not defined the compiler itself defines one)
	Somebody (const Somebody &other) : id(other.id), name(other.name) {
		#ifdef DEBUG_MODE
		print_reference(other);
		cout << ": Constructor Copy from: " << name << endl;
		#endif
	}

	///////////////  Methods /////////////////
	void set_name(const char* new_name) {
		name = string(new_name);
	}

	void print() const {
		cout << id << ": " << name << endl;
	}

	///////////////  Operators Overload /////////////////
	bool operator<(const Somebody &other) const {
		#ifdef DEBUG_MODE
		print_reference((Somebody*) 0);
		cout << ": operator overload '<'" << endl;
		#endif
		return id < other.id;
	}

	const Somebody &operator=(const Somebody &other) {
		#ifdef DEBUG_MODE
		print_reference((Somebody*) 0);
		cout << ": operator overload '='" << endl;
		#endif
		id = other.id;
		name = other.name;
		return *this;
	}
};