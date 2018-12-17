// Source.cpp

#include <iostream>

#include "Bag.h"
#include "StackBA.h"
#include "Queue1.h"

using namespace std;

int main() {

	// initialize
	Bag * bag;

	//StackBA s1{ 5 };

	Queue1 s1{ 5 };

	bag = &s1;
	bag->status();

	std::cout << "--------------------------------\n";

	std::cout << "push in integer 1\n";
	bag->push(1);
	bag->status();

	std::cout << "--------------------------------\n";

	std::cout << "pop out\n";
	if(bag->peek()== -1000)
		std::cout << "Sorry, stack is empty and you can't pop out anything!\n";
	else
		std::cout << "After poping out we get " << bag->pop() << endl;
	bag->status();

	std::cout << "--------------------------------\n";

	std::cout << "push in integer 2\n";
	bag->push(2);
	bag->status();

	std::cout << "--------------------------------\n";

	std::cout << "push in integer 3\n";
	bag->push(3);
	bag->status();

	std::cout << "--------------------------------\n";

	std::cout << "pop out\n";
	std::cout << "After poping out we get " << bag->pop() << endl;
	bag->status();

	std::cout << "--------------------------------\n";

	std::cout << "push in integer 4\n";
	bag->push(4);
	bag->status();

	std::cout << "--------------------------------\n";

	std::cout << "push in integer 5\n";
	bag->push(5);
	bag->status();

	std::cout << "--------------------------------\n";

	std::cout << "push in integer 6\n";
	bag->push(6);
	bag->status();

	std::cout << "--------------------------------\n";

	std::cout << "pop out\n";
	if (bag->peek() == -1000)
		std::cout << "Sorry, stack is empty and you can't pop out anything!\n";
	else
		std::cout << "After poping out we get " << bag->pop() << endl;
	bag->status();


	std::cout << "--------------------------------\n";

	std::cout << "pop out\n";
	if (bag->peek() == -1000)
		std::cout << "Sorry, stack is empty and you can't pop out anything!\n";
	else
		std::cout << "After poping out we get " << bag->pop() << endl;
	bag->status();


	std::cout << "--------------------------------\n";

	std::cout << "Testing overflow\n";

	std::cout << "push in integer 7\n";
	bag->push(7);
	bag->status();

	std::cout << "--------------------------------\n";

	std::cout << "push in integer 8\n";
	bag->push(8);
	bag->status();

	std::cout << "--------------------------------\n";

	std::cout << "push in integer 9\n";
	bag->push(9);
	bag->status();

	std::cout << "--------------------------------\n";

	std::cout << "push in integer 10\n";
	bag->push(10);
	bag->status();

	std::cout << "--------------------------------\n";

	std::cout << "push in integer 11\n";
	bag->push(11);
	bag->status();

	std::cout << "--------------------------------\n";

	std::cout << "push in integer 12\n";
	bag->push(12);
	bag->status();

	std::cout << "--------------------------------\n";

	std::cout << "Testing underflow\n";

	std::cout << "pop out\n";
	if (bag->peek() == -1000)
		std::cout << "Sorry, stack is empty and you can't pop out anything!\n";
	else
		std::cout << "After poping out we get " << bag->pop() << endl;
	bag->status();


	std::cout << "--------------------------------\n";

	std::cout << "pop out\n";
	if (bag->peek() == -1000)
		std::cout << "Sorry, stack is empty and you can't pop out anything!\n";
	else
		std::cout << "After poping out we get " << bag->pop() << endl;
	bag->status();


	std::cout << "--------------------------------\n";

	std::cout << "pop out\n";
	if (bag->peek() == -1000)
		std::cout << "Sorry, stack is empty and you can't pop out anything!\n";
	else
		std::cout << "After poping out we get " << bag->pop() << endl;
	bag->status();


	std::cout << "--------------------------------\n";

	std::cout << "pop out\n";
	if (bag->peek() == -1000)
		std::cout << "Sorry, stack is empty and you can't pop out anything!\n";
	else
		std::cout << "After poping out we get " << bag->pop() << endl;
	bag->status();


	std::cout << "--------------------------------\n";

	std::cout << "pop out\n";
	if (bag->peek() == -1000)
		std::cout << "Sorry, stack is empty and you can't pop out anything!\n";
	else
		std::cout << "After poping out we get " << bag->pop() << endl;
	bag->status();


	std::cout << "--------------------------------\n";

	std::cout << "pop out\n";
	if (bag->peek() == -1000)
		std::cout << "Sorry, stack is empty and you can't pop out anything!\n";
	else
		std::cout << "After poping out we get " << bag->pop() << endl;
	bag->status();


	std::cout << "--------------------------------\n";

	system("pause");

	return 0;
}
