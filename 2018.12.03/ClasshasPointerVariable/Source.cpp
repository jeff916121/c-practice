//Source.cpp
#include <iostream>
#include "Complex.h"

int main() {
	const char * p = "Jacky";
	Complex c1{ 3,4, p };
	Complex c2{ c1 };
	Complex c3{};
	c3 = c2;
	Complex c4{ 7,8,"operator" };
	c1.display();
	c2.display();
	c3.display();
	c4.display();
	Complex c5;
	c5 = c5;
	c5 = c3 + c4;
	c5.display();
	c5 = c3 - c4;
	c5.display();
	c5 = -c4;
	c5.display();

	system("pause");
	return 0;
}
