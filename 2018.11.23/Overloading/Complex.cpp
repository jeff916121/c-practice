#include "Complex.h"
#include <iostream>


Complex::Complex()
{
	std::cout <<"invoke default no arg constructor" << std::endl;
	real = 0;
	img = 0;
	
}

Complex::Complex(int a, int b)
	:real(a),img(b)//initialization list
{
	std::cout << "invoke args constructor" << std::endl;
	
}


Complex::~Complex()
{
}

Complex Complex::operator+(const Complex & c) const
{
	Complex cc{ this->real + c.real,this->img + c.img };
	return cc;
}

Complex Complex::operator-() const
{
	return Complex(-this->real,-this->img);

}

//Complex Complex::operator-(const Complex & c) const
//{
//	return Complex(this->real-c.real,this->img-c.img);
//
//}



void Complex::display()
{
	std::cout << this->real << "+(" <<(*this).img << ")i" << std::endl;
}

//Complex operator+(Complex & lhs, Complex & rhs)
//{
//	return Complex{lhs.real+rhs.real,lhs.img+rhs.img};
//}

Complex operator-(Complex & lhs, Complex & rhs)
{
	return Complex(lhs.real-rhs.real,lhs.img-rhs.img);

}

Complex operator-(Complex & c)
{
	return Complex(-c.real,-c.img);

}
