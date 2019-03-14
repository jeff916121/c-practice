#pragma once
#include "Node.h"
class LinkedList
{
public:

	Node* head;
	void insertFirst(int data);
	void insertLast(int data);
	void insertLast(Node * node, int data);
	void deleteData(int data);
	void deleteData(Node * prior, Node * node, int data);


	void deleteLast();
	void deleteLast(Node * node);
	void traverse();

	void traverse(Node * node);

	LinkedList();
	~LinkedList();
};

