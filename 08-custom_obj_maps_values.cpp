

#include "stdafx.h"

using namespace std;


class Person {
private:
	// Class attributes
	string name;
	int age;
public:

	// Default Contructor
	Person(): name("Default"), age(0) {}

	// Constructor
	Person(string name, int age) : name(name), age(age) {}

	// Copy constructor (if not defined the compiler itself defines one)
	Person(const Person &one_other) {
		cout << "Called CopyContructor: " << one_other.name << ", " << one_other.age << endl;
		name = one_other.name;
		age = one_other.age;
	}

	// Class methods
	void print() const {
		cout << name << ": " << age << flush;
	}

	// Operators for Map Obj as Key comparison
	bool operator<(const Person &other) const {
		if(name == other.name) {
			return age < other.age;
		} else {
			return name < other.name;
		}
	}
};


//////////// Main Functions ////////////
void function_maps_02(void) {

	map<int, Person> people;

	// define object calling copy constructor
	people.insert(make_pair(55, Person("Bob",53)));

	people[0] = Person("Mike", 40);
	people[1] = Person("Mario", 30);
	people[2] = Person("Dunha", 66);
	people[3] = Person("Lonchas", 70);


	for(map<int, Person>::iterator it = people.begin(); it != people.end(); it++) {
		it->second.print();
	}

}


void function_maps_03(void) {

	map<Person, int> people;

	people[Person("Mike", 40)] = 40;
	people[Person("Mario", 30)] = 123;
	people[Person("Dunha", 66)] = 30;
	people[Person("Lonchas", 70)] = 20;

	people[Person("Mike", 41)] = 20;


	for(map<Person, int>::iterator it = people.begin(); it != people.end(); it++) {
		cout << "Value: " << it->second << ": " << flush;
		it->first.print();
		cout << endl;
	}

}



