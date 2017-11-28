// Stack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

template <class T>
class Stack {
	T*stack;
	const int size = 1048576;
	int top;
public:
	Stack();
	~Stack();

	void push(const T &);
	T pop();
};

template <class T>
Stack<T>::Stack() {
	//size = 1048576;
	stack = new T[size];
	top = 0;
}

template <class T>
Stack<T>::~Stack() {
	delete[] stack;
}

template<class T>
void Stack<T>::push(const T &t){
	if (top + 1 <= size) {
		stack[++top] = t;
	}
}

template<class T>
T Stack<T>::pop() {
	if (top > 0) {
		top--;
	}
	return stack[top + 1];
}



int main()
{
	setlocale(LC_ALL, "ru");

	Stack <int> stack;
	stack.push(20);
	stack.push(30);
	stack.push(40);
	stack.push(50);

	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;

	system("pause");
    return 0;
}