/*
 * ch2.2.cpp
 *
 *  Created on: Apr 14, 2016
 *      Author: chaoma
 */
#include <iostream>
#include <cstdlib>
using namespace std;

#define PI 3.1415926
#define PRINT(EX) cout << #EX << " = " << EX <<endl

int main() {
	string radius;
	cin >> radius;
	cout << radius << endl;
	float f_radius = atof(radius.c_str());
	cout << f_radius * f_radius * PI << endl;
	PRINT(radius);
	return 0;
}



