#pragma once
#include <string>
#include <fstream>
#include <vector>
#include "Russian.h"
#include "Matem.h"
#include "History.h"


class Menu
{
	Player player;

public:

	Menu();
	~Menu();

	 void menu()
	{
		while (true) 
		{
			std::cout << std::endl;
			std::cout << " ----------------------------------" << std::endl;
			std::cout << std::endl;
			std::cout << " Выберите тест, который вы хотите пройти. " << std::endl;
			std::cout << std::endl;
			std::cout << " 1. Тест по русскому языку " << std::endl;
			std::cout << " 2. Тест по математике " << std::endl;
			std::cout << " 3. Тест по истории " << std::endl;
			std::cout << std::endl;
			std::cout << " ----------------------------------" << std::endl;
						
			int a = 0;

			std::cout << std::endl;
			std::cout << "Выберите интересующий Вас предмет: "; std::cin >> a;
			std::cout << std::endl;

			while (true) 
			{
				if (a > 4)
				{
					std::cout << " Такого теста нет в нашей базе, выберите другой. " << std::endl;
					system("pause");
					system("cls");
				}

				switch (a)
				{
				case 1: system("cls");
					std::cout << std::endl << std::endl;
					std::cout << " Вы выбрали тест по русскому языку " << std::endl;
					Russian::start();
					break;
				case 2: system("cls");
					std::cout << std::endl << std::endl;
					std::cout << " Вы выбрали тест по математике " << std::endl;
					Matem::start();
					break;
				case 3: system("cls");
					std::cout << std::endl << std::endl;
					std::cout << " Вы выбрали тест по истории " << std::endl;
					History::start();
					break;
				}
				break;
			}
		}
	}
};

