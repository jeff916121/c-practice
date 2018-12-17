#include "Queue1.h"

#include <iostream>

Queue1::Queue1()
{
}


Queue1::~Queue1()
{
	delete[] this->array;
}

Queue1::Queue1(int size)
	:Bag{size}, array{ nullptr },rear{-1},front{0}
{
	this->array = new int[size];
}

void Queue1::push(int variable)
{
	if (this->isFull()) {
		std::cout << "You can't push anything into the Queue" << std::endl;
		return;
	}
	if (this->isLimit()) {
		this->changeQueue();
	}
	this->array[rear + 1] = variable;
	this->rear += 1;
}

int Queue1::pop()
{
	if (this->isEmpty()) 
		return -1000;
	int temp = this->array[this->front];
	this->front += 1;
	return temp;
}

int Queue1::peek() const
{
	if (this->isEmpty())
		return -1000;
	return this->array[this->front];
}

int Queue1::isEmpty() const
{
	//return 1 if it's empty
	if (rear == front - 1)
		return 1;
	else
		return 0;
}

int Queue1::isLimit() const
{

	if(((this->rear+1)==this->size)|| ((this->front + 1) == this->size))
		return 1;
	else
		return 0;
}

int Queue1::isFull() const
{
	//return 1 if it's full and here especially for exceed the size
	if (this->rear == 4 && this->front == 0)
		return 1;
	else
		return 0;
}

Queue1& Queue1::changeQueue()
{
	printf("Change Queue size\n");
	printf("initial rear=%d,front=%d\n", this->rear, this->front);
	int * temp = new int[this->size];
	int number = -1;
	for (int counter = 0; counter < this->size; counter++) {
		if (! this->isEmpty()) {
			temp[counter] = this->array[this->front];
			this->front += 1;
			number += 1;
		}
		else
			temp[counter] = 0;
	}
	delete[] this->array;
	this->array = temp;
	temp = nullptr;
	this->rear = number;
	this->front = 0;
	printf("After changing , rear=%d,front=%d\n", this->rear, this->front);
	return *this;
}

void Queue1::status() const
{
	if (this->isEmpty()) {
		std::cout << "Queue is empty\n";
		printf("rear=%d,front=%d\n", this->rear, this->front);
		return;
	}

	if (this->isFull()) {
		std::cout << "Queue is full\n";
		printf("rear=%d,front=%d\n", this->rear, this->front);
		return;
	}
	std::cout << "Queue is not empty and not full\n";
	printf("rear=%d,front=%d\n", this->rear, this->front);
	return;
}
