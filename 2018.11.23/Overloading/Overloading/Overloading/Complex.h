#pragma once
class Complex
{
	//friend Complex operator+(Complex& lhs, Complex& rhs);
	friend Complex operator-(Complex &lhs, Complex &rhs);
	friend Complex operator-(Complex &c);

public:
	int real;
	int img;
	Complex();
	Complex(int, int);
	~Complex();
	Complex operator+(const Complex& c)const;
	/*Complex operator-(const Complex &c) const;*/
	Complex operator-()const;
	
	void display();
};

