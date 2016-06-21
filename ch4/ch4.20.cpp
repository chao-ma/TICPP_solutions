#include <iostream>
using namespace std;

#define PRINT(type) cout << "size of " << #type << " is " << sizeof(type) << endl

struct AllValue {
	int value;
};

struct AllFunc {
	void print();
};

void AllFunc::print() {

}

struct ValueAndFunction {
	int value;
	void print();
};

void ValueAndFunction::print() {

}

int main() {
	PRINT(AllValue);
	PRINT(AllFunc);
	PRINT(ValueAndFunction);
	return 0;
}
