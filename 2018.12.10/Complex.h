//Complex.h

#pragma once
class Complex
{
private:
	int real;
	int img;
	char* name;

public:
	Complex();
	Complex(int real, int img);
	Complex(int real, int img, char * name);
	Complex(const Complex & rhs);
	~Complex();

	Complex& operator=(const Complex & rhs);
	Complex operator+(const Complex & rhs) const;
	void operator+=(const Complex & rhs);

	Complex add(const Complex & lhs, const Complex & rhs);

	void setName(char * name);

	void display();
};