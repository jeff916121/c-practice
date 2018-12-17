//Complex.cpp

#include "Complex.h"
#include <iostream>
#include <string.h>

using namespace std;

Complex::Complex()
	:real{ 0 }, img{ 0 }, name{ nullptr }
{

	std::cout << "invoke default no arg constructor" << std::endl;
}

Complex::Complex(int real, int img, const char* name)
	: real{ real }, img{ img }, name{ nullptr }
{
	std::cout << "invoke args constructor" << std::endl;
	size_t size = std::strlen(name) + 1;
	this->name = new char[size];
	strcpy_s(this->name, size, name);

}

Complex::Complex(const Complex & c1)
	: real{ c1.real }, img{ c1.img }, name{ nullptr }
{
	std::cout << "invoke copy constructor" << std::endl;
	size_t size = std::strlen(c1.name) + 1;
	this->name = new char[size];
	strcpy_s(this->name, size, c1.name);
}

Complex & Complex::operator=(const Complex & rhs)
{
	if (this == &rhs) {
		std::cout << "skip invoking copy assignment" << std::endl;
		return *this;
	}
	std::cout << "invoke copy assignment" << std::endl;
	this->real = rhs.real;
	this->img = rhs.img;
	size_t size = std::strlen(rhs.name) + 1;
	delete[] this->name;
	this->name = new char[size];
	strcpy_s(this->name, size, rhs.name);
	return *this;
}

Complex Complex::operator+(const Complex & rhs) const
{
	std::cout << "invoke adder operation" << std::endl;
	return Complex{ this->real + rhs.real,this->img + rhs.img,"adder" };
}

Complex Complex::operator-(const Complex & rhs) const
{
	std::cout << "invoke subtractor operation" << std::endl;
	return Complex{ this->real - rhs.real,this->img - rhs.img,"subtractor" };
}

Complex Complex::operator-() const
{
	std::cout << "invoke negation operation" << std::endl;
	return Complex{ -this->real,-this->img,"negation" };
}

void Complex::display()
{
	printf("(%d)+(%d)i\n", real, img);
}


Complex::~Complex()
{
	//std::cout << "invoke default destructor" << std::endl;
	std::cout << "invoke destructor" << std::endl;
	delete[] name;
}