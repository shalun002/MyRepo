#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Menu.h"

class Student
{
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
			std::cout << " ������� ���: "; std::cin >> name;
			std::cout << " ������� ����: "; std::cin.ignore() >> cource;
			std::cout << " �������� �������: ";
			std::cout << std::endl;
			Menu::Menu::menu(); // ����� ������� ����
		}
		
	}

	Student();
	~Student();
};
