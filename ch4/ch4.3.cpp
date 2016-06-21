#include "ch4.3.h"
#include <iostream>
using namespace std;

void Foo::display(int count) {
	for (int i = 0; i < count; i++) {
		val++;
		cout << "Adding ";
	}
	cout << endl;
}
