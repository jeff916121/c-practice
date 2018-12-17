//StackBA.h

#pragma once
#include "Bag.h"

class StackBA :
	public Bag
{
private:
	int* array;
	int top;
public:
	StackBA();
	~StackBA();

	StackBA(int size);
	void push(int variable);
	int pop();

	int peek() const;

	int isEmpty() const;
	int isFull() const;
	void status() const;
};

