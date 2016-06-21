#include <iostream>
using namespace std;

typedef struct {
	int val;
	void display(int count);
} Foo;

void Foo::display(int count) {
	for (int i = 0; i < count; i++) {
		val++;
		cout << "Adding ";
	}
	cout << endl;
}

int main() {
	Foo foo = {3};
	foo.display(2);
	cout << foo.val << endl;
	return 0;
}
