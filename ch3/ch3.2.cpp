#include <iostream>

using namespace std;

int main() {
	string line;
	int idx;
	while (cin >> line) {
		if (line == "foo") {
			idx = 0;
		} else if (line == "bar") {
			idx = 1;
		} else if (line == "baz") {
			idx = 2;
		} else if (line == "hello") {
			idx = 3;
		} else if (line == "world") {
			idx = 4;
		} else if (line == "exit" || line == "quit"){
			idx = 5;
		} else {
			idx = 6;
		}
		switch (idx) {
		case 0: cout << "foo" << endl;
		case 1: cout << "bar" << endl;
		case 2: cout << "baz" << endl; break;
		case 3: cout << "you are nice!" << endl; break;
		case 4: cout << "you have big pictures!" << endl; break;
		case 5: cout << "you want to quit." << endl; break;
		default: cout << "type something meaningful" << endl;
		}
		if (idx == 5)
			break;
	}
	return 0;
}
