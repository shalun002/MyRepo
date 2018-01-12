#pragma once
#include <iostream>
#include "Login.h"
#include "Registration.h"



class Hello
{
	Registration reg;
	Login log;

public:
	Hello();
	~Hello();

	int action = 0;

	void hello()
	{
		while (true)
		{
			std::cout << std::endl;
			std::cout << "Вход- 1" << "   " << "Регистрация- 2" << std::endl;

			std::cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t  Здравствуй, уважаемый пользователь! Рады приветствовать Вас на иформационном портале. " << std::endl;
			std::cout << "\n\n\t\t\t\t\t   Предлагаем всем желающим пройти пробный тест по интересующим вас предметам и сразу получить результат." << std::endl;
			std::cout << "\t\t\t\t\t\t\t      Оцените свой уровень знаний и готовность к предстоящему ЕНТ и КТА. " << std::endl;
			std::cout << "\t\t\t\t\t\t\t   Чтобы приступить к тестированию, необходимо авторизироваться на портале. " << std::endl;
			std::cout << "\t\t\t\t\t\t\tЕсли вы еще не зарегестрированы, предлагаем Вам пройти не сложную регистрацию." << std::endl;
			std::cout << "\n\n\t\t\t\t\t\t\t\t\t       Удачного прохождения теста!!" << std::endl;
			std::cout << "\t\t\t\t\t\t\t\t\t    Время тестирования не ограничено. " << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << "Выберите действие: "; std::cin >> action;

			while (true)
			{
				switch (action)
				{
				case 1: system("cls");
					log.logIn();
					break;
				case 2: system("cls");
					reg.registration();
					break;
				default:
					break;
				}
				break;
			}
		}
		
	}
};

