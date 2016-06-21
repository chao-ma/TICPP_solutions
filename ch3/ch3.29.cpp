//: C03:FloatingAsBinary.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
//{L} printBinary
//{T} 3.14159
#include <cstdlib>
#include <iostream>
using namespace std;


// double: sign bit + 11 expo bits + 1.b52b51...b1

/*
 * o:ch3 chaoma$ g++ ch3.29.cpp -o ch3.29; ./ch3.29 -1
1011111111110000000000000000000000000000000000000000000000000000chaoma-macbookpro:ch3 chaoma$ g++ ch3.29.cpp -o ch3.29; ./ch3.29 1
0011111111110000000000000000000000000000000000000000000000000000chaoma-macbookpro:ch3 chaoma$ g++ ch3.29.cpp -o ch3.29; ./ch3.29 2
0100000000000000000000000000000000000000000000000000000000000000chaoma-macbookpro:ch3 chaoma$ g++ ch3.29.cpp -o ch3.29; ./ch3.29 1
0011111111110000000000000000000000000000000000000000000000000000chaoma-macbookpro:ch3 chaoma$ g++ ch3.29.cpp -o ch3.29; ./ch3.29 1.5
0011111111111000000000000000000000000000000000000000000000000000chaoma-macbookpro:ch3 chaoma$ g++ ch3.29.cpp -o ch3.29; ./ch3.29 1.25
0011111111110100000000000000000000000000000000000000000000000000chaoma-macbookpro:ch3 chaoma$ g++ ch3.29.cpp -o ch3.29; ./ch3.29 1.125
0011111111110010000000000000000000000000000000000000000000000000chaoma-macbookpro:ch3 chaoma$ g++ ch3.29.cpp -o ch3.29; ./ch3.29 1.0625
0011111111110001000000000000000000000000000000000000000000000000chaoma-macbookpro:ch3
 */

void printBinary(const unsigned char val) {
  for(int i = 7; i >= 0; i--)
    if(val & (1 << i))
      std::cout << "1";
    else
      std::cout << "0";
} ///:~


int main(int argc, char* argv[]) {
  if(argc != 2) {
    cout << "Must provide a number" << endl;
    exit(1);
  }
  double d = atof(argv[1]);
  unsigned char* cp =
    reinterpret_cast<unsigned char*>(&d);
  for(int i = sizeof(double)-1; i >= 0 ; i -= 2){
    printBinary(cp[i]);
    printBinary(cp[i-1]);
  }
} ///:~
