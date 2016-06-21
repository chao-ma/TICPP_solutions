
#include <iostream>
using namespace std;

#define P(A) cout << #A << ": " << (A) << endl;

// Do g++ ch3.31.cpp -D DEBUG -o ch3.31
int main() {
  int a = 1, b = 2, c = 3;
#ifdef DEBUG
  P(a); P(b); P(c);
  P(a + b);
  P((c - a)/b);
#endif
} ///:~
