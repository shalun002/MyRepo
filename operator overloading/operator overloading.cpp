#include <iostream>
#include <string>
using namespace std;


/*Перегрузка оператора равенства == и не равно !=. Перегрузка логических операторов сравнения.*/


class MyClass {
private:
		int x;
		int y;
public:
	MyClass(int valueX, int valueY) // Конструктор класса
	{
		x = valueX; // Присваиваем значения "х" 
		y = valueY; // // Присваиваем значения  "у"
	}

	bool operator ==(const MyClass &other) {				// Перегрузка оператора ==
		return this->x == other.x && this->y == other.y;
	}
	bool operator !=(const MyClass &other) {				// Перегрузка оператора !=
		return !(this->x == other.x && this->y == other.y);
	}

	
};


int main() {
	setlocale(LC_ALL, "ru");

	MyClass a(4, 5);  // объект от класса
	MyClass b(4, 4);

	bool result = a == b;
	//bool result = a != b;

	cout << result << endl;

	system("pause");
	return 0;
}