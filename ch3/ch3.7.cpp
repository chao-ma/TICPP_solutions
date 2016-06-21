/*
 * ch3.7.cpp
 *
 *  Created on: Apr 18, 2016
 *      Author: chaoma
 */

#include <iostream>

using namespace std;

void ModifyStringRef(string& str) {
	str += " inside ref";
	str[0] = 'I';
}

void ModifyStringPtr(string* str) {
	str->replace(0, 3, "BS");
}

int main() {
	string str = "input string";
	cout << str << endl;
	ModifyStringRef(str);
	cout << str << endl;
	ModifyStringPtr(&str);
	cout << str << endl;
}



