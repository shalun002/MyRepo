#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Cabinet.h"
#include "Player.h"
#include "Registration.h"



class Login
{
	Registration reg;
	Cabinet cab;
	Player pl;

public:
	Login();
	~Login();


	
	std::vector <Registration> registration;
	void login(std::string filename)
	{
		system("cls");		
		std::cout << "\n\n\n\n\n\t\t\t\t\t\t Для входа в личный кабинет введите логин и пароль" << "\n\n\n\n";
		std::cout << "\n\t\t\t\t\t\t\t\t Введите логин:  "; std::cin >> pl.login;
		std::cout << "\t\t\t\t\t\t\t\t Введите пароль: "; std::cin >> pl.pass; std::cout << std::endl;
		std::ifstream fin(filename);   //создаем объект потока istream  по имени fin
																		//который инициализируется  именем fileName,
																		//вызывается функция file.open();
		if (!fin.is_open())			// Проверка файла на присутствие
		{
			std::cout << "Файл не найден" << std::endl;
			system("pause");
			system("cls");
		}
		else if (fin.is_open())
		{	
			std::string temp;
			bool b = true;
			while (getline(fin, temp))
			{
				if (temp == pl.login+":"+pl.pass)
				{
					std::system("cls");
					std::cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\tДобро пожаловать Уважаемый " << pl.login << std::endl;
					std::cout << std::endl;
					std::cout << std::endl;
					std::cout << std::endl;
					system("pause");
					system("cls");
					
					b = false;
					break;
				}
			}
			fin.close();
			if (b)
			{
				std::cout << "\n\n\n\n\n\t\t\t\t\tПользователь не найден. Проверьте логин или пароль, или зарегистрируйтесь.";
				std::cout << std::endl;
				system("pause");
				system("cls");
			}
			else 
			{
				cab.Link(); 
			}
		}
	}
};