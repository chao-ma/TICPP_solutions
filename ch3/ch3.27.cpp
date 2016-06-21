#include <iostream>
using namespace std;

int main() {
	const int ci[] = {1,2,3,4,5};
	volatile int vi[] = {5,4,3,2,1};
	for (int i = 0; i < 5; i++) {
		int* p = const_cast<int*>(&ci[i]);
		*p = i - 5;
	}
	for (int i = 0; i < 5; i++)
			cout << ci[i] << endl;
	return 0;
}
