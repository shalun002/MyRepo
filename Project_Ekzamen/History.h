#pragma once
#include <iostream>
#include <fstream>
#include "Quiz.h"
#include "App.h"


class History
{
public:
	History();
	~History();

	static void start()
	{
		system("cls");
		std::cout << " \t\t\t\tTest started " << std::endl;
		std::cout << std::endl;
		std::cout << " \t\t\tNumber of questions - 10 " << std::endl;
		std::cout << " \t\t\tFor each question - 5 answers " << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		App app;
		app.start("History.txt");
	}
};

