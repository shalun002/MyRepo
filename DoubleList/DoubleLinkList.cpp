#include "stdafx.h"
#include "DoubleLinkList.h"

// реализация фукции класса
template <typename T>
DoubleLinkList<T>::DoubleLinkList()
{
	first = last = NULL;
}

template <typename T>
DoubleLinkList::~DoubleLinkList() {

}

template <typename T>
void DoubleLinkList<T>::add(const T &value) {
	if (first == NULL) {
		last = first = new Node<T>(value);
	}
	else {
		last->next = new Node<T>(value);
		last = last->next;
	}
}
