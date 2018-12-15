#include "Stack.h"

#include <iostream>

Stack::Stack()
{
}


Stack::~Stack()
{
}

Stack::Stack(int size)
	: Bag{ size }
{
	this->top = -1;
}



void Stack::push(int variable)
{
	if (this->isFull()) {
		std::cout << "Sorry, stack is full and you can't push in anything!\n";
		return;
	}
		
	array[top+1] = variable;
	top += 1;
}

int Stack::pop()
{
	if (this->isEmpty()) {
		std::cout << "Sorry, stack is empty and you can't pop out anything!\n";
		return -1;
	}
		
	int temp = this->array[this->top];
	this->top -= 1;
	return temp;
}



int Stack::peek() const
{
	if (this->isEmpty())
		return (-1000);
	else 
		return this->array[this->top] ;
}

int Stack::isEmpty() const
{
	return (this->top == -1) ? 1 : 0;
}

int Stack::isFull() const
{
	// start at 0
	return (this->top == (this->size -1) ) ? 1 : 0;
}

void Stack::status() const
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