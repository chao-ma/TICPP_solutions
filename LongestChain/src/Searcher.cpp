/*
 * Searcher.cpp
 *
 *  Created on: Mar 17, 2016
 *      Author: chaoma
 */
#include <iostream>
#include <algorithm>
#include "Searcher.h"

LongestChainSearcher::LongestChainSearcher(int** grid, int nRow, int nCol): nRow_(nRow), nCol_(nCol) {
	grid_ = grid;
	cache_ = new int*[nRow_];
	int i, j;
	for (i = 0 ; i < nRow_; i++) {
		cache_[i] = new int[nCol_];
		for (j = 0 ; j < nCol_ ; j++) {
			cache_[i][j] = 0;
			// std::cout << grid_[i][j] << ' ';
		}
	}
}

LongestChainSearcher::~LongestChainSearcher() {
	for (int i = 0 ; i < nRow_; i++) {
		delete[] cache_[i];
	}
	delete[] cache_;
}

int LongestChainSearcher::getMaxLength(int row, int col, int previous) {
	if (row < 0 || col < 0 || row >= nRow_ || col >= nCol_) {
		return 0;
	}
	if (previous >= grid_[row][col]) {
		return 0;
	}
	if (cache_[row][col] > 0) {
		return cache_[row][col];
	}
	int maxLength = 0;
	maxLength = std::max(maxLength, getMaxLength(row - 1, col, grid_[row][col]));
	maxLength = std::max(maxLength, getMaxLength(row + 1, col, grid_[row][col]));
	maxLength = std::max(maxLength, getMaxLength(row, col - 1, grid_[row][col]));
	maxLength = std::max(maxLength, getMaxLength(row, col + 1, grid_[row][col]));
	cache_[row][col] = maxLength + 1;
	return cache_[row][col];
}


