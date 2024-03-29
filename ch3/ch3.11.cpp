//: C03:Boolean.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
// Relational and logical operators.
#include <iostream>
using namespace std;

int main() {
  double i,j;
  cout << "Enter a double: ";
  cin >> i;
  cout << "Enter another double: ";
  cin >> j;
  cout << "i > j is " << (i > j) << endl;
  cout << "i < j is " << (i < j) << endl;
  cout << "i >= j is " << (i >= j) << endl;
  cout << "i <= j is " << (i <= j) << endl;
  cout << "i == j is " << (i == j) << endl;
  cout << "i != j is " << (i not_eq j) << endl;
  cout << "i && j is " << (static_cast<bool>(i) && static_cast<bool>(j)) << endl;
  cout << "i || j is " << (static_cast<bool>(i) || static_cast<bool>(j)) << endl;
  cout << " (i < 10) && (j < 10) is "
       << ((i < 10) && (j < 10))  << endl;
} ///:~
