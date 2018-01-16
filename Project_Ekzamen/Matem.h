#pragma once
#include <iostream>
#include <fstream>
#include "Quiz.h"
#include "App.h"

class Matem
{
public:

	Matem();
	~Matem();

	static void start()
	{
		system("cls");

		std::cout << std::endl;
		std::cout << " Данные сдающего: " << std::endl;
		std::cout << std::endl;
		Player pl;
		pl.studentInfo(" ", " ");

		std::cout << " \t\t\t\tТест начался " << std::endl;
		std::cout << std::endl;
		std::cout << " \t\t\t  Колличество вопросов - 10 " << std::endl;
		std::cout << " \t\t\tколличество вариантов ответов - 5 " << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		App app;
		app.start("Matem.txt");
	}
};

