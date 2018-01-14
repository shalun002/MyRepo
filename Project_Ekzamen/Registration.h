#pragma once
#include <iostream>
#include <string>
#include <fstream>
//#include "Hello.h"




class Registration
{
	//Hello h;

public:

	std::string name;
	std::string surName;
	std::string login;
	std::string pass;
	std::string corPass;

	Registration();
	~Registration();

	void AddInfoToFile(std::string n, std::string p, int c)
	{
		std::ofstream fout;
		fout.open("UserInfo.txt", std::ofstream::app); 
		if (!fout.is_open())
		{ 
			std::cout << "Файл не найден" << std::endl;
		}
		else
		{
			fout << n << std::endl;
			fout << p << std::endl;
			fout << c << std::endl;
			fout << std::endl;
		}

		fout.close();
	}

	
	void registration()
	{
		
			system("cls");
			std::cout << "\n\n";
			std::cout << "\t\t\t\t\t\t\t\t\t Добро пожаловать на форму регистрации!" << "\n\n\n\n";
			std::cout << " Введите имя: "; std::cin >> name;
			std::cout << " Введите фамилию: "; std::cin >> surName;
			std::cout << " Придумайте логин: "; std::cin >> login;
			std::cout << " Придумайте пароль: "; std::cin >> pass;
			std::cout << " Повторите пароль: ";  std::cin >> corPass;
				if (pass == corPass)
				{
					pass = corPass;
					std::cout << "Пароли совпадают" << std::endl;
					std::cout << "\n\n";
					AddInfoToFile(login, pass, 0);
				}
				else std::cout << "Пароли не совпадают"; return;
			std::cout << "\n\n";
			std::cout << "\t\t\t\t\t Поздравляем! Вы успешно зарегистрировались. Теперь вам необходимо авторизироваться для прохождения тестирования." << "\n\n\n\n";
			system("pause");
			system("cls");

			//h.hello();		
	}
};

