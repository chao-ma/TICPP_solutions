//: C03:PointerArithmetic.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
#include <iostream>
using namespace std;

#define TYPE double
#define P(EX) cout << #EX << ": " << EX << endl;

int main() {
  TYPE a[10];
  for(int i = 0; i < 10; i++)
    a[i] = i; // Give it index values
  TYPE* ip = a;
  P(*ip);
  P(*++ip);
  P(*(ip + 5));
  TYPE* ip2 = ip + 5;
  P(*ip2);
  P(*(ip2 - 4));
  P(*--ip2);
  P(ip2 - ip); // Yields number of elements
} ///:~
