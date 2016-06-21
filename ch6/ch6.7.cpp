/*
 * ch6.7.cpp
 *
 *  Created on: May 26, 2016
 *      Author: chaoma
 */

#include <iostream>
using namespace std;

int main() {
	double a1[10] = {1.1, 0, -0.1, 3.14, 2.16};
	for (int i = 0; i < sizeof(a1) / sizeof(double); i++) {
		cout << a1[i] << ", ";
	}
	cout << endl;
	double a2[] = {3, 0, 1.141, 2.424};
	for (int i = 0; i < sizeof(a2) / sizeof(double); i++) {
			cout << a2[i] << ", ";
		}
	cout << endl;
	return 0;
}


