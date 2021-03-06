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

///*Задание №2
//Измените стек из первого задания со статического типа на динамический (при нехватке
//свободного места нужно изменить размер внутреннего массива без потери данных).*/
//
//template <typename T>
//class Stack{ 
//private:
//	T *ch;
//	T size = 5;
//	T count;
//public:
//	Stack();
//	~Stack();
//	void fullStack();  // функция проверки на полноту стека
//	void push(const T &);   // функция добавления в стек
//	void emptyStack();  // функция проверки на пустоту стека
//	void TopCharacterOnTheStack();  // функция получение без выталкивания верхнего символа в стеке.
//	void ShowStack(); // функция вывода всех символов в стеке.
//	T pop(); // функция выталкивание символа из стека
//	void removeStack(); //  функция очистки стека	
//};
//
//// шаблонная функция конструктор стека
//template<typename T>
//Stack<T>::Stack(){
//	ch = new T[size];
//	count = 0;
//}
//
//// шаблонная функция деструктора стека
//template<typename T>
//Stack<T>::~Stack() {
//	delete[] ch;
//}
//
//// добавления в стек
//template<typename T>
//void Stack<T>::push(const T &value) {
//	if (count == size - 1) {
//		int temp = size * 2;
//		char *newch = new char[temp];
//		for (int i = 0; i < size; i++) {
//			newch[i] = ch[i];
//			size = temp;
//		}
//		delete ch;
//		ch = newch;
//	}
//	if (count < size) {
//		this->ch[count] = value; count++;
//	}
//	else {
//		cout << "Sorry stack is full" << endl;
//	}
//}
//
//// проверки на пустоту стека
//template<typename T>
//void Stack<T>::emptyStack() {
//	if (cnt < 1) {
//		cout << " stack is empty" << endl;
//	}
//	else {
//		cout << " stack no empty" << endl;
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
////вывод всех символов
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
//		cout << "stack is full!" << endl;
//	}
//	else {
//		cout << " stack is not full" << endl;
//	}
//}
//
//
////выталкивание символа из стека
//template<class T>
//T Stack<T>::pop() {    // pop   — удалить элемент из стека;
//	if (count > 0) {
//		count--;
//	}
//	return ch[count + 1];
//}
//
//// очистка стека
//template<typename T>
//void Stack<T>::removeStack()
//{
//	count = 0;
//	cout << "stack deleted!" << endl;
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
//	st.push('e');
//	st.push('f');
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
//	st.removeStack();
//	st.ShowStack();
//	cout << endl;
//	cout << " ====================================== " << endl;
//	cout << endl;
//
//	system("pause");
//    return 0;
//}
