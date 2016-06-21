#include <iostream>
using namespace std;

template <typename T>
struct Foo {
	T val;
};

template <typename T>
void setValue(Foo<T> *foo, T val) {
	foo->val = val;
}

template <typename T>
T getValue(Foo<T> *foo) {
	return foo->val;
}

int main() {
	//Foo<int> foo;
	//setValue(&foo, 1);
	Foo<const char*> foo;
	const char* arr = "hello world";
	setValue(&foo, arr);
	cout << getValue(&foo) << endl;
	return 0;
}
