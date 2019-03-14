// Source.cpp

#include <iostream>

#include "LinkedList.h"

using namespace std;


int main(){


	LinkedList* list = new LinkedList();

	std::cout << "deleteLast()" << endl;
	list->deleteLast();

	std::cout << "deleteData(2)" << endl;
	list->deleteData(2);

	std::cout << "traverse()" << endl;
	list->traverse();

	std::cout << "insertFirst(1)" << endl;
	list->insertFirst(1);

	std::cout << "traverse()" << endl;
	list->traverse();

	std::cout << "insertLast(3)" << endl;
	list->insertLast(3);

	std::cout << "traverse()" << endl;
	list->traverse();

	std::cout << "insertFirst(2)" << endl;
	list->insertFirst(2);

	std::cout << "traverse()" << endl;
	list->traverse();

	std::cout << "insertFirst(2)" << endl;
	list->insertFirst(2);

	std::cout << "traverse()" << endl;
	list->traverse();

	std::cout << "deleteLast()" << endl;
	list->deleteLast();

	std::cout << "traverse()" << endl;
	list->traverse();

	std::cout << "deleteData(2)" << endl;
	list->deleteData(2);

	std::cout << "traverse()" << endl;
	list->traverse();

	std::cout << "deleteData(5)" << endl;
	list->deleteData(5);

	std::cout << "traverse()" << endl;
	list->traverse();

	std::cout << "deleteData(1)" << endl;
	list->deleteData(1);

	std::cout << "traverse()" << endl;
	list->traverse();

	// list->~LinkedList();
	system("pause");
	return 0;
}