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
	int i;
	for (i = 0; i < 5; i++) {
	    Simple simple(i);
	    if (i > 3) {
	    	cout << "Jumping out of loop" << endl;
	    	goto label;
	    }
	}
	label:
	return 0;
}
