#pragma once

//template<typename T>
class Node {
public:
	int value;
	Node *previus, *next;
public:
	Node();
	Node(const int &);
	~Node();
};

