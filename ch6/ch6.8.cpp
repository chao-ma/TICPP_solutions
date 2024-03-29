/*
 * ch6.8.cpp
 *
 *  Created on: May 26, 2016
 *      Author: chaoma
 */
#include <iostream>
#include <string>
#include "stack2.h"

using namespace std;

int main() {
	string s[] = {"aa", "bb", "cc","abcde"};
	Stack stack;
	stack.initialize();
	cout << sizeof(s) << endl;
	cout << sizeof(s)/sizeof(string) << endl;
	for (int i = 0; i < sizeof(s)/sizeof(string); i++) {
		cout << static_cast<void*>(&s[i]) << endl;
		stack.push(&s[i]);
	}
	void* p;
	do {
		p = stack.pop();
		if (p != 0) {
			cout<< *static_cast<string*>(p) << endl;
		}
	} while(p != 0);
	stack.cleanup();
	return 0;
}



