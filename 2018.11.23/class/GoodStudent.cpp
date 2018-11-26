//GoodStudent.cpp
#include "GoodStudent.h"

#include <iostream>

using namespace std;

GoodStudent::GoodStudent()
	:Student{}
{
	std::printf("invoke GoodStudent's default no arg constructor\n");

}

GoodStudent::GoodStudent(double money)
	: Student{ money }
{
	std::printf("invoke GoodStudent's args constructor\n");
}


GoodStudent::~GoodStudent()
{
}