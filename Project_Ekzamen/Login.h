#pragma once
#include <iostream>
#include <string>
#include <vector>
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

	void login()
	{
		system("cls");
		std::vector <Player> user;
		std::cout << "\n\n\n\n\n\t\t\t\t\t\t Для входа в личный кабинет введите логин и пароль" << "\n\n\n\n";
		std::cout << "\n\t\t\t\t\t\t\t\t Введите логин:  "; std::cin >> pl.login; 
		std::cout << "\t\t\t\t\t\t\t\t Введите пароль: "; std::cin >> pl.password; std::cout << std::endl;
		std::ifstream fin("UserInfo.txt");
		if (!fin.is_open())
		{
			std::cout << "Файл не найден" << std::endl;
		}
		else
		{
			std::string temp; 
			while (!fin.eof())
			{
				getline(fin, temp);
				pl.login = temp;
				getline(fin, temp);
				pl.password = temp;
				user.push_back(pl);
				if (pl.ctr <= 3)
				{
					if (pl.login == reg.login && pl.password == reg.pass)
					{
						std::system("cls");
						std::cout << "\n\n\n\n\n\t\t\t\t\t\tДобро пожаловать Уважаемый " << pl.login << std::endl;
						system("pause");
						system("cls");
						cab.Link();
					}
					else
					{
						std::cout << "\n\n\n\n\n\t\t\t\t\t\tПользователь не найден. Пройдите простейшую регистрацию";
						std::cout << std::endl;
					}
				}
				else
				{
					Registration();
				}
			}
		}		
	}
};

