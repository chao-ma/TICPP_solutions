#include <iostream>
using namespace std;


class Simple {
private:
	int x;
public:
	void display();
	Simple(int x);
	~Simple();
};

Simple::Simple(int x): x(x) {
	cout << "Simple object is created " << x << ' ' << endl;
}

Simple::~Simple() {
	cout << "Simple object is deleted " << x << ' ' << endl;
}

void Simple::display() {
	cout << x << endl;
}

int main() {
	Simple p[] = {Simple(3), Simple(1), Simple(-4), Simple(0)};
	for (int i = 0; i < sizeof(p)/sizeof(Simple); i++) {
		p[i].display();
	}
	return 0;
}
