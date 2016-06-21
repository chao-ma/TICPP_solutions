#include <iostream>
using namespace std;

// g++ -S ch4.10.cpp -o ch4.10
// __ZN5Dummy6getValEv:                    ## @_ZN5Dummy6getValEv
// __Z6getValR5Dummy:                      ## @_Z6getValR5Dummy

struct Dummy {
	int val;
	int getVal();
};

int Dummy::getVal() {
	return val;
}

int getVal(Dummy& dummy) {
	return dummy.val;
}

int main() {
	return 0;
}
