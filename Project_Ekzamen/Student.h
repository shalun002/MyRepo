#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class Student
{
public:
	std::string name;    // имя студента
	std::string cource;  // курс студента
	int subject; // тест по предмету т.е предмет

	void studentInfo()
	{	
		std::cout << std::endl;
		std::cout << " Введите ваше имя: "; std::cin >> name;           // Вводим имя студента
		std::cout << " Введите ваш класс: "; std::cin.ignore() >> cource; // Вводим курс
		std::cout << " Выберите предмет: ";  std::cin >> subject;
		std::cout << std::endl;				
	}

	Student();
	~Student();
};
