// Home_Work_Stack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


///*Задание №1
//Реализуйте класс стека для работы с символами (символьный стек). Стек должен иметь
//фиксированный размер. Также реализуйте набор операций для работы со стеком:
//помещение символа в стек, выталкивание символа из стека, подсчет количества
//символов в стеке, проверку пустой ли стек, проверку полный ли стек, очистку стека,
//получение без выталкивания верхнего символа в стеке.*/
//
//template <typename T>
//class Stack{ 
//private:
//	T ch[5];
//	const int size = 5;
//	T count;
//public:
//	Stack();
//	~Stack();
//	void fullStack();  // функция проверки на полноту стека
//	void push(const T);   // функция добавления в стек
//	void EmptyStack();  // функция проверки на пустоту стека
//	void TopCharacterOnTheStack();  // функция получение без выталкивания верхнего символа в стеке.
//	void ShowStack(); // функция вывода всех символов в стеке.
//	T pop(); // функция выталкивание символа из стека
//	void RemoveStack(); //  функция очистки стека	
//};
//
//// шаблонная функция конструктор Стека
//template<typename T>
//Stack<T>::Stack(){
//	ch[5] = size;
//	count = 0;
//}
//
//// шаблонная функция деструктора Стека
//template<typename T>
//Stack<T>::~Stack() {
//}
//
//// добавления в стек
//template<typename T>
//void Stack<T>::push(const T value) {
//	if (count < size) {
//		ch[count++] = value;
//	}
//	else {
//		cout << "Sorry stack is full" << endl;
//	}
//}
//
//// проверки на пустоту стека
//template<typename T>
//void Stack<T>::EmptyStack() {
//	if (cnt < 1) {
//		cout << " Stack is empty" << endl;
//	}
//	else {
//		cout << " Stack no empty" << endl;
//	}
//}
//
////получение без выталкивания верхнего символа в стеке.
//template<typename T>
//void Stack<T>::TopCharacterOnTheStack() {
//	if (count > 0) {
//		return ch[count - 1];
//	}
//	else {
//		return '0';
//	}
//}
//
////Вывод всех символов
//template<typename T>
//void Stack<T>::ShowStack() {
//	for (T i = 0; i < count; i++) {
//		cout << ch[i] << " ";
//		cout << endl;
//	}
//
//}
//
//// проверка на полноту стека
//template<typename T>
//void Stack<T>::fullStack(){  // принимает параметры размер и...
//	if (count > size) {
//		cout << "Stack is Full!" << endl;
//	}
//	else {
//		cout << " Stack is not full" << endl;
//	}
//}
//
//
////выталкивание символа из стека
//template<class T>
//T Stack<T>::pop() {    // Pop   — удалить элемент из стека;
//	if (count > 0) {
//		count--;
//	}
//	return ch[count + 1];
//}
//
//// очистка стека
//template<typename T>
//void Stack<T>::RemoveStack()
//{
//	count = 0;
//	cout << "Stack deleted!" << endl;
//}
//
//int main() {
//	setlocale(LC_ALL, "ru");
//
//	Stack<char> st;
//	
//	cout << endl;
//	st.fullStack();
//	cout << endl;
//	cout << " ====================================== " << endl;
//
//	st.push('a');
//	st.push('b');
//	st.push('c');	
//	st.push('d');
//
//	cout << endl;
//	st.ShowStack();
//	cout << endl;
//	cout << " ====================================== " << endl;
//	cout << endl;	
//
//	st.pop();
//	st.ShowStack();
//	cout << endl;
//	cout << " ====================================== " << endl;
//	cout << endl;
//
//	st.RemoveStack();
//	st.ShowStack();
//	cout << endl;
//	cout << " ====================================== " << endl;
//	cout << endl;
//
//	system("pause");
//    return 0;
//}


/*Задание №2
Измените стек из первого задания со статического типа на динамический (при нехватке
свободного места нужно изменить размер внутреннего массива без потери данных).*/

template <typename t>
class stack{ 
private:
	t ch[5];
	const int size = 5;
	t count;
public:
	stack();
	~stack();
	void fullstack();  // функция проверки на полноту стека
	void push(const t);   // функция добавления в стек
	void emptystack();  // функция проверки на пустоту стека
	void topcharacteronthestack();  // функция получение без выталкивания верхнего символа в стеке.
	void showstack(); // функция вывода всех символов в стеке.
	t pop(); // функция выталкивание символа из стека
	void removestack(); //  функция очистки стека	
};

// шаблонная функция конструктор стека
template<typename t>
stack<t>::stack(){
	ch[5] = size;
	count = 0;
}

// шаблонная функция деструктора стека
template<typename t>
stack<t>::~stack() {
}

// добавления в стек
template<typename t>
void stack<t>::push(const t value) {
	if (count < size) {
		ch[count++] = value;
	}
	else {
		cout << "sorry stack is full" << endl;
	}
}

// проверки на пустоту стека
template<typename t>
void stack<t>::emptystack() {
	if (cnt < 1) {
		cout << " stack is empty" << endl;
	}
	else {
		cout << " stack no empty" << endl;
	}
}

//получение без выталкивания верхнего символа в стеке.
template<typename t>
void stack<t>::topcharacteronthestack() {
	if (count > 0) {
		return ch[count - 1];
	}
	else {
		return '0';
	}
}

//вывод всех символов
template<typename t>
void stack<t>::showstack() {
	for (t i = 0; i < count; i++) {
		cout << ch[i] << " ";
		cout << endl;
	}

}

// проверка на полноту стека
template<typename t>
void stack<t>::fullstack(){  // принимает параметры размер и...
	if (count > size) {
		cout << "stack is full!" << endl;
	}
	else {
		cout << " stack is not full" << endl;
	}
}


//выталкивание символа из стека
template<class t>
t stack<t>::pop() {    // pop   — удалить элемент из стека;
	if (count > 0) {
		count--;
	}
	return ch[count + 1];
}

// очистка стека
template<typename t>
void stack<t>::removestack()
{
	count = 0;
	cout << "stack deleted!" << endl;
}

int main() {
	setlocale(lc_all, "ru");

	stack<char> st;
	
	cout << endl;
	st.fullstack();
	cout << endl;
	cout << " ====================================== " << endl;

	st.push('a');
	st.push('b');
	st.push('c');	
	st.push('d');

	cout << endl;
	st.showstack();
	cout << endl;
	cout << " ====================================== " << endl;
	cout << endl;	

	st.pop();
	st.showstack();
	cout << endl;
	cout << " ====================================== " << endl;
	cout << endl;

	st.removestack();
	st.showstack();
	cout << endl;
	cout << " ====================================== " << endl;
	cout << endl;

	system("pause");
    return 0;
}
