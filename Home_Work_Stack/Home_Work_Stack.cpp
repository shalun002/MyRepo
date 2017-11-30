// Home_Work_Stack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


/*Задание №1
Реализуйте класс стека для работы с символами (символьный стек). Стек должен иметь
фиксированный размер. Также реализуйте набор операций для работы со стеком:
помещение символа в стек, выталкивание символа из стека, подсчет количества
символов в стеке, проверку пустой ли стек, проверку полный ли стек, очистку стека,
получение без выталкивания верхнего символа в стеке.*/

template <typename T>
class Stack{ 
private:
	T ch[5];
	const T size = 5;
	T count;
public:
	Stack();
	~Stack();
	void fullStack(const T &size, T &count);  // функция проверки на полноту стека
	void push(T symbol);   // функция добавления в стек
	void EmptyStack(T count);  // функция проверки на пустоту стека
	void TopCharacterOnTheStack(T count, T ch);  // функция получение без выталкивания верхнего символа в стеке.
	void ShowStack(T count); // функция вывода всех символов в стеке.
	T pop(); // функция выталкивание символа из стека
	void RemoveStack(T count); //  функция очистки стека	
};

// шаблонная функция конструктор Стека
template<typename T>
Stack<T>::Stack(){
	ch[5] = size;
	count = 0;
}

// шаблонная функция деструктора Стека
template<typename T>
Stack<T>::~Stack() {
}

// добавления в стек
template<typename T>
void Stack<T>::push(T symbol) {
	if (count < size) {
		this->ch[count] = symbol;
		count++;
	}
	else {
		cout << "Sorry stack is full" << endl;
	}
}

// проверки на пустоту стека
template<typename T>
void Stack<T>::EmptyStack(T count) {
	if (cnt < 1) {
		cout << " Stack is empty" << endl;
	}
	else {
		cout << " Stack no empty" << endl;
	}
}

//получение без выталкивания верхнего символа в стеке.
template<typename T>
void Stack<T>::TopCharacterOnTheStack(T count, T ch) {
	if (count > 0) {
		return ch[count - 1];
	}
	else {
		return '0';
	}
}

//Вывод всех символов
template<typename T>
void Stack<T>::ShowStack(T count) {
	for (T i = 0; i < count; i++) {
		cout << ch[i] << " ";
	}
	endl;
}

// проверка на полноту стека
template<typename T>
void Stack<T>::fullStack(const T &size, T &count){  // принимает параметры размер и...
	if (count > size - 1) {
		cout << "Stack is Full!" << endl;
	}
	else {
		cout << " Stack is not full" << endl;
	}
}


//выталкивание символа из стека
template<class T>
T Stack<T>::pop() {    // Pop   — удалить элемент из стека;
	if (count > 0) {
		count--;
	}
	return сh[count + 1];
}

// очистка стека
template<typename T>
void Stack<T>::RemoveStack(T count)
{
	count = 0;
}

int main() {
	setlocale(LC_ALL, "ru");

	Stack<char> st;
	
	st.push('a');
	st.push('b');
	st.push('c');
	st.push('d');


	st.EmptyStack;

	system("pause");
    return 0;
}


/*Задание №2
Измените стек из первого задания со статического типа на динамический (при нехватке
свободного места нужно изменить размер внутреннего массива без потери данных).*/


