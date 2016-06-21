//: C02:Fillvector.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
// Copy an entire file into a vector of string
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
  vector<string> v;
  ifstream in("ch2.5.cpp");
  string line;
  while(getline(in, line))
    v.push_back(line); // Add the line to the end
  string str_builder = "";
  // Add line numbers:
  for(int i = v.size() - 1; i >= 0; i--) {
    //cout << i << ": " << v[i];
    //cout << endl;
    str_builder = v[i] + '\n' + str_builder;
    while (cin.get() != '\n');
    cout << v[i];
  }
  cout << "Whole string: " << str_builder.length() << " " << str_builder << endl;
} ///:~
