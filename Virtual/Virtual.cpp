// Virtual.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//параметризованный однонаправленный список
class List {
private:
	class node {
	public:
		int data;
		node *next;
	public:
		node(node *_next) : next(_next)	{}
	};

private:
	class node  *head, *tail;

public:
	void push_front(const int &val) {
		if (empty()) {
			head = new node(tail);
			head->data = val;
		}
		else {
			head = new node(head);
			head->data = val;
		}
	}

public:
	void push_back(const int &val) {
		if (empty()) {
			head = new node(tail);
			head->data = val;
		}
		else {
			node *srh_node = head;
			for (; srh_node->next != tail; srh_node = srh_node->next)
				;
				srh_node->next = new node(tail);
				srh_node->next->data = val;
		}
	}

public:
	int pop_front()	{
		int val = head->data;
		node    *to_del = head;
		head = head->next;

		delete to_del;
		return val;
	}

public:
	int pop_back() {
		node *srh_node = head;

		if (srh_node->next == tail) {
			head = tail;
			int val = srh_node->data;
			delete srh_node;

			return val;
		}
		else {
			for (; (srh_node->next->next != tail); srh_node = srh_node->next)
				;

			int val = srh_node->next->data;
			node* to_del = srh_node->next;
			srh_node->next = srh_node->next->next;
			delete to_del;

			return val;
		}
	}

public:
	bool empty() const {
		return head == tail;
	}

public:
	virtual void clear() {
		node *dl_node;
		for (node *cr_node = head; cr_node != tail;) {
			dl_node = cr_node;
			cr_node = cr_node->next;

			delete dl_node;
		}

		head = tail;
	}

public:
	List() {
		head = tail = new node(0);
	}

public:
	List(const List &l) {
		clear();
		node *cur_node = head;

		for (node* srh_node = l.head; srh_node != l.tail; srh_node = shr_node->next) {
			cur_node->next = new node(tail);
			cur_node->data = srh_node->data;
		}

	}

public:
	virtual ~List() {
		clear();
	}
};


class Queue : public List {
public:
	Queue():List()	{}

public:
	Queue(const Queue& rhs)
		:List(rhs) {}

public:
	~Queue() {}

public:
	inline void push(const int &value){
		List::push_back(value);
	}

public:
	inline int pop() {
		return List::pop_front();
	}
};

class Stack : protected List {
public:
	Stack()
		:List()
	{}

public:
	Stack(const Stack& rhs)
		:List(rhs)
	{}

public:
	~Stack()
	{}

public:
	inline void push(const int &value)
	{
		List::push_front(value);
	}

public:
	inline int pop()
	{
		return List::pop_front();
	}
};

int main()
{
	Queue qi;
	qi.push(1);    qi.push(2);    qi.push(3);

	cout << qi.pop() << endl;
	cout << qi.pop() << endl;
	cout << qi.pop() << endl;

	Stack si;
	si.push(1);    si.push(2);    si.push(3);

	cout << si.pop() << endl;
	cout << si.pop() << endl;
	cout << si.pop() << endl;
	system("pause");
}
