#include "stdafx.h"
#include "Node.h"

//template<typename T>
Node::Node()
{
}

//template<typename T>
Node::Node(const int &value)
{
	this->value = value;
	previus = next = NULL;
}


//template<typename T>
Node::~Node()
{
}
