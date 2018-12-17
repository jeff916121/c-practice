//Complex.cpp
#include "Complex.h"

#include <string.h>

Complex::Complex()
	: real{0},img{0}, name{ nullptr }
{
	printf("invoke default no arg constructor\n");
	this->name = new char[1];
	this->name[0] = '\0';
}


Complex::Complex(Complex && source)
	:real{source.real},img{source.img},name{ source.name }
{
	printf("invoke move constructor\n");
	source.name = nullptr;
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


Complex & Complex::operator=(Complex &&  source)
{
	printf("invoke move assignment\n");
	this->real = source.real;
	this->img = source.img;
	delete[] this->name;
	this->name = source.name;
	source.name = nullptr;
	return *this;
}

Complex & Complex::operator=(const Complex & rhs)
{
	printf("invoke copy assignment\n");
	this->real = rhs.real;
	this->img = rhs.img;
	size_t size = strlen(rhs.name) + 1;
	delete[] this->name;
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
	Complex c = { lhs.real + rhs.real, lhs.img + rhs.img };
	return c;

}

void Complex::setName(char * name)
{
	size_t size = strlen(name) + 1;
	delete[] this->name;
	this->name = new char[size];
	strcpy_s(this->name, size, name);
}

void Complex::display()
{
	printf("(%s) = (%d)+(%d)i\n",name,real,img);
}

std::istream & operator>>(std::istream & is, Complex & rhs)
{
	delete[] rhs.name;
	// 這邊要開多大，其實有瑕疵，要限制使用者的輸入
	rhs.name = new char[100];
	is >> rhs.name;

	// 為了串接
	return is;
}

std::ostream & operator<<(std::ostream & os, Complex & rhs)
{
	os << rhs.name;

	// 為了串接
	return os;
}