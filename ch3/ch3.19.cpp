//: C03:ArrayAddresses.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
#include <iostream>
#include <typeinfo>
using namespace std;

#define TYPE double

int main() {
  TYPE a[10];
  cout << "sizeof(" << typeid(TYPE).name() << ") = "<< sizeof(TYPE) << endl;
  for(int i = 0; i < 10; i++)
    cout << "&a[" << i << "] = "
         << (long)&a[i] << endl;
} ///:~
