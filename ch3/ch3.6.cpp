//: C03:YourPets2.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
#include <iostream>

//#define TYPENUM 3

// run like this:
//g++ -D "TYPENUM=0" ch3.6.cpp -o ch3.6; ./ch3.6


#if TYPENUM == 0
#define TYPE int
#elif TYPENUM == 1
#define TYPE char
#elif TYPENUM == 2
#define TYPE double
#elif TYPENUM == 3
#define TYPE long int
#else
#define TYPE float
#endif

using namespace std;

TYPE dog, cat, bird, fish;

void f(int pet) {
  cout << "pet id number: " << pet << endl;
}

int main() {
  TYPE i, j, k;
  cout << "f(): " << (long)&f << endl;
  cout << "dog: " << (long)&dog << endl;
  cout << "cat: " << (long)&cat << endl;
  cout << "bird: " << (long)&bird << endl;
  cout << "fish: " << (long)&fish << endl;
  cout << "i: " << (long)&i << endl;
  cout << "j: " << (long)&j << endl;
  cout << "k: " << (long)&k << endl;
} ///:~
