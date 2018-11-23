#include "Complex.h"
#include <iostream>
int main() {
	Complex c1 = Complex(3, 5);
	Complex c2(6, 10);
	
	Complex c4;
	
	//lhs=*this rhs=Complex&
	//c4 = c1 + c2;
	//operator+(c1,c2);//friend function no this
	c4 = -c1;
	c4 = c1 - c2;
	//c1.operator-()
	//c1.operator+(c2);//member function -this
	c1.display();
	c2.display();
	c4.display();
	system("pause");
	return 0;
}