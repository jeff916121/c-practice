//Complex.h
#pragma once
class Complex
{
private:
	int real;
	int img;

public:
	Complex();
	Complex(int real, int img);
	Complex(const Complex &c1);
	void display();
	~Complex();
};