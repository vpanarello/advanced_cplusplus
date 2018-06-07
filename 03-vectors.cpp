

#include "stdafx.h"

using namespace std;

// Class element to test Vectors Sort Methods
class Element {
private:
	string title;
public:
	Element(): title("") {}
	Element(string str): title(str) {}

	// Standard operator used by Sort Method
	bool operator<(Element &other) const {
		return title < other.title;
	}
	const char* to_string() {
		return title.c_str();
	}

	// allow this function to access class private attributes
	friend bool comparator(const Element &a, const Element &b);
};


// later defined comparator for Sort Method
bool comparator(const Element &a, const Element &b) {
	return a.title > b.title;
}

void function_vectors_01(void) {

	typedef vector<Element> colletion;
	typedef colletion::iterator iterator;

	colletion strings;

	strings.push_back(Element("ONE"));
	strings.push_back(Element("TWO"));
	strings.push_back(Element("THREE"));
	strings.push_back(Element("FOUR"));
	strings.push_back(Element("FIVE"));
	strings.push_back(Element("SIX"));

	//cout << strings.size() << endl;

	//// Vector iterator as a standard array
	for(int i = 0; i < strings.size(); i++) {
		cout << strings[i].to_string() << endl;
	}

	//// Sort vector elements based on "<" obj overload operator
	sort(strings.begin(),strings.end());
	cout << endl;
	for(int i = 0; i < strings.size(); i++) {
		cout << strings[i].to_string() << endl;
	}

	//// Sort Vector elements using a external comparator function
	sort(strings.begin(),strings.end(), comparator);
	cout << endl;

	for(int i = 0; i < strings.size(); i++) {
		cout << strings[i].to_string() << endl;
	}
	
	//// Vector with iteractor object
	//vector<string>::iterator it = strings.begin();

	//while(it < strings.end()) {
	//	printf("%#010x", it);
	//	cout << " - " << *it << endl;
	//	it++;
	//}


	



}

