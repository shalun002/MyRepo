#include <iostream>
#include <string>
#include <fstream>
#include "Russian.h"
#include <Windows.h>

class Menu
{
public:

	Menu() {}
	~Menu() {}

	static void menu()
	{
		while (true) {
			std::cout << std::endl;
			std::cout << " 1. Тест по предмету русский язык " << std::endl;
			std::cout << " 2. Тест по предмету математика " << std::endl;
			std::cout << " 3. Тест по предмету история " << std::endl;
			std::cout << " 4. Пройти тест в другое время " << std::endl;
			std::cout << std::endl;
			std::cout << "-------------------------------------" << std::endl;
			std::cout << std::endl;

			int choiсe;
			std::cout << "Ваш выбор - "; std::cin >> choiсe;
			switch (choiсe) {
			case 1: system("cls");
				std::cout << " Вы выбрали тест по предмету русский язык " << std::endl;
				Russian::start();
				break;
			case 2: system("cls");  break;
			case 3: system("cls");  break;
			case 4: system("cls");  break;
			case 5: default:
				break;
			}
			break;
		}
	}
};


class Student
{
public:
	std::string name;  //имя студента
	std::string cource;  // курс студента
	std::string subject; // тест по предмету т.е предмет

	void studentInfo()
	{
		std::cout << " Введите имя: "; std::cin >> name;
		std::cout << " Введите курс: "; std::cin.ignore() >> cource;
		std::cout << " Выберите предмет: ";
		std::cout << std::endl;
		Menu::Menu::menu(); // вызов функции меню
	}

	Student(std::string &name, std::string &corce, std::string &subject)
	{
		this->name = name;
		this->cource = corce;
		this->subject = subject;
	}

	Student() {}
	~Student() {};
};


int main()
{
	setlocale(LC_ALL, "ru");

	Student st;
	st.studentInfo();

	system("pause");
	return 0;
}