#include <iostream>
using namespace std;

int func(double) {
	return 0;
}

int main() {
	int (*fp)(double);
	fp = func;
	cout << fp(1.0) << endl;
	fp = &func;
	cout << fp(1.0) << endl;
	return 0;
}
