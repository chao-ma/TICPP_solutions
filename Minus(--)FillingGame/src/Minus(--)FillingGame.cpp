//============================================================================
// Name        : Minus(--)FillingGame.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <set>
#include <string>
using namespace std;

set<int> create_options(string& board) {
	set<int> options;
	for (int i = 0; i < board.length() - 1; i++) {
		if (board[i] == '-' && board[i+1] == '-') {
			options.insert(i);
		}
	}
	return options;
}

bool can_win(set<int>& options) {
	if (options.size() == 0)
		return true;
	set<int> backup(options);
	set<int> removed;
	bool res = false;
	int j;
	for (set<int>::iterator i = backup.begin(); i != backup.end() and not res; i++) {
		for (j = *i - 1;j < *i + 2; j++) {
			set<int>::iterator fi = options.find(j);
			if (fi != options.end()) {
				removed.insert(*fi);
				options.erase(fi);
			}
		}
		bool t = can_win(options);
		//cout << options.size() << endl;
		//cout << removed.size() << endl;
		options.insert(removed.begin(), removed.end());
		removed.clear();
		res = res || !t;
		//cout << options.size() << endl;
		//cout << removed.size() << endl;
		//cout << endl;
	}

	return res;
}

int main() {
	string board = "+-----+----+";
	set<int> options;
	options = create_options(board);
	// cout << options.size() << endl; // prints !!!Hello World!!!
	for (set<int>::iterator iter = options.begin(); iter != options.end(); iter++) {
		// cout << *iter << ", ";
	}
	// cout << endl;
	bool res = can_win(options);
	cout << res << endl;
	return 0;
}
