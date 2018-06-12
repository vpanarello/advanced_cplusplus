

#include "stdafx.h"

using namespace std; 

// Template for classes
template<class T, class K>
class Test {
private:
	T key;
	K value;
public:
	Test(T key, K value): key(key), value(value) {}

	void print(void) {
		cout << key << " : " << value << endl;
	}
};


// Template Functions
template<typename T> // Can be used with classes too
void print (T n) {
	cout << "template version: " << n << endl;
}

void print (int n) {
	cout << "Non-template version: " << n << endl;
}


//////////// Main Functions ////////////
void function_template_01(void) {

	Test<int, string> test1(1, "Hello");

	print<int>(10);		// calls template function
	print<>(15);		// calls template function
	print(20);			// calls non-template function
	print("Hi there !"); // calls template function

	test1.print();

}






