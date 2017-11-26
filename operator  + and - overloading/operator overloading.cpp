#include <iostream>
#include <string>
using namespace std;


/*Перегрузка оператора сложения и вычитания. Перегрузка операторов пример.*/


class MyClass {
private:
	int x;
	int y;
public:

	MyClass(){}
	MyClass(int valueX, int valueY) // Конструктор класса
	{
		x = valueX; // Присваиваем значения "х" 
		y = valueY; // // Присваиваем значения  "у"
	}

	//bool operator ==(const MyClass &other) {				// Перегрузка оператора ==
	//	return this->x == other.x && this->y == other.y;
	//}


	//bool operator !=(const MyClass &other) {				// Перегрузка оператора !=
	//	return !(this->x == other.x && this->y == other.y);
	//}

	MyClass operator +(const MyClass &other) {   //Перегрузка оператора сложения.
		MyClass temp;
		temp.x = this->x + other.x;
		temp.y = this->y + other.y;
		return temp;
	}
	
	// Сначало пишем название класса, потом пишем слово "operator", ну и собственно сам оператор, который необходимо перегрузить
	MyClass operator -(const MyClass &other) {   /* Перегрузка оператора вычитания. В круглых скобках "const" означает, что значения при перегрузке меняться не будут. Далее идет название класса
											        и некая переменная "other", которая принимает значения по ссылке, а не создает локальную копию*/
	// Некая временная переменная "temp"
		MyClass temp;  
		temp.x = this->x - other.x;
		temp.y = this->y - other.y;
		return temp;
	}

	~MyClass() {}
};


int main() {
	setlocale(LC_ALL, "ru");

	MyClass a(4, 5);  // объект от класса
	MyClass b(4, 4);

	MyClass c = a + b;
	//MyClass c = a - b;


	//bool result = a == b;
	//bool result = a != b;

	system("pause");
	return 0;
}