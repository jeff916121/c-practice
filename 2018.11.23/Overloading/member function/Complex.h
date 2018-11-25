//Complex.h
#pragma once
class Complex
{
private:
	int real;
	int img;

public:
	Complex();
	Complex(int, int);
	~Complex();
	Complex operator+(const Complex&) const;
	Complex operator-(const Complex&) const;
	Complex operator-() const;
	int getReal() const;
	int getImg() const;
	void display();
};