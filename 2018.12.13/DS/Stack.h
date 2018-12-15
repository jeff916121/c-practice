#pragma once
#include "Bag.h"
class Stack :
	public Bag
{
private:
	int top;
public:
	Stack();
	~Stack();

	Stack(int size);
	void push(int variable);
	int pop();

	int peek() const;

	int isEmpty() const;
	int isFull() const;
	void status() const;
};

