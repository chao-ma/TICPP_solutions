#include <iostream>
using namespace std;

float func1(char) {
	return 3.14159;
}

typedef float (*f_p)(char);


f_p EntryImp(int) {
	f_p p = func1;
	return p;
}

int main() {
	f_p (*p)(int);
	p = EntryImp;
	cout << p(0)('c') << endl;
	return 0;
}
