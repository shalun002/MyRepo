#include <iostream>
#include <string>
using namespace std;



/*Методы класса
Создание метода класса */

class Human {    // Создаем класс Human

public:						//  модификатор доступа публичный
private:					//  модификатор доступа приватный
protected:					//  модификатор доступа защищенный


public:
	int age;				// публичные поля класса с разными типами, которые видны только в этом классе
	int weight;

	void Print() {									// Данный метод выводит значение полей в консоль. Так как метод публичный, он виден в функции main
		cout << age << weight << endl;

		/*  Вызываем приватный метод " PrintName " в публичном методе. Это все возможно, так как это все реализовано  в теле этого класса т.е в фигурных скобках " { } "  */
		PrintName();
	}

	int getName() {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}

private:
	string name;

	/* Данный метод выводит значение полей в консоль. Так как метод "НЕпубличный", он не виден в функции main.
	Данный метод тоже может видет метод Print(). Они друг для друга видимы*/
	void PrintName() {
		cout << name << endl;
	}

	

};

int main() {
	setlocale(LC_ALL, "ru");

	Human human;         // Создаем объект класса

	/*инициализация полей класса*/
	human.age = 25;		
	human.setName = "Afanasyi";
	human.weight = 58;

	/*Вызывается метод Print() класса " Human ". Так как в этом методе есть еще метод " PrintName() ", он тоже выведется в консоль*/
	human.Print();

	system("pause");
	return 0;
}
