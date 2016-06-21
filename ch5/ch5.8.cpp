#include <iostream>
using namespace std;

class A {
private:
	char a;
	char b;
protected:
	char c;
	char d;
public:
	char e;
	char f;
	void showMap();
};

void A::showMap() {
	cout << static_cast<void*>(&a) << endl;
	cout << static_cast<void*>(&b) << endl;
	cout << static_cast<void*>(&c) << endl;
	cout << static_cast<void*>(&d) << endl;
	cout << static_cast<void*>(&e) << endl;
	cout << static_cast<void*>(&f) << endl;
}

int main() {
	A a;
	a.showMap();
	return 0;
}
