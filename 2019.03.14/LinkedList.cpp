// LinkedList.cpp

#include "LinkedList.h"

#include <iostream>
using namespace std;

LinkedList::LinkedList()
{
}

LinkedList::~LinkedList()
{
	if (head != nullptr) {
		callOutDelete(head);
	}
}
void LinkedList::callOutDelete(Node* ptr) {
	if (ptr == nullptr) {
		return;
	}
	callOutDelete(ptr->next);
	delete ptr;
	cout << "Hello" << endl;
}

void LinkedList::insertFirst(int data)
{
	/*if (head == nullptr) {
		head = new Node(data);
		return;
	}*/
	Node* ptr = new Node(data);
	ptr->next = head;
	head = ptr;
}

void LinkedList::insertLast(int data)
{
	if (head == nullptr) {
		head = new Node(data);
		return;
	}
	insertLast(head, data);
}

void LinkedList::insertLast(Node* ptr, int data)
{
	if (ptr->next == nullptr) {
		ptr->next = new Node(data);
		return;
	}
	insertLast(ptr->next, data);
}

void LinkedList::deleteData(int data)
{
	if (head == nullptr) {
		return;
	}
	if (head->data == data) {
		Node* temp = head->next;
		delete head;
		head = temp;
		return;
	}
	deleteData(head,head->next, data);
}

void LinkedList::deleteData(Node* previous, Node* current,int data)
{
	if (current == nullptr) {
		return;
	}
	if (current->data == data) {
		previous->next = current->next;
		delete current;
		return;
	}
	deleteData(current,current->next, data);
}

void LinkedList::deleteLast()
{
	if (head == nullptr) {
		return;
	}
	deleteLast(head);
}

void LinkedList::deleteLast(Node* ptr)
{
	if (ptr->next->next == nullptr) {
		delete ptr->next;
		ptr->next = nullptr;
		return;
	}
	deleteLast(ptr->next);
}

void LinkedList::traverse()
{
	traverse(head);
	std::cout << endl;
	std::cout << endl;
}

void LinkedList::traverse(Node* ptr)
{
	if (ptr == nullptr) {
		std::cout << endl;
		return;
	}
	std::cout << ptr->data << " ";
	traverse(ptr->next);
}