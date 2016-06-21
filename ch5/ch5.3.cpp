#include <iostream>
using namespace std;

struct X;

int mutate_x(X& x);

struct X {
private:
	int x;
public:
	int get_x();
	void set_x(int x);
	friend int mutate_x(X& x);
};

void X::set_x(int x) {
	this->x = x;
}

int X::get_x(void) {
	return x;
}

int mutate_x(X& x) {
	x.x = 5;
	return x.x;
}

int main() {
	X x;
	x.set_x(0);
	cout << x.get_x() << endl;
	mutate_x(x);
	cout << x.get_x() << endl;
}
