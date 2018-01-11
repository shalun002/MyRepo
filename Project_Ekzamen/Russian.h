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
		system("cls");
		std::cout << " \t\t\t\tTest started " << std::endl;
		std::cout << std::endl;
		std::cout << " \t\t\t  Number of questions - 10 " << std::endl;
		std::cout << " \t\t\tFor each question - 5 answers " << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		App app;
		app.start("Russian.txt");
	}
};