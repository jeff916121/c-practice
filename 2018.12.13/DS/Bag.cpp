#include "Bag.h"



Bag::Bag()
{
}


Bag::~Bag()
{
	delete[] array;
}

Bag::Bag(int size)
	:size{size}
{
	this->array = nullptr;
	int * array = new int[size];
	this->array = array;

}


