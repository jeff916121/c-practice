//Complex.cpp
#include "Complex.h"

#include <iostream>
#include <string.h>

using namespace std;

Complex::Complex()
	: real{0},img{0}, name{ nullptr }
{
	printf("invoke default no arg constructor\n");
	this->name = new char[1];
	this->name[0] = '\0';
}
Complex::Complex(int real, int img)
	: real{ real }, img{ img }, name{ nullptr }
{
	printf("invoke args constructor\n");
	this->name = new char[1];
	this->name[0] = '\0';

}


Complex::Complex(int real, int img, char * name)
	: real{real},img{img}, name{nullptr}
{
	printf("invoke args constructor\n");
	size_t size = strlen(name) + 1;
	this->name = new char[size];
	strcpy_s(this->name, size, name);
   
}

Complex::Complex(const Complex & rhs)
	:real{rhs.real},img{rhs.img},name{nullptr}
{
	printf("invoke copy constructor\n");
	size_t size = strlen(rhs.name) + 1;
	this->name = new char[size];
	strcpy_s(this->name, size, rhs.name);
}



Complex::~Complex()
{
	printf("invoke destructor\n");
	delete[] name;
}

Complex & Complex::operator=(const Complex & rhs)
{
	printf("invoke copy assignment\n");
	this->real = rhs.real;
	this->img = rhs.img;
	size_t size = strlen(rhs.name) + 1;
	this->name = new char[size];
	strcpy_s(this->name, size, rhs.name);
	return *this;
}

Complex Complex::operator+(const Complex & rhs) const
{
	printf("invoke + operator\n");
	return Complex{ this->real + rhs.real,this->img + rhs.img};
}

void Complex::operator+=(const Complex & rhs)
{
	printf("invoke += operator\n");
	this->real = this->real + rhs.real;
	this->img = this->img + rhs.img;

}

Complex Complex::add(const Complex & lhs, const Complex & rhs)
{
	
	return Complex{ lhs.real + rhs.real, lhs.img + rhs.img };

}

void Complex::setName(char * name)
{
	size_t size = strlen(name) + 1;
	this->name = new char[size];
	strcpy_s(this->name, size, name);
}

void Complex::display()
{
	printf("(%s) = (%d)+(%d)i\n",name,real,img);
}