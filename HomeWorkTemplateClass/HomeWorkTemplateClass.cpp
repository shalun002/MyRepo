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
¦ RemoveAt – удаление элемента(-ов) с заданной позиции.
*/


template <typename T>
class Mass {
	T *arr;
	int size = 5;
	int count = 0;

public:

	Mass();
	~Mass();

	int getSize() {		// getSize – получение размера массива(количество элементов, под которые выделена память);
		return this->size;
	}

	int getUpperBound() {			// getUpperBound - получение последнего допустимого индекса в массиве
		return count - 1;
	}

	T getAt(int index) {		//  GetAt -получение определенного элемента (по индексу)
		return arr[index];
	}

	T& operator [](int index);


	int operator () (T value, int index) {
		return arr[index] = value;
	}

	int operator = (T value) {		// // Перегрузка оператора =
		return arr[count++] = value;
	}

	void setSize(T size, int grow = 1) {     // setSize(int size, int grow = 1) – установка размера массива 
		if (count < size - 1) {
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

	T getData() {		// GetData – получения адреса массива с данными
		cout << &arr << endl;
		return *arr;
	}

	void IsEmpty();
	void FreeExtra();
	void RemoveAll();
	void Add(T value);
	void Append(Mass<T> &a);
	void show();
	void RemoveAt(int index);
	void InsertAt(T t, int index);


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
T& Mass<T>::operator[](int index)
{
	if (index >= 0 && index < size)
	return arr[index];
}

template<typename T>
void Mass<T>::IsEmpty() {    //  IsEmpty - проверка на занятость массива 
	if (count < 1) {
		cout << "Массив пуст" << endl;
	}
	else {
		cout << "Массив не пуст" << endl;
	}
}

template<typename T>
void Mass<T>::FreeExtra() {		//  FreeExtra - удаляет «лишнюю» память
	size = count;

	T* newArr = new T[size];
	for (int i = 0; i < size; i++)
		newArr[i] = arr[i];
	delete arr;
	arr = newArr;
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
		count--;
	}
	else {
		cout << "Index not correct" << endl;
	}
}

template<typename T>
void Mass<T>::InsertAt(T t, int index) {   // InsertAt – вставка элемента(-ов) в заданную позицию
	if (index < size) {
		int q = 0;
		setSize(size, 5);
		size = size + 1;
		T * newarr = new T[size];
		for (int i = 0; i < index; i++)
			newarr[q++] = arr[i];

		newarr[index] = t;
		q++;
		for (int i = index; i <= count; i++)
			newarr[q++] = arr[i];

		delete arr;
		arr = newarr;
		count++;
	}
	else cout << "Index not correct" << endl;

}

template<typename T>
void Mass<T>::Append(Mass<T> &a) {       // Append – «сложение» двух массивов;
	int tempCount = Mass<T>::count + a.count;
	T *newArray = new T[tempCount];

	int q = 0;

	for (int i = 0; i < count; i++) {
		newArray[q] = arr[i];
		q++;
	}
	for (int i = 0; i < a.count; i++) {
		newArray[q] = a.arr[i];
		q++;
	}
	delete arr;
	count = count + a.count;
	size = count + 1;
	arr = newArray;
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

	ms2.Add('A');
	ms2.Add('B');
	ms2.Add('C');
	ms2.Add('D');
	ms2.Add('E');

	cout << endl;
	cout << "====================================== " << endl;
	cout << "Первый массив! ";  ms1.show();
	cout << endl;
	cout << "Значение индекса '2' первого массива " << endl; cout << ms1.getAt(2);
	cout << endl;
	cout << endl;
	cout << "Вставка элемента(-ов) в заданную позицию первого массива! В данном случае позиция(индекс) '1' с элементом 'm' " << endl;  ms1.InsertAt('m', 1);
	cout << endl;
	cout << "Измененный массив "; ms1.show();
	cout << endl;
	cout << "Установка нового значения для определенного элемента "; ms1.setAT('D', 2);
	cout << endl;
	cout << "Измененный массив "; ms1.show();
	cout << endl;
	cout << "Размер массива " <<  ms1.getSize();
	cout << endl;
	cout << endl;
	cout << "Удаление элемента(-ов) с заданной позиции.  В данном случае позиция(индекс) '3' " << endl; ms1.RemoveAt(3);
	cout << "Измененный массив "; ms1.show();
	cout << endl;
	cout << "Получения адреса массива с данными " << endl; ms1.getData();
	cout << endl;
	cout << "Сложение двух массивов " << endl; ms1.Append(ms2); ms1.show();
	cout << endl;
	cout << "Проверка на занятость массива " << endl; ms1.IsEmpty();
	cout << endl;
	cout << "Получение последнего допустимого индекса в массиве - " <<  ms1.getUpperBound() << endl;
	cout << endl;
	cout << "operator []  = " << ms1[2];
	cout << endl;
	ms1.FreeExtra();
	cout << endl;
	cout << "====================================== " << endl;
	cout << endl;

	



	cout << endl;
	cout << "====================================== " << endl;
	cout << "Второй массив! ";  ms2.show();
	cout << endl;
	cout << "Значение индекса '2' второго массива " << endl; cout << ms2.getAt(2);
	cout << endl;
	cout << endl;
	cout << "Вставка элемента(-ов) в заданную позицию второго массива! В данном случае позиция(индекс) '3' с элементом 'M' " << endl;  ms2.InsertAt('M', 3);
	cout << endl;
	cout << "Измененный массив "; ms2.show();
	cout << endl;
	cout << "Установка нового значения для определенного элемента "; ms2.setAT('r', 1);
	cout << endl;
	cout << "Измененный массив "; ms2.show();
	cout << endl;
	cout << "Размер массива " << ms2.getSize();
	cout << endl;
	cout << endl;
	cout << "Удаление элемента(-ов) с заданной позиции.  В данном случае позиция(индекс) '4' " << endl; ms2.RemoveAt(4);
	cout << "Измененный массив "; ms2.show();
	cout << endl;
	cout << "Получения адреса массива с данными " << endl; ms2.getData();
	cout << endl;
	cout << "Сложение двух массивов " << endl; ms2.Append(ms1); ms2.show();
	cout << endl;
	cout << "Проверка на занятость массива " << endl; ms2.IsEmpty();
	cout << endl;
	cout << "Получение последнего допустимого индекса в массиве - " << ms2.getUpperBound() << endl;
	cout << endl;
	cout << "operator []  = " << ms2[4];
	cout << endl;
	ms2.FreeExtra();
	cout << endl;
	cout << "====================================== " << endl;
	cout << endl;
	

	system("pause");
	return 0;
}

