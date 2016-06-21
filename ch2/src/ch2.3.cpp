#include <iostream>
#include <fstream>

using namespace std;

int main() {
	std::ifstream input_file("ch2.3.input");
	int counter = 0;
	int pos;
	cout << isspace('\n') << endl;
	if (input_file.is_open()) {
		string line;
		while (getline(input_file, line, ' ')) {
			for (pos = line.length() - 1; pos >= 0 and isspace(line[pos]); pos--);
			line.erase(pos + 1, line.length() - pos - 1);
			if (line.length() > 0) {
			    cout << line << endl;
			    counter++;
			}
		}
		cout << "Number of Words: " << counter << endl;
	} else {
		cout << "Error opening file." << endl;
	}
	return 0;
}



