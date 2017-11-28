// List.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

template <class T>
class Element {
	T value;
	Element<T> *next;
	Element(T);
	~Element();



};
template <class T>
Element<T> ::Element(T value) {
	this->value = value;
	next = NULL;
}

template <class T>
Element<T>::~Element() {
	delete next;
}

template <class T>
class List {
	Element<T> *first;
	List();
	~List();

	void add(const T &);

};
int main()
{
    return 0;
}

