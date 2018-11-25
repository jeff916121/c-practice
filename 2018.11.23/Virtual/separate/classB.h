#pragma once
#include "classA.h"
class classB :
	public classA
{
public:
	classB();
	~classB();
	void displayA1();
	virtual void displayA2();
};

