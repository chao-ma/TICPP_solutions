#include <iostream>
using namespace std;

class A;
class B;
class C;

class B {
public:
	int get_a(A& a);
};

class C {
public:
	int get_a(A& a);
};

class A {
private:
	int a;
	friend class B;
	friend int C::get_a(A& a);
public:
	void set_a();
};

void A::set_a() {
	a = -1;
}

int B::get_a(A& a) {
	return a.a;
}

int C::get_a(A& a) {
	return a.a;
}


int main() {
	A a;
	B b;
	C c;
	a.set_a();
	cout << b.get_a(a) << endl;
	cout << c.get_a(a) << endl;
	return 0;
}
