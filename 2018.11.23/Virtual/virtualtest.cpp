# include <iostream>
using namespace std;

class A {
public:
	
	void printS1() {
		cout << "A1"<<endl;
	}
	virtual void  printS2() {
	//void  printS2() {
		cout << "A2" << endl;
	}
};
class B : public A{
public:
	void printS1() {
		cout << "B1" << endl;
	}
	virtual void printS2() {
	////void printS2() {
		cout << "B2" << endl;
	}
};

int main() {
	A a1;
	a1.printS1();
	a1.printS2();
	B b1;
	b1.printS1();
	b1.printS2();
	A * b2;
	b2 = &a1;
	b2->printS1();
	b2->printS2();
	b2 = &b1;
	b2->printS1();
	b2->printS2();

	system("pause");
	return 0;
}