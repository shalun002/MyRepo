// Stack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

template <class T>
class Stack {   // класс Стек
	T*stack;    // указатель на стек
	const int size = 1048576;    // максимальное количество элементов в стеке
	int top;   // номер текущего элемента стека
public:
	Stack();		// конструктор Стека
	~Stack();

	void push(const T &);  // функция добавления элементов в стек
	T pop();				// функция удаления элементов из стека
};

// шаблонная функция конструктор Стека
template <class T>
Stack<T>::Stack() {
	stack = new T[size];  // выделить память под стек
	top = 0;   // инициализируем текущий элемент нулем;
}

// шаблонная функция деструктора Стека
template <class T>
Stack<T>::~Stack() {
	delete[] stack;    // удаляем стек
}

// функция добавления элемента в стек
template<class T>
void Stack<T>::push(const T &t){		// Push — добавить элемент в стек;
	// проверяем размер стека
	if (top + 1 <= size) {	// номер текущего элемента должен быть меньше размера стека
		stack[++top] = t;   // помещаем элемент в стек
	}
}

template<class T>
T Stack<T>::pop() {    // Pop   — удалить элемент из стека;
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