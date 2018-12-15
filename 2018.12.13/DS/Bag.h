

#pragma once
class Bag
{
protected:
	int size;
	int* array;

public:
	Bag();
	~Bag();
	Bag(int size);

	virtual void push(int variable) = 0;
	virtual int pop() = 0; 
	virtual int peek() const = 0;
	virtual int isEmpty() const = 0;
	virtual int isFull() const = 0;
	virtual void status() const = 0;

};

