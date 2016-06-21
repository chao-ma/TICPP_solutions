#include <iostream>
using namespace std;


class Simple {
private:
	int x;
public:
	Simple(int x);
	~Simple();
};

Simple::Simple(int x): x(x) {
	cout << "Simple object is created " << x << ' ' << endl;
}

Simple::~Simple() {
	cout << "Simple object is deleted " << x << ' ' << endl;
}

int main() {
	Simple simple(3);
	return 0;
}
