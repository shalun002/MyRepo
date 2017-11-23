#include <iostream>
#include <string>
using namespace std;

/*Методы класса
Создание метода класса*/

class Human {    // Создаем класс Human

public:						// модификатор доступа публичный

	string name;
	int age;				// поле  класса с целочисленным типом, которые видны только в этом классе
	int weight; 

	void Print() {				// Метод класса Human
		cout << "Èìÿ: " << name << " " << "Âåñ: " << weight << " " << "Âîçðàñò: " << age << endl;
	}
};

int main() {
	setlocale(LC_ALL, "ru");

	Human human;         // Создаем объект класса
	human.age = 25;		// инициализация полей класса
	human.name = "Afanasyi";
	human.weight = 58;

	human.Print();  //вызов метода(функции) класса Human
	system("pause");
	return 0;
}
