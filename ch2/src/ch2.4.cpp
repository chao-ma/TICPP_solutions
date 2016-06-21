#include <iostream>
#include <fstream>

using namespace std;

int main() {
	std::ifstream input_file("ch2.3.input");
	int counter = 0;
	string token = "bar";
	string word_builder;
	cout << isalpha(' ') << endl;
	if (input_file.is_open()) {
		char buffer;
		while (input_file.read(&buffer, 1)) {
			if (isalpha(buffer)) {
				word_builder += buffer;
			} else {
				if (word_builder.length() > 0) {
					cout << word_builder << endl;
					counter += token == word_builder;
				}
				word_builder = "";
			}
		}
		if (word_builder.length() > 0) {
			cout << word_builder << endl;
			counter += token == word_builder;
		}
		cout << "Counter = " << counter << endl;
	} else {
		cout << "Error opening file." << endl;
	}
	return 0;
}



