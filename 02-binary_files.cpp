
#include "StdAfx.h"

using namespace std;

char filename[] = "test.bin";

#pragma pack(push, 1)
struct Person {
	char name[10];
	int age;
	double height;

};

// Write to file in binary mode
void function_04(void) {

	Person p1 = {"Lonchas", 45, 1.7};

	ofstream outFile;
	outFile.open(filename, ios::binary);

	if(outFile.is_open()) {


		//outFile.write((char *) &p1, sizeof(Person)); // Usual way to cast
		outFile.write(reinterpret_cast<char *>(&p1), sizeof(Person)); // Better way to cast

		outFile.close();
	} else {
		throw runtime_error("Could not create a file");	
	}
}



// Read from file in binary mode
void function_05(void) {

	Person p2 = {};

	ifstream inFile;
	inFile.open(filename, ios::binary);

	if(inFile.is_open()) {


		//outFile.write((char *) &p1, sizeof(Person)); // Usual way to cast
		inFile.read(reinterpret_cast<char *>(&p2), sizeof(Person)); // Better way to cast

		inFile.close();
	} else {
		throw runtime_error("Could not create a file");	
	}

	cout << p2.name << ", " << p2.age << ", " << p2.height << ", " << endl;
}

