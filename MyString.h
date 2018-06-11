#pragma once

using namespace std;

class MyString {
private:
	int _size;
	char* _str;
	char _this_addr[10];

	void destroy_buffer() {
		_size = 0;
		if(_str) {
			delete _str; // delloc memory from heap (garbage)
			_str = NULL;
		}
	}
	void allocate_buffer() {
		_str = new char[_size + 1];
	}

	void store_this_address() {
		obj_address(this, _this_addr);
	}

public:
	MyString(): _size(0), _str(NULL) {
		store_this_address();
		cout << _this_addr << ": Default Constructor" << endl;
	};

	MyString(int size): _size(size) {
		store_this_address();
		allocate_buffer();
		cout << _this_addr << ": Defined Constructor 'MyString(int size): _size(size)'" << endl;
	}
	MyString(const char* string): _size(strlen(string)) {
		store_this_address();
		cout << _this_addr << ": Defined Constructor 'MyString(const char* string)'" << endl;
		allocate_buffer();
		strcpy(_str,string);
	}
	MyString(const MyString &other): _size(other._size) {
		store_this_address();
		cout << _this_addr << ": Copy Constructor 'MyString(const MyString &other)'" << endl;
		allocate_buffer();
		strcpy(_str,other._str);
	}
	virtual ~MyString(void)
	{
		cout << _this_addr << ": destroying" << endl;
		destroy_buffer();
	}

	/////////////////  Overload Operators /////////////////

	MyString operator+(const MyString &string)  {
		cout << _this_addr << ": Operator Overload '+' " << endl;

		int new_size = this->_size + string._size + 1;
		char* new_str = new char[new_size];
		strcpy(new_str, this->_str);
		strcat(new_str, string._str);

		return MyString(new_str);
	}

	const MyString &operator=(const char* string) {
		cout << _this_addr << ": Operator Overload '=' (const char* string)" << endl;
		destroy_buffer();

		_size = strlen(string);
		allocate_buffer();
		strcpy(_str,string);
		return *this;
	}

	const MyString &operator=(const MyString &string) {
		cout << _this_addr << ": Operator Overload '=' (const MyString &string)" << endl;
		destroy_buffer();
		_size = string._size;
		allocate_buffer();
		strcpy(_str,string._str);
		return *this;  
	}
	
	// Left to the right association, normally its implemented in a separed CPP file
	friend ostream &operator<<(ostream &out, const MyString &mystr) {
		out << mystr._str << endl;
		return out;
	}

};