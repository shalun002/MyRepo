#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Menu.h"

class Student
{
	Menu menu;

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
			std::cout << " Enter your name: "; std::cin >> name;
			std::cout << " Enter a course: "; std::cin.ignore() >> cource;
			std::cout << " Select a subject: ";
			std::cout << std::endl;
			menu.menu(); // вызов функции меню
		}
		
	}

	Student();
	~Student();
};
