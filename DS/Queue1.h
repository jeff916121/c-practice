//Queue1.h
//move element Queue

#pragma once
#include "Bag.h"
class Queue1 :
	public Bag
{
private:
	int* array;
	int rear;
	int front;
public:
	Queue1();
	~Queue1();

	Queue1(int size);

	void push(int variable);
	int pop();

	int peek() const;

	int isEmpty() const;
	int isLimit() const;
	int isFull() const;
	Queue1& changeQueue();

	void status() const;

};

