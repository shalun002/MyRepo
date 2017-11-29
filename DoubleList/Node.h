#pragma once

template<typename T>
class Node
{
	T value;
	Node *previus, *next;
public:
	Node();
	Node(T);
	~Node();
};

