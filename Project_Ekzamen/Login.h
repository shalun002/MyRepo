#pragma once
#include <iostream>
#include <string>
#include "Cabinet.h"
#include "Player.h"



class Login
{
	//Cabinet cab;
	Player pl;

public:
	Login();
	~Login();

	void login()
	{
		system("cls");
		std::cout << "\n\n\n\n\n\t\t\t\t\t\t ��� ����� � ������ ������� ������� ����� � ������" << "\n\n\n\n";
		std::cout << "\n\t\t\t\t\t\t\t\t ������� �����:  "; std::cin >> pl.login; 
		std::cout << "\t\t\t\t\t\t\t\t ������� ������: "; std::cin >> pl.password; std::cout << std::endl;


		std::cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t       �������!" << "\n\n\n\n";
		system("pause");
		system("cls");
		//cab.Link();
	}
};

