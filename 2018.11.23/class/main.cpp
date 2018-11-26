//main.cpp

#include <iostream>

using namespace std;

#include "Student.h"

#include "GoodStudent.h"

int main() {
	std::cout << "s1" << endl;
	Student s1;
	s1.countMoney();
	std::cout << endl;

	//this can't be used
	/*std::cout << "s2" << endl;
	Student s2();
	s2.countMoney();
	std::cout << endl;*/

	std::cout << "s2" << endl;
	Student s2 = Student();
	s2.countMoney();
	std::cout << endl;

	std::cout << "s3" << endl;
	Student s3{};
	s3.countMoney();
	std::cout << endl;

	std::cout << "s4" << endl;
	Student s4{ 100 };
	s4.countMoney();
	std::cout << endl;

	std::cout << "s5" << endl;
	Student * s5;
	s5 = &s4;
	s5->countMoney();
	std::cout << endl;

	std::cout << "s6" << endl;
	GoodStudent s6;
	s5 = &s6;
	s5->countMoney();
	std::cout << endl;

	std::cout << "s7" << endl;
	GoodStudent s7{ 200 };
	s5 = &s7;
	s5->countMoney();
	std::cout << endl;

	system("pause");
	return 0;
}