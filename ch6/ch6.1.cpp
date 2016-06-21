#include <iostream>
using namespace std;


class Simple {
public:
	Simple();
};

Simple::Simple() {
	cout << "Simple object is created" << endl;
}

int main() {
	Simple simple;
	return 0;
}
