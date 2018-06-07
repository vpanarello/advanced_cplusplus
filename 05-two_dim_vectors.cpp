

#include "stdafx.h"

using namespace std;

#define ROWS 20
#define COLUMNS 50



void function_vectors_03(void) {

		// initialize a vector with 3 vectors with 4 values of 7
		vector<vector<int>> grid(ROWS, vector<int>(COLUMNS, 7));


		for(int row=0; row < grid.size(); row++) {
			for(int col=0; col < grid[row].size(); col++) {
				cout << grid[row][col] << flush;
			}
			cout << endl;	
		}
		
}

