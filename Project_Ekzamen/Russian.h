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
		std::cout << " ������ ����?  yes - 1 / no - 2       "; std::cin >> x;

		if (x == 1)
		{
			system("cls");
			std::cout << " \t���� ����� " << std::endl;
			std::cout << " ����������� �������� - 10 " << std::endl;
			std::cout << " �� ������ ������ - 4 �������� ������� " << std::endl;
			std::cout << std::endl;
			App app;
			app.start();
			
		}
		else if (x == 2)
		{
			system("cls");
			std::cout << " \t���� �������� " << std::endl;
		}
	}
};