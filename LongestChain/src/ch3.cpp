/*
 * ch3.cpp
 *
 *  Created on: Mar 31, 2016
 *      Author: chaoma
 */

#include <iostream>
#include <string>
using namespace std;

typedef struct Structure1 {
	int i;
	float j;
} Struct1;

char cfunc(int i) {
	if (i == 1) {
		return 'a';
	} else if (i == 2) {
		return 'b';
	} else if (i == 4) {
		return '5';
	}
	return 'd';
}

/*
template <std::size_t N>
struct type_of_size
{
    typedef char type[N];
};

template <typename T, std::size_t Size>
typename type_of_size<Size>::type& sizeof_array_helper(T(&)[Size]);

#define sizeof_array(pArray) sizeof(sizeof_array_helper(pArray))*/

int f2(int t);

long f1(int (&x)[100]) {
	return sizeof(f2(1));
	int (*fp)(int);
	fp = &f2;
	fp(3);
	int (*fp1[2])(int);
	fp1[0] = fp;
}


class A {
public:
	bool operator== (A& a) {
		return true;
	}
};

void removeHat(char cat) {
  for(char c = 'A'; c < cat; c++)
    cout << "  ";
  if(cat <= 'Z') {
    cout << "cat " << cat << endl;
    removeHat(cat + 1); // Recursive call
  } else
    cout << "VOOM!!!" << endl;
}

int main() {
	  char c;
	  unsigned char cu;
	  int i;
	  unsigned int iu;
	  short int is;
	  short iis; // Same as short int
	  unsigned short int isu;
	  unsigned short iisu;
	  long int il;
	  long iil;  // Same as long int
	  unsigned long int ilu;
	  unsigned long iilu;
	  float f;
	  double d;
	  long double ld;
	  cout
	    << "\n char= " << sizeof(c)
	    << "\n unsigned char = " << sizeof(cu)
	    << "\n int = " << sizeof(i)
	    << "\n unsigned int = " << sizeof(iu)
	    << "\n short = " << sizeof(is)
	    << "\n unsigned short = " << sizeof(isu)
	    << "\n long = " << sizeof(il)
	    << "\n unsigned long = " << sizeof(ilu)
	    << "\n float = " << sizeof(f)
	    << "\n double = " << sizeof(d)
	    << "\n long double = " << sizeof(ld)
	    << endl;

	removeHat('A');
	A a;
	A b;
	cout << (a==b);
	cout << "Type in an integer" << endl;
	cin >> i;
	cout << cfunc(i) << endl;
	cout << sizeof(&i) << endl;
}


