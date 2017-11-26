#include <iostream>
#include <string>
using namespace std;


/*Копирование объектов*/


class MyClass{       // создаем класс
public:
	int *data;			// Публичный член класса

	MyClass(int size) {    // Конструктор класса
		this->Size = size;  // размер Size приравниваем к новому размеру size
		this->data = new int[size];
		for (int i = 0; i < size; i++){
			data[i] = i;
		}
		cout << "Конструктор " << this << endl;  // Вывод в консоль Конструктора класса MyClass
	}

	MyClass(const MyClass &other) {			// Конструктор копирования
		this->Size = other.Size;
		this->data = new int[other.Size];
		for (int i = 0; i < other.Size; i++){
			this->data[i] = other.data[i];
		}
		cout << "Конструктор копирования " << this << endl;
	}

	~MyClass() {	//Деструктор класса MyClass
	cout << "Деструктор " << this << endl;  // Вывод в консоль Деструктора класса MyClass
		delete[] data;  // Освобождение памяти
	};

private:
	int Size;     // Приватный член класса

};

int main(){
	setlocale(LC_ALL, "");

	MyClass cl(10);  //Объект класса MyClass
	MyClass cl2(cl);

	return 0;
}
