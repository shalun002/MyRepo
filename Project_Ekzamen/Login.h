#pragma once
#include <iostream>
#include <string>
#include "Menu.h"




class Login
{
	Menu menu;

public:
	Login();
	~Login();

	std::string login;
	std::string password;

	void logIn()
	{
		std::cout << "\n\n\n\n\n\t\t\t\t\t\t ��� ����� � ������ ������� ������� ����� � ������" << "\n\n\n\n";
		std::cout << "\n\t\t\t\t\t\t\t\t ������� �����:  "; std::cin >> login; //std::cout << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t ������� ������: "; std::cin >> password; std::cout << std::endl;


		std::cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t       �������!" << "\n\n\n\n";
		system("pause");
		system("cls");
		menu.menu();
	}
};

