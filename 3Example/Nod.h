#pragma once
template <typename T>
class Nod
{
public:
	T value;
	Nod<T> *left, *right;

	Nod();
	~Nod();
	Nod(const T &);

};

