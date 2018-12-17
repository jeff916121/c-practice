//StackBA.cpp

#include "StackBA.h"

#include <iostream>

StackBA::StackBA()
{
}

StackBA::StackBA(int size)
	:Bag{size},array{nullptr},top{-1}
{
	this->array = new int[size];
}



StackBA::~StackBA()
{
	delete[] array;
}




void StackBA::push(int variable)
{
	if (this->isFull()) {
		std::cout << "Sorry, stack is full and you can't push in anything!\n";
		return;
	}

	array[top + 1] = variable;
	top += 1;
}

int StackBA::pop()
{
	if (this->isEmpty()) {
		std::cout << "Sorry, stack is empty and you can't pop out anything!\n";
		return -1;
	}

	int temp = this->array[this->top];
	this->top -= 1;
	return temp;
}



int StackBA::peek() const
{
	if (this->isEmpty())
		return (-1000);
	else
		return this->array[this->top];
}

int StackBA::isEmpty() const
{
	return (this->top == -1) ? 1 : 0;
}

int StackBA::isFull() const
{
	// start at 0
	return (this->top == (this->size - 1)) ? 1 : 0;
}

void StackBA::status() const
{
	if (this->isEmpty()) {
		std::cout << "Stack is empty\n";
		return;
	}

	if (this->isFull()) {
		std::cout << "Stack is full\n";
		return;
	}
	std::cout << "Stack is not empty and not full\n";
	return;
}