//Student.cpp
#include "Student.h"

#include <iostream>

using namespace std;

void Student::countMoney()
{
	std::cout << "count money:" << this->money << endl;
}

Student::Student()
	:money{ 0 }
{
	std::cout << "invoke Student's default no arg constructor" << endl;
}

Student::Student(double money)
{
	std::cout << "invoke Student's args constructor" << endl;
	(*this).money = money;
}

Student::~Student()
{
}