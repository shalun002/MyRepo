#pragma once

template <typename T>
class Tree
{
public:
	Nod<T> *root;
	Tree();
	~Tree();

	void add(const T &, Nod<T> &temp = NULL);
	void show(Nod<T> &temp = NULL);
};

