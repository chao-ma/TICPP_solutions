//: C03:StructArray.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
// An array of struct
#include <iostream>
using namespace std;

typedef struct {
  int i, j, k;
} ThreeDpoint;

int main() {
  ThreeDpoint p[10];
  for(int i = 0; i < 10; i++) {
    p[i].i = i + 1;
    p[i].j = i + 2;
    p[i].k = i + 3;
  }
  cout << "sizeof(p) = " << sizeof(p) << endl;
  for (int i = 0; i < 10; i++)
	  cout << "&p[" << i << "] = " <<  reinterpret_cast<long>(&p[i]) << endl;
} ///:~
