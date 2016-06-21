#include <iostream>
using namespace std;

enum Day {
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday,
};

union Auto {
	int i;
	char c;
	long l;
};

int main() {
	Day day = Friday;
	cout << day << endl;
	Auto v;
	v.l = 1L<<35;
	cout << v.l << endl;
	return 0;
}
