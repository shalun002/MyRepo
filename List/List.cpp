// List.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

template <class T>
class Element {
	T value;
	Element<T> *next;
public:
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
	void addToElements(Element<T>,const T &);
	Element<T> *first;
public:
	List();
	~List();

	void add(const T &);
	void addByOneFunction(Element<T>, const T &);

};

template <class T>
List<T>::List() {
	first = NULL;
}

template<class T>
List<T>::~List(){
	delete first;
}

template<class T>
void List<T>::add(const T &t) {
	if (first == NULL) {
		first = new Element(t);
	}
	else {
		addToElements(first->next, t);
	}
}

template<class T>
void List<T>::addToElements(Element<T> element, const T &t) {
	if (element == NULL) {
		element = new Element(t);
	}
	else {
		addToElements(element->next, t);
	}
}

template<class T>
void List<T>::addByOneFunction(Element<T> element = this->first, const T &t) {
	if (element == NULL) {
		element = new Element(t);
	}
	else {
		addByOneFunction(element->next, t);
	}
}


int main() {
	

    return 0;
}

