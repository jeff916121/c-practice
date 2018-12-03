//Source.cpp
#include <iostream>
#include "Complex.h"

int main() {
	Complex c1 = Complex{};
	Complex c2{ 3,4 };
	Complex c3{ c1 };
	Complex c4 = c2;

	c1.display();
	c2.display();
	c3.display();
	c4.display();

	system("pause");
	return 0;
}