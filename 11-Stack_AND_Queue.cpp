

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
void function_stack_01(void) {

	// LIFO - Last In First Out, concept
	stack<Worker> _stack;

	_stack.push(Worker("Mike",1));
	_stack.push(Worker("John",2));
	_stack.push(Worker("Sue",3));
	
	
	while(_stack.size() > 0) {
		_stack.top().print();
		_stack.pop();
	}
}

void function_queue_01(void) {

	cout << endl << "Queue Test..." << endl;

	// FIFO - First In First Out, concept
	queue<Worker> _queue;

	_queue.push(Worker("Mike",1));
	_queue.push(Worker("John",2));
	_queue.push(Worker("Sue",3));
	
	
	while(_queue.size() > 0) {
		_queue.front().print();
		_queue.pop();
	}
}





