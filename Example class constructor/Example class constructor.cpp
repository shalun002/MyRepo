#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;



/* Конструктор класса пример. Зачем нужен. Конструктор с параметрами. Конструктор по умолчанию. */

class CoffeeGrinder {    // Создаем класс CoffeeGrinder

public:						//  модификатор доступа публичный
private:					//  модификатор доступа приватный
protected:					//  модификатор доступа защищенный


private:					//  модификатор доступа приватный (private)

							/*Создается переменнная bool для проверки напряжения в сети */
	bool CheckVoltage() {
		return true;  // ХардКод, постоянно возвращает положительное значени
	}
public:
	//Метод СТАРТ!!!
	void Start() {
		//Проверка на вольтаж
		if (CheckVoltage()) {
			cout << "VJJJJJJJJJ" << endl; // выводится при положительной проверке, если " CheckVoltage() " возвращает " true "
		}
		else {
			cout << "Alarma!!!!!" << endl;		// выводится при отрицательной проверке, если " CheckVoltage() " возвращает " false "
		}
	}
};

int main() {
	setlocale(LC_ALL, "ru");

	CoffeeGrinder coffeeGrinder;         // Создаем объект класса кофе машина

										 /*Вызывается метод Start() класса " CoffeeGrinder " где выведется в консоль результат запуска кофе машины */
	coffeeGrinder.Start();

	system("pause");
	return 0;
}