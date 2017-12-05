// Virtual.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class List {
public:
	List() {}
	virtual ~List() {}
	virtual int remove() = 0;
	virtual void add(const int &) = 0;
};

class Stack :public List {
	int *stack;
	const int size = 1048576;
	int top;
public:
	Stack() {
		stack = new int[size];
		top = 0;
	}
	~Stack() {
		delete[] stack;
	}
	void push(const int &value) {
		if (top + 1 <= size) {
			stack[++top] = value;
		}
	}
	int pop() {
		if (top > 0) {
			top--;
		}
		return stack[top + 1];
	}
	void add(const int &value) {
		push(value);
	}
	int remove() {
		return pop();
	}
};

class Queue :public List
{
	int *queue;
	const int size = 1048576;
	int first, last, cnt;
public:
	Queue() {
		queue = new int[size];
		first = last = cnt = 0;
	}
	~Queue() {
		delete[] queue;
	}
	void enqueue(const int &value) {
		if (cnt < size) {
			queue[last++] = value;
			++cnt;
			if (last > size) {
				last -= size + 1;
			}
		}
	}
	int dequeue() {
		if (cnt > 0) {
			int temp = queue[first++];
			--cnt;
			if (first > size) {
				first -= size + 1;
			}
			return temp;
		}
	}
	int remove() {
		return dequeue();
	}
	void add(const int &value) {
		enqueue(value);
	}
};
int main()
{
	List *stack = new Stack();
	List *queue = new Queue();
	stack->add(1);
	stack->add(2);
	cout << stack->remove() << endl;
	cout << stack->remove() << endl;
	queue->add(1);
	queue->add(2);
	cout << queue->remove() << endl;
	cout << queue->remove() << endl;
	delete stack;
	delete queue;

	system("pause");
	return 0;
}