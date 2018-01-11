#pragma once
#include <iostream>
#include <fstream>
#include "Quiz.h"
#include "App.h"



class Russian
{
	

public:

	Russian();
	~Russian();

	static void start()
	{
		int x = 0;
		std::cout << " Начать тест?  yes - 1 / no - 2       "; std::cin >> x;

		if (x == 1)
		{
			system("cls");
			std::cout << " \tТест начат " << std::endl;
			std::cout << " Колличество вопросов - 10 " << std::endl;
			std::cout << " На каждый вопрос - 4 варианта ответов " << std::endl;
			std::cout << std::endl;
			App app;
			app.start();
			
		}
		else if (x == 2)
		{
			system("cls");
			std::cout << " \tТест закончен " << std::endl;
		}
	}
};