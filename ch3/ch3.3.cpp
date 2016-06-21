#include <iostream>

using namespace std;

#define CEILING 19

int main() {
	bool indicators[CEILING];
	int i, j;
	for (i = 0; i < CEILING; i++) {
		indicators[i] = true;
	}
	for (i = 1; i < CEILING; i++) {
		if (indicators[i]) {
			cout << i + 1 << ", ";
			for (j = 2; j * (i + 1) - 1 < CEILING; j++) {
				indicators[j * (i + 1) - 1] = false;
			}
		}
	}
	return 0;
}
