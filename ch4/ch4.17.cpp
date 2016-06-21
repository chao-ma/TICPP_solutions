#include <iostream>
using namespace std;

int main() {
	int* p_i = new int;
	long* p_l = new long;
	char* p_char = new char[100];
	float* p_float = new float[100];
	cout << p_i << endl;
	cout << p_l << endl;
	cout << static_cast<void*>(p_char) << endl;
	cout << p_float << endl;
	delete p_i;
	delete p_l;
	delete[] p_char;
	delete[] p_float;
	return 0;
}
