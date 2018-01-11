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
	std::string name;  //��� ��������
	std::string cource;  // ���� ��������
	std::string subject; // ���� �� �������� �.� �������

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
			menu.menu(); // ����� ������� ����
		}
		
	}

	Student();
	~Student();
};
