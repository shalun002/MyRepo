#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Player.h"




class Registration
{
	Player pl;

public:

	Registration();
	~Registration();

	void AddInfoToFile(std::string a, std::string b, std::string c, std::string d)
	{
		std::ofstream fout;
		fout.open("UserInfo.txt", std::ofstream::app); 
		if (!fout.is_open())
		{ 
			std::cout << "Файл не найден" << std::endl;
		}
		else
		{	
			fout <<"Имя "<< a << "  " <<"Фамилия " << b << " " << c << ":" << d << std::endl;
			fout << c << ":" << d << std::endl;
		}
		fout.close();
	}

	
	void registration()
	{
		
		
		system("cls");
		std::cout << "\n\n";
		std::cout << "\t\t\t\t\t\t\t\t\t Добро пожаловать на форму регистрации!" << "\n\n\n\n";
		std::cout << "\t\t\t\t\t\t\t\t\t\t   Введите имя: "; std::cin >> pl.name;
		std::cout << "\t\t\t\t\t\t\t\t\t\t   Введите фамилию: "; std::cin >> pl.surName;
		std::cout << "\t\t\t\t\t\t\t\t\t\t   Придумайте логин: "; std::cin >> pl.login;
		std::cout << "\t\t\t\t\t\t\t\t\t\t   Придумайте пароль: "; std::cin >> pl.pass2;
		std::cout << "\t\t\t\t\t\t\t\t\t\t   Повторите пароль: ";  std::cin >> pl.corPass;

		

		if (pl.pass2 == pl.corPass)
		{
			pl.pass = pl.corPass;
			std::cout << "\n\n";
			std::cout << "\t\t\t\t\t\t\t\t\t\t      Пароли совпадают" << std::endl;
			std::cout << "\n\n";
			std::cout << "\t\t\t\t\t Поздравляем! Вы успешно зарегистрировались. Теперь вам необходимо авторизироваться для прохождения тестирования." << "\n\n\n\n";
			system("pause");
			system("cls");
			std::cout << "\n\n";
			AddInfoToFile(pl.name, pl.surName, pl.login, pl.pass);
		}
		else
		{
			std::cout << "\n\n";
			std::cout << "\t\t\t\t\t\t\t\t\tПароли не совпадают Попробуйте еще раз."; 
			std::cout << "\n\n";
			std::cout << "\n\n";
			system("pause");
			system("cls");
			return;
		}		
	}
};

