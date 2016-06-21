#include <iostream>
using namespace std;

struct Outer {
	struct Inner {
		int value;
		void print();
	};
	Inner inner;
	void print();
};

void Outer::print() {
	cout << "Outter calling inner:"<< endl;
	inner.print();
}

void Outer::Inner::print() {
	cout << "Inner value: " << value << endl;
}

int main() {
	Outer o;
	o.inner.value = 1;
	o.print();
	o.inner.print();
	Outer::Inner i;
	i.value = 2;
	i.print();
	return 0;
}
