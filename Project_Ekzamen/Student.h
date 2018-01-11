#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Menu.h"

class Student
{
public:
	std::string name;  //имя студента
	std::string cource;  // курс студента
	std::string subject; // тест по предмету т.е предмет

	void studentInfo()
	{
		while (true)
		{
			std::cout << std::endl;
			system("cls");
			std::cout << " Введите имя: "; std::cin >> name;
			std::cout << " Введите курс: "; std::cin.ignore() >> cource;
			std::cout << " Выберите предмет: ";
			std::cout << std::endl;
			Menu::Menu::menu(); // вызов функции меню
		}
		
	}

	Student();
	~Student();
};
