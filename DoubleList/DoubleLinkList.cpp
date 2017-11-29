#include "stdafx.h"
#include "DoubleLinkList.h"

// реализация фукции класса
//template <typename T>
DoubleLinkList::DoubleLinkList()
{
	first = last = NULL;
}

//template <typename T>
DoubleLinkList::~DoubleLinkList() {

}

//template <typename T>
void DoubleLinkList::addToLast(const int &value) {
	if (first == NULL) {
		last = first = new Node(value);
	}
	else {
		// создается 
		Node *temp = new Node(value);
		last->next = temp;
		temp->previus = last;
		last = temp;
	}
}

//template<typename T>
void DoubleLinkList::addToFirst(const int &value) {
	if (first == NULL) {
		last = first = new Node(value);
	}
	else {
		Node *temp = new Node(value);
		first->previus = temp;
		temp->next = first;
		first = temp;
	}
}

//template<typename T>
void DoubleLinkList::show() {
	if (first == NULL) {
		cout << "List is empty" << endl;
	}
	else {
		/*for (Node *temp = first; temp != NULL; temp = temp->next) {
			cout << temp->value << '\t';
		}
		cout << endl;*/
	
		Node *temp = first;
		while (temp != NULL) {
			cout << temp->value << endl;
			temp = temp->next;
		}
		cout << endl;
	}
}
