#pragma once

template<typename T>
class Node {
	T value;
	Node<T> *previus, *next;
public:
	Node();
	Node(const T &);
	~Node();
};

