//Complex.cpp
#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex()
	:real{ 0 }, img{ 0 }
{
}

Complex::Complex(int real, int img)
	: real{ real }, img{ img }
{
}


Complex::~Complex()
{
}

int Complex::getReal() const
{
	return this->real;
}

int Complex::getImg() const
{
	return this->img;
}

Complex operator+(const Complex & left, const Complex & right)
{
	return Complex(left.real + right.real, left.img + right.img);
}

Complex operator-(const Complex & left, const Complex & right)
{
	return Complex(left.real - right.real, left.img - right.img);
}

Complex operator-(const Complex & right)
{
	return Complex(-right.real, -right.img);
}
void Complex::display()
{
	printf("complex = (%d) + (%d)i\n", this->getReal(), this->getImg());
}