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
		std::cout << std::endl;
		std::cout << " \t\t\t\t���� ������� " << std::endl;
		std::cout << std::endl;
		std::cout << " \t\t\t  ����������� �������� - 10 " << std::endl;
		std::cout << " \t\t\t����������� ��������� ������� - 5 " << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		App app;
		app.start("History.txt");
	}
};

