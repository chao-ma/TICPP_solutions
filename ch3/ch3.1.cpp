#include "ch3.1.h"
#include <iostream>

using namespace std;

void func1(int v1) {
	cout << "calling: void func1(int v1)" << endl;
}

void func2(int v1, float v2, char v3) {
	cout << "calling: func2(int v1, float v2, char v3)" << endl;
}

int func3(float v1, char v2) {
	cout << "calling: int func3(float v1, char v2)" << endl;
	return 0;
}

float func4(int v1) {
	cout << "calling float func4(int v1)" << endl;
	return 0.0f;
}

char func5(int v1, int v2, int v3, float v4) {
	cout << "calling: char func5(int v1, int v2, int v3, float v4)" << endl;
	return 'c';
}
