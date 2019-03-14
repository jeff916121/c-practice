// LinkedList.h

#pragma once

#include "Node.h"

class LinkedList
{
public:
	Node* head;

	LinkedList();
	~LinkedList();

	void insertFirst(int data);
	void insertLast(int data);
	
	void deleteData(int data);
	void deleteLast();
	
	void traverse();

private:
	void insertLast(Node * ptr, int data);
	void deleteData(Node * previous, Node * current, int data);
	void deleteLast(Node * ptr);
	void traverse(Node * ptr);
	void callOutDelete(Node * ptr);
};
