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
		std::cout << " \tТест начат " << std::endl;
		std::cout << " Колличество вопросов - 10 " << std::endl;
		std::cout << " На каждый вопрос - 5 варианта ответов " << std::endl;
		std::cout << std::endl;
		App app;
		app.start();
	}
};