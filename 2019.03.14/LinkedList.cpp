#include "LinkedList.h"
#include <iostream>
using namespace std;

void LinkedList::insertFirst(int data)
{
	if (head == nullptr) {
		head = new Node(data);
		return; 
	}
	Node* first = new Node(data);
	first->next = head;
	head = first;

}

void LinkedList::insertLast(int data)
{
	if (head == nullptr) {
		head = new Node(data);
		return;
	}
	insertLast(head,data);
}
void LinkedList::insertLast(Node* node,int data)
{
	if (node==nullptr) {
		return;
	}
	if (node->next == nullptr) {
		node->next = new Node(data);
		return;
	}
	insertLast(node->next,data);
}

void LinkedList::deleteData(int data)
{
	// doesn't find it
	if (head == nullptr) {
		return;
	}
	// find it
	if (head->data == data) {
		head = head->next;
		return;
	}
	// finding
	deleteData(head,head->next, data);
}

void LinkedList::deleteData(Node* prior,Node* node,int data)
{
	// doesn't find it
	if( node == nullptr ) {
		return;
	}
	// find it
	if (node->data == data) {
		prior->next = node->next;
		return;
	}
	// finding
	deleteData(prior->next, prior->next->next,data);
}

void LinkedList::deleteLast()
{
	if (head == nullptr) {
		return;
	}
	if (head->next == nullptr) {
		head = head->next;
		return;
	}
	deleteLast(head);
}
void LinkedList::deleteLast(Node* node)
{
	if (node->next->next == nullptr) {
		node->next = node->next->next;
		return;
	}
	deleteLast(node->next);
}

void LinkedList::traverse()
{

	traverse(head);
	cout << endl;
}
void LinkedList::traverse(Node* node) {
	if (node == nullptr) {
		return;
	}
	printf("%d ",node->data);
	traverse(node->next);
} 

LinkedList::LinkedList()
{
}


LinkedList::~LinkedList()
{
	delete head;
}
