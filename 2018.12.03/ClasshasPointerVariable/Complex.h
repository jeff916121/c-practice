//Complex.h
#pragma once
class Complex
{
private:
	int real;
	int img;
	char * name;

public:
	Complex();
	Complex(int real, int img, const char* name);
	Complex(const Complex &c1);
	Complex& operator=(const Complex &rhs);
	Complex operator+(const Complex &rhs)const;
	Complex operator-(const Complex &rhs)const;
	Complex operator-()const;
	void display();
	~Complex();
};