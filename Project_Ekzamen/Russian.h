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
		std::cout << " \t\t\t\t���� ������� " << std::endl;
		std::cout << std::endl;
		std::cout << " \t\t\t  ����������� �������� - 10 " << std::endl;
		std::cout << " \t\t\t����������� ��������� ������� - 5 " << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		App app;
		app.start("Russian.txt");
	}
};