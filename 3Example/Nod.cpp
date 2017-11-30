#include "stdafx.h"
#include "Nod.h"

template <typename T>
Nod<T>::Nod()
{
	left = right = NULL;
}

template <typename T>
Nod<T>::~Nod()
{
}

template<typename T>
Nod<T>::Nod(const T &value):Nod()
{
	this->value = value;
}
