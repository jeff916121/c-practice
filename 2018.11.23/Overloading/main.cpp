//Complexadder.cpp
#include <iostream>

#include "Complex.h"

using namespace std;

int main() {
	Complex c1;
	printf("c1 = (%d) + (%d)i\n", c1.getReal(), c1.getImg());

	Complex c2{ 6,8 };
	printf("c2 = (%d) + (%d)i\n", c2.getReal(), c2.getImg());

	Complex c3(3, -5);
	printf("c3 = (%d) + (%d)i\n", c3.getReal(), c3.getImg());

	Complex *c4;
	c4 = &c1;
	printf("c4 = c1 = (%d) + (%d)i\n", c4->getReal(), c4->getImg());

	Complex c5 = c2 + c3;
	printf("c5 = c2 + c3 = (%d) + (%d)i\n", c5.getReal(), c5.getImg());

	Complex c6 = c2 - c3;
	printf("c6 = c2 - c3 = (%d) + (%d)i\n", c6.getReal(), c6.getImg());

	Complex c7 = -c3;
	printf("c7 = -c3 = (%d) + (%d)i\n", c7.getReal(), c7.getImg());

	system("pause");
	return 0;
}