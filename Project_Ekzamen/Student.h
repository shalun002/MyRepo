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
		std::cout << " Enter your name: "; std::cin >> name;           // Вводим имя студента
		std::cout << " Enter a course: "; std::cin.ignore() >> cource; // Вводим курс
		std::cout << " Select item: ";  std::cin >> subject;
		std::cout << std::endl;				
	}

	Student();
	~Student();
};
