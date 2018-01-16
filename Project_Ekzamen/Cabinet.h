#pragma once
#include <iostream>
#include "LincMenu.h"
#include "SaveResultToFile.h"



class Cabinet
{
	SaveResultToFile st;
	LincMenu cl2;

public:
	Cabinet();
	~Cabinet();

	void Link()
	{
		bool bl = true;
		while (bl)
		{
			std::cout << std::endl;
			std::cout << "------------------------------------------" << std::endl;
			std::cout << std::endl;
			std::cout << "Приветствуем тебя, Уважаемый пользователь! " << std::endl;
			std::cout << std::endl;
			std::cout << "  1. Мои результаты " << std::endl;
			std::cout << "  2. Пройти тестирование " << std::endl;
			std::cout << "  3. Выход " << std::endl;
			std::cout << std::endl;
			std::cout << "------------------------------------------" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;

			int choiсe = 0;

			std::cout << "Выберите действие: "; std::cin >> choiсe;
		
			if (choiсe > 3)
			{
				std::cout << "\t\t\t\t\t\t\t\t\t  Ошибка выбора, повторите еще раз. " << std::endl;
				system("pause");
				system("cls");
			}

			switch (choiсe)
			{
			case 1: system("cls"); st.showResults("Result.txt"); break;
			case 2: system("cls"); cl2.lincMenu();	break;
			case 3: system("cls");
				std::cout << std::endl << std::endl;
				std::cout << "\t\t\t\t\t\t\t\t\t  ------------- До новых встреч ------------- " << std::endl;
				std::cout << std::endl;
				bl = false;
				system("pause");
				system("cls");
				std::cout << std::endl;
				break;
			}
		}
	}
};

