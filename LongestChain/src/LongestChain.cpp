//============================================================================
// Name        : LongestChain.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include "Searcher.h"
using namespace std;


int main() {
	const int grid[4][4] = {
			{1,3,5,8},
			{2,9,3,1},
			{8,6,3,1},
			{4,4,7,0}
	};
	int nRow = sizeof(grid) / sizeof(grid[0]);
	int nCol = sizeof(grid[0]) / sizeof(int);
	int i, j;
	int** input = new int*[nRow];
	for (i = 0 ; i < nRow ; i++) {
		input[i] = new int[nCol];
		for (j = 0 ; j < nCol ; j ++) {
			input[i][j] = grid[i][j];
		}
	}
	int maxLen = 0;
	LongestChainSearcher searcher(input, nRow, nCol);
	for (i = 0; i < nRow; i++) {
	    for (j = 0; j < nCol; j++) {
	    	maxLen = max(maxLen, searcher.getMaxLength(i, j));
	    	cout << i << j << maxLen << endl;
	    }
	}
	cout << maxLen;
	return 0;
}
