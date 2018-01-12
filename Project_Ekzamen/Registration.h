#pragma once
#include <iostream>
#include <string>




class Registration
{
	std::string name;
	std::string surName;
	std::string login;
	std::string pass;

public:
	Registration();
	~Registration();

	void registration()
	{
		system("cls");
		std::cout << "\n\n";
		std::cout << "\t\t\t\t\t\t\t\t\t Добро пожаловать на форму регистрации!" << "\n\n\n\n";
		std::cout << " Введите имя: "; std::cin >> name; std::cout << std::endl;
		std::cout << " Введите фамилию: "; std::cin >> surName; std::cout << std::endl;
		std::cout << " Придумайте логин: "; std::cin >> login; std::cout << std::endl;
		std::cout << " Придумайте пароль: "; std::cin >> pass; std::cout << "   " << " Повторите пароль: ";  std::cin >> pass;
	}
};

