//Complex.cpp
#include "Complex.h"
#include <iostream>

Complex::Complex()
	:real{ 0 }, img{ 0 }
{
	std::cout << "invoke default no arg constructor" << std::endl;
}

Complex::Complex(int real, int img)
	: real{ real }, img{ img }
{
	std::cout << "invoke args constructor" << std::endl;
}

Complex::Complex(const Complex & c1)
	: real{ c1.real }, img{ c1.img }
{
	std::cout << "invoke copy constructor" << std::endl;
}

void Complex::display()
{
	printf("(%d)+(%d)i\n", real, img);
}


Complex::~Complex()
{
	std::cout << "invoke default destructor" << std::endl;
}