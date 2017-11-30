#pragma once

template <typename T>
class Tree
{
public:
	Nod<T> *root;
	Tree();
	~Tree();

	void add(const T &, Hode<T> &);
};

