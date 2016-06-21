#include <iostream>

using namespace std;

int main() {
	int X = 1, Y = 2, Z = 3, A;
	A = X + Y - 2/2 + Z;
	cout << A << endl;
	A = X + (Y - 2)/(2 + Z);
	cout << A << endl;
	cout << (1 << 2 + 3 >= X++ & 0xf) << endl;
	return 0;
}
