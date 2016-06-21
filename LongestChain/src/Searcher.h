/*
 * Searcher.h
 *
 *  Created on: Mar 17, 2016
 *      Author: chaoma
 */

#include <climits>

class LongestChainSearcher {
private:
	const int nRow_, nCol_;
	int** grid_;
	int** cache_;
public:
	LongestChainSearcher(int** grid, int nRow, int nCol);
	~LongestChainSearcher();
	int getMaxLength(int row, int col, int previous=INT_MIN);
};
