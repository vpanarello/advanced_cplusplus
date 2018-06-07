// writing_text_files.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

string filename = "cpp_test.txt";


// Writing text files
void first(void) {
	cout << "Running first function" << endl;
	
	//ofilestream ofile;
	fstream ofile;

	ofile.open(filename, ios::out);
	if(ofile.is_open()) {

		for(int line=0; line < 1000; line++) {
			ofile << "Line " << line << ":" << line * rand() << endl;

			
		}
		
		ofile.close();
		cout << "File created: " << filename.c_str() << endl;
	} else {
		throw new runtime_error("could not create a file");
	}
}


// Reading text files
void second(void) {

	cout << "Running second function" << endl;

	ifstream input;

	input.open(filename);

	if(input.is_open()) {
		string title;

		while(input) {

			getline(input, title, ':');

			int value;
			input >> value;
			
			cout << input.get() << " "; // get out newline char from buffer
			cout << input.get() << " "; // get out newline char from buffer

			cout << title << " --- ";
			cout << "'" << value << "'" << endl;
		}

		input.close();


	} else {
		throw runtime_error("Could not open a file");
	}

}

// Output to numerical Ascii codes
void third(void) {
	cout << "Running third function" << endl;

	ifstream input;
	input.open(filename);


	if(input.is_open()) {
		string title;
		while(input) {
			for (int i=0; i<40; i++) {
				int _char = (int) input.get();
				cout << _char << " ";
				if (_char == 10) break;
			}
			cout << endl;
		}
		input.close();
	} else {
		throw runtime_error("Could not open a file");
	}

}




