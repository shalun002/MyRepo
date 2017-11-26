#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Point {   // Создаем класс

private:

	int x;		// Объявляем переменные "х" и "у"
	int y;

public:

	Point() {		// Конструктор по умолчанию
		x = 0;		
		y = 0;		// Инициализируем переменные
	}

	Point(int valueX, int valueY) {   // Конструктор для перегрузки 
		x = valueX;
		y = valueY;
	}

	int getX() {   // Геттер для переменной х
		return x;
	}

	void setX(int valueX) {		// Сеттер для переменной х
		x = valueX;
	}

	int getY() {     // Геттер для переменной у
		return y;
	}

	void setY(int valueY) {       // Сеттер для переменной у
		y = valueY;
	}

	void Print() {		// Метод для вывода информации в консоль

		cout << "X: " << x << "\tY: " << y << endl << endl;
	}

	~Point() {}   // Деструктор
};

int main() {
	setlocale(LC_ALL, "ru");

	Point temp;				// Метод от класса 
	temp.Print();			// Вызов функции(метода)  Print

	Point temp2(2, 15);   // Метод от класса со значениями
	temp2.Print();    // Вызов функции(метода)  Print

	system("pause");
	return 0;
}

