//Complex.h

#pragma once
#include <iostream>

class Complex
{
	//overwrite cin
	friend std::istream& operator>>(std::istream & is, Complex& rhs);
	
	//overwrite cout
	friend std::ostream& operator<<(std::ostream & os, Complex & rhs);


private:
	int real;
	int img;
	char* name;
	

public:

	Complex();

	//move constructor
	Complex(Complex&& source);

	Complex(int real, int img);
	Complex(int real, int img,char * name);
	Complex (const Complex & rhs);
	~Complex();
	
	//move assignment
	Complex& operator=(Complex&& source);

	Complex& operator=(const Complex & rhs);
	Complex operator+(const Complex & rhs) const;
	void operator+=(const Complex & rhs);

	Complex add(const Complex & lhs, const Complex & rhs);

	void setName(char * name);

	void display();
};