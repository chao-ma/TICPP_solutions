#include <iostream>
using namespace std;


class Simple {
public:
	Simple();
	~Simple();
};

Simple::Simple() {
	cout << "Simple object is created" << endl;
}

Simple::~Simple() {
	cout << "Simple object is deleted" << endl;
}

int main() {
	Simple simple;
	return 0;
}
