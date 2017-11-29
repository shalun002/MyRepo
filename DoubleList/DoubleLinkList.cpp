#include "stdafx.h"
#include "DoubleLinkList.h"

// реализация фукции класса
template <typename T>
DoubleLinkList<T>::DoubleLinkList()
{
	first = last = NULL;
}

template <typename T>
DoubleLinkList<T>::~DoubleLinkList() {

}

template <typename T>
void DoubleLinkList<T>::addToLast(const T &value) {
	if (first == NULL) {
		last = first = new Node<T>(value);
	}
	else {
		// создается 
		T *temp = new Node<T>(value);
		last->next = temp;
		temp->previus = last;
		last = temp;
	}
}

template<typename T>
void DoubleLinkList<T>::addToFirst(const T &) {
	if (first == NULL) {
		last = first = new Node<T>(value);
	}
	else {
		T *temp = new Node<T>(value);
		first->previus = temp;
		temp->next = first;
		first = temp;
	}
}

template<typename T>
void DoubleLinkList<T>::show() {
	if (first == NULL) {
		cout << "List is empty" << endl;
	}
	else {
		for (Node<T> *temp = first; temp != NULL; temp = temp->next) {
			cout << temp->value << '\t';
		}
		cout << endl;
	
		/*Node<T> *temp = first;
		while (temp != NULL) {
			cout << temp->value << '\t';
			temp = temp->next;
		}*/
	}
}
