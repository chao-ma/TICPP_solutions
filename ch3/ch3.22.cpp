#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
	cout << sizeof(long double) << endl;
  for(int i = 1; i < argc; i++) {
    cout << atol(argv[i]) << endl;
    cout << atof(argv[i]) << endl;
  }
} ///:~
