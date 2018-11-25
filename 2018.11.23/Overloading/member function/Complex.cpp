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

Complex Complex::operator+(const Complex &c2) const
{
	return Complex(this->real + c2.real, this->img + c2.img);
}

Complex Complex::operator-(const Complex &c2) const
{
	return Complex(this->real - c2.real, this->img - c2.img);
}

Complex Complex::operator-() const
{
	return Complex(-this->real, -this->img);
}

int Complex::getReal() const
{
	return this->real;
}

int Complex::getImg() const
{
	return this->img;
}
void Complex::display()
{
	printf("complex = (%d) + (%d)i\n", this->getReal(), this->getImg());
}