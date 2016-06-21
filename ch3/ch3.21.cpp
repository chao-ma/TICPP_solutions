#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	string arr[10];
	ostringstream s;
	for (int i = 0; i < 10; i++) {
		s << "This is string index " << i << '\n';
		arr[i] = s.str();
		s.str(string());
	}
	for (int i = 0; i < 10; i++)
		cout << arr[i];
	return 0;
}
