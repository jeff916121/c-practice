#include "Node.h"



Node::Node()
	:next{nullptr}
{
}


Node::Node(int data)
	:next{nullptr},data{data}
{
}

Node::~Node()
{
	delete next;
}
