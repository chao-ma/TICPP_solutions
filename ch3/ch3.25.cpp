#include <iostream>
using namespace std;

void printBinary(const unsigned char val) {
  for(int i = 7; i >= 0; i--)
    if(val & (1 << i))
      std::cout << "1";
    else
      std::cout << "0";
} ///:~


int main() {
	float val = -1.5;
	unsigned char *p = reinterpret_cast<unsigned char*>(&val);
	for (int i = sizeof(val) - 1; i >= 0; i--)
		printBinary(*(p+i));
	cout << endl;
	return 0;
}
