//main.cpp
#include <iostream>

#include "Complex.h"

using namespace std;

int main() {
	Complex c1;
	printf("c1 : ");
	c1.display();

	Complex c2{ 6,8 };
	printf("c2 : ");
	c2.display();

	Complex c3(3, -5);
	printf("c3 : ");
	c3.display();

	Complex *c4;
	c4 = &c1;
	printf("c4 = c1 : ");
	c4->display();

	Complex c5 = c2 + c3;
	printf("c5 = c2 + c3 : ");
	c5.display();

	Complex c6 = c2 - c3;
	printf("c6 = c2 - c3 : ");
	c6.display();

	Complex c7 = -c3;
	printf("c7 = -c3 : ");
	c7.display();

	system("pause");
	return 0;
}