#include <iostream>
using namespace std;

template <typename T>
struct Foo {
	T val;
	void setValue(T val);
	T getValue();
};

template <typename T>
void Foo<T>::setValue(T val) {
	this->val = val;
}

template <typename T>
T Foo<T>::getValue() {
	return this->val;
}

int main() {
	Foo<const char*> foo;
	foo.setValue("hello world");
	cout << foo.getValue() << endl;
	return 0;
}
