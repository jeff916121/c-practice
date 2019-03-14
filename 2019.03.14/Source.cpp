// Source.cpp
#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {

	LinkedList* l1 = new LinkedList();

	// test insertFirst

	cout << "traverse()" << endl;
	l1->traverse();

	cout << "deleteLast()" << endl;
	l1->deleteLast();

	cout << "deleteData(1)" << endl;
	l1->deleteData(1);

	cout << "insertFirst(1)" << endl;
	l1->insertFirst(1);

	cout << "traverse()" << endl;
	l1->traverse();

	cout << "insertFirst(2)" << endl;
	l1->insertFirst(2);

	cout << "traverse()" << endl;
	l1->traverse();

	cout << "deleteData(1)" << endl;
	l1->deleteData(1);

	cout << "traverse()" << endl;
	l1->traverse();

	cout << "deleteData(3)" << endl;
	l1->deleteData(3);

	cout << "traverse()" << endl;
	l1->traverse();

	cout << "deleteLast()" << endl;
	l1->deleteLast();

	cout << "traverse()" << endl;
	l1->traverse();

	cout << "insertLast(1)" << endl;
	l1->insertLast(1);

	cout << "traverse()" << endl;
	l1->traverse();

	cout << "insertLast(2)" << endl;
	l1->insertLast(2);

	cout << "traverse()" << endl;
	l1->traverse();

	cout << "deleteLast()" << endl;
	l1->deleteLast();

	cout << "traverse()" << endl;
	l1->traverse();

	cout << "deleteLast()" << endl;
	l1->deleteLast();

	cout << "traverse()" << endl;
	l1->traverse();

	cout << "deleteLast()" << endl;
	l1->deleteLast();

	cout << "traverse()" << endl;
	l1->traverse();

	cout << "deleteLast()" << endl;
	l1->deleteLast();

	cout << "traverse()" << endl;
	l1->traverse();

	system("pause");
	return 0;
}