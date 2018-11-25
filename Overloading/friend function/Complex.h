//Complex.h
#pragma once
class Complex
{
	friend	Complex operator+(const Complex&, const Complex&);
	friend	Complex operator-(const Complex&, const Complex&);
	friend	Complex operator-(const Complex&);

private:
	int real;
	int img;

public:
	Complex();
	Complex(int, int);
	~Complex();
	int getReal() const;
	int getImg() const;
	void display();
};