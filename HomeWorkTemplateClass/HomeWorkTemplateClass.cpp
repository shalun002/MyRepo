// HomeWorkTemplateClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*Задания для самостоятельной работы:
Задание 1
Создать шаблонный класс-контейнер Array, который представляет собой массив, позволяющий хранить объекты заданного типа. Класс должен реализовывать следующие функции:
¦ GetSize – получение размера массива (количество элементов, под которые выделена память);
¦ SetSize(int size, int grow = 1) – установка размера массива (если параметр size больше предыдущего размера массива, то выделяется дополнительный блок памяти, если нет,
  то «лишние» элементы теряются и память освобождается); параметр grow определяет для какого количества элементов необходимо выделить память, если количество элементов
  превосходит текущий размер массива. Например, SetSize(5, 5); означает, что при добавлении 6-го элемента размер массива становится равным 10, при добавлении 11-го 15 и т. д.;
¦ GetUpperBound - получение последнего допустимого индекса в массиве. Например, если при размере массива 10, вы добавляете в него 4 элемента, то функция вернет 3;
¦ IsEmpty - массив пуст?; Лабораторная работа №12 Лабораторная работа №<Номер дз>
¦ FreeExtra - удалить «лишнюю» память (выше последнего до- пустимого индекса);
¦ RemoveAll – удалить все;
¦ GetAt -получение определенного элемента (по индексу); ¦ SetAt – установка нового значения для определенного элемен- та (индекс элемента должен быть меньше текущего размера массива);
¦ operator [] – для реализации двух предыдущих функций;
¦ Add – добавление элемента в массив (при необходимости массив увеличивается на значение grow функции SetSize);
¦ Append – «сложение» двух массивов;
¦ operator =;
¦ GetData – получения адреса массива с данными;
¦ InsertAt – вставка элемента(-ов) в заданную позицию;
¦ RemoveAt – удаление элемента(-ов) с заданной позиции.*/


template <typename T>
class Mass {
	T *arr;
	int size;
	int count;
public:

	Mass();
	~Mass();

	int getSize() {		// getSize – получение размера массива(количество элементов, под которые выделена память);
		return size;
	}

	int getUpperBound() {			// getUpperBound - получение последнего допустимого индекса в массиве
		return count - 1;
	}

	T getAt(int index) {		//  GetAt -получение определенного элемента (по индексу)
		return arr[index];
	}

	int operator [] (int index) {
		return arr[index];
	}

	int operator () (T value, int index) {
		return arr[index] = value;
	}

	int operator = (T value) {		// // Перегрузка оператора =
		return arr[count++] = value;
	}

	void setSize(T size, int grow = 1) {     // setSize(int size, int grow = 1) – установка размера массива 
		if (count == size - 1) {
			int temp = size + grow;
			T* newarr = new T[temp];
			for (int i = 0; i < size; i++) {
				newarr[i] = arr[i];
				size = temp;
			}
			delete arr;
			arr = newarr;
			this->size = size;
		}
	}
	void setAT(T value, int index);

	int getData() {		// GetData – получения адреса массива с данными
		cout << &arr << endl;
	}

	void IsEmpty();
	void FreeExtra();
	void RemoveAll();
	void Add(T value);
	void Append(T &arr, int &app);
	void show();
	void RemoveAt(int index);
	void InsertAt(T value, int index);


};

template<typename T>
void Mass<T>::setAT(T value, int index) {		//SetAt – установка нового значения для определенного элемен - та(индекс элемента должен быть меньше текущего	размера массива)
	if (index < size) {
		arr[index] = value;
	}
}

template<typename T>
Mass<T>::Mass() {				// шаблонная функция конструктор Стека
	this->arr = new T[size];
	count = 0;
}

template<typename T>
Mass<T>::~Mass() {				// шаблонная функция деструктора Стека
	delete[] arr;
}

template<typename T>
void Mass<T>::IsEmpty() {    //  IsEmpty - проверка на занятость массива 
	if (count < 1) {
		cout << " Stack empty" << endl;
	}
	else {
		cout << " Stack no empty" << endl;
	}
}

template<typename T>
void Mass<T>::FreeExtra() {		//  FreeExtra - удаляет «лишнюю» память
	size = count;

	T* newarr = new int[size];
	for (int i = 0; i < size; i++)
		newarr[i] = arr[i];
	delete arr;
	arr = newarr;
}

