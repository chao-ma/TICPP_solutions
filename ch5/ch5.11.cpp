#include <iostream>
#include "Stack2.h"
using namespace std;

int main() {
	Stack s;
	s.initialize();
	for (int i = -5; i < 13; i++) {
		double* val = new double; //mem leak
		*val = i + 0.25;
		s.push(val);
	}
	double* p=static_cast<double*>(s.pop());
	while (p != 0) {
		cout << *p << endl;
		p=static_cast<double*>(s.pop());
	}
	s.cleanup();
	return 0;
}
