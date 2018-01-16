#pragma once
#include <iostream>
#include <fstream>
#include "Quiz.h"
#include "App.h"
#include "Player.h"



class Russian
{
	Player pl;

public:

	Russian();
	~Russian();

	void start()
	{
		system("cls");

		std::cout << std::endl;
		std::cout << " Данные сдающего: " << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << " Ваше имя: "; std::cin >> pl.name;
		std::cout << " Введите ваш класс: "; std::cin.ignore() >> pl.cource;
		std::cout << std::endl;
				
		std::cout << std::endl;
		std::cout << " \t\t\t\tТест начался " << std::endl;
		std::cout << std::endl;
		std::cout << " \t\t\t  Колличество вопросов - 10 " << std::endl;
		std::cout << " \t\t\tколличество вариантов ответов - 5 " << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		App app; 
		app.start("Russian.txt");
	}
};