template<typename T>
void Mass<T>::RemoveAll() {		// RemoveAll – удалить все
	delete arr;
	count = 0;
	size = 1;
	T * arr = new int[size];
}

template<typename T>
void Mass<T>::Add(T value) { //Add – добавление элемента в массив
	setSize(size, 5);
	arr[count] = value;
	count++;
}

template<typename T>
void Mass<T>::show() {				// Вывод на экран всего массива
	cout << endl;
	for (int i = 0; i < count; i++)
		cout << arr[i] << " ";
	cout << endl;
}

template<typename T>
void Mass<T>::RemoveAt(int index) {		// RemoveAt – удаление элемента(-ов) с заданной позиции.
	if (index < size) {
		int q = 0;
		T * newarr = new T[size];
		for (int i = 0; i < index; i++) {
			newarr[q++] = arr[i];
		}
		for (int i = index + 1; i < size; i++) {
			newarr[q++] = arr[i];
		}
		delete arr;
		arr = newarr;
		this->size = size - 1;
		cnt--;
	}
	else {
		cout << "Index not corr_" << endl;
	}
}

template<typename T>
void Mass<T>::InsertAt(T value, int index) {   // InsertAt – вставка элемента(-ов) в заданную позицию
	if (index < size) {
		int q = 0;
		setSize(size, 5);
		size = size + 1;
		T * newarr = new T[size];
		for (int i = 0; i < index; i++) {
			newarr[q++] = arr[i];
		}
		newarr[index] = value;
		q++;
		for (int i = index; i <= count; i++) {
			newarr[q++] = arr[i];
		}

		delete arr;
		arr = newarr;
		count++;
	}
	else {
		cout << "Index not correct" << endl;
	}
}

template<typename T>
void Mass<T>::Append(T &arr, int &app) {       // Append – «сложение» двух массивов;
	T temp = count + app.count;
	T *newarr = new T[temp];
	int a = 0;
	for (int i = 0; i < count; i++) {
		newarr[q] = arr[i];
		a++;
	}
	for (int i = 0; i < app.count; i++) {
		newarr[a] = app.arr[i];
		q++;
	}
	delete arr;
	count = count + app.count;
	size = count + 1;
	arr = newarray;
}

int main() {
	setlocale(LC_ALL, "ru");

	Mass<char> ms1;
	Mass<char> ms2;

	ms1.setSize(5, 5);   // Устанавливает размер первого массива 
	ms2.setSize(5, 5);	// Устанавливает размер второго массива

	ms1.Add('a');
	ms1.Add('b');
	ms1.Add('c');
	ms1.Add('d');
	ms1.Add('e');

	cout << endl;
	cout << "====================================== " << endl;
	cout << "Первый массив! " << endl;  ms1.show();
	cout << endl;

	cout << "====================================== " << endl;
	cout << "Значение индекса  2 " << endl; cout << ms1.getAt(2);
	cout << endl;


	ms2.Add('A');
	ms2.Add('B');
	ms2.Add('C');
	ms2.Add('D');
	ms2.Add('E');

	cout << "====================================== " << endl;
	cout << "Значение индекса  3"<< endl; cout << ms1.getAt(3);
	cout << endl;

	cout << "====================================== " << endl;
	cout << "Второй массив! " << endl;  ms2.show();
	cout << endl;
	cout << "====================================== " << endl;
	cout << endl;

	cout << "====================================== " << endl;
	cout << "Значение индекса 3 " << endl; cout << ms2.getAt(3);
	cout << endl;

	cout << "Вставка элемента(-ов) в заданную позицию первого массива! " << endl; ms1.InsertAt('m', 1);
	cout << endl;
	cout << "====================================== " << endl;
	cout << endl;

	cout << "Вставка элемента(-ов) в заданную позицию второго массива! " << endl; ms1.InsertAt('m', 1);
	cout << endl;
	cout << "====================================== " << endl;
	cout << endl;

	cout << "Проверка на занятость первого массива " << endl; ms1.IsEmpty();
	cout << endl;
	cout << "====================================== " << endl;
	cout << endl;

	cout << "Проверка на занятость второго массива " << endl; ms2.IsEmpty();
	cout << endl;
	cout << "====================================== " << endl;
	cout << endl;

	ms1.setAT('L', 1);
	ms2.setAT('m', 3);

	ms1.show();

	system("pause");
	return 0;
}

