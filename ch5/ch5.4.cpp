#include <iostream>
using namespace std;

class A;
class B;

class A {
public:
	void call_b(B& b);
	void print();
};

class B {
public:
	void call_a(A& a);
	void print();
};

void A::print() {
	cout << "This is A" << endl;
}

void B::print() {
	cout << "This is B" << endl;
}

void A::call_b(B& b) {
	b.print();
}

void B::call_a(A& a) {
	a.print();
}

int main() {
	A a;
	B b;
	a.call_b(b);
	b.call_a(a);
	return 0;
}
