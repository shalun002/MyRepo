#pragma once
#include <iostream>
#include <string>
#include "Cabinet.h"



class Login
{
	Cabinet cab;

public:
	Login();
	~Login();

	std::string login;
	std::string password;

	void logIn()
	{
		std::cout << "\n\n\n\n\n\t\t\t\t\t\t ƒл€ входа в личный кабинет введите логин и пароль" << "\n\n\n\n";
		std::cout << "\n\t\t\t\t\t\t\t\t ¬ведите логин:  "; std::cin >> login; 
		std::cout << "\t\t\t\t\t\t\t\t ¬ведите пароль: "; std::cin >> password; std::cout << std::endl;


		std::cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t       ”спешно!" << "\n\n\n\n";
		system("pause");
		system("cls");
		cab.Link();
	}
};

