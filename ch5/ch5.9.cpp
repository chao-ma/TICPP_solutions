#include <iostream>
#include "Stash.h"
using namespace std;

int main() {
	Stash s;
	s.initialize(sizeof(double));
	for (int i = -5; i < 16; i++) {
		double d = i+ 0.25;
		s.add(&d);
	}
	cout << s.count() << endl;
	for (int i = 0; i < s.count(); i++)
		cout << *static_cast<double*>(s.fetch(i)) << endl;
	s.cleanup();
}
