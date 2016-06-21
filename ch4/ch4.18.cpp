#include <iostream>
using namespace std;

char* copy_string(const char* input) {
	int size = 0;
	while(input[size]!=0)
		size++;
	size++;
	cout<<size<<endl;
	char* res = new char[size];
	for (int i = 0; i < size; i++) {
		res[i] = input[i];
	}
	cout << input << endl;
	cout << res << endl;
	cout << reinterpret_cast<const void*>(input) << endl;
	cout << reinterpret_cast<const void*>(res) << endl;
	return res;
}

int main() {
	char* x = copy_string("hello world");
	delete[] x;
	return 0;
}
