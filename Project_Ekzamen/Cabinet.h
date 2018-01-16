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
			std::cout << "  1. Лучшие на этой неделе " << std::endl;
			std::cout << "  2. Мои результаты " << std::endl;
			std::cout << "  3. Пройти тестирование " << std::endl;
			std::cout << "  4. Выход " << std::endl;
			std::cout << std::endl;
			std::cout << "------------------------------------------" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;

			int choiсe = 0;

			std::cout << "Выберите действие: "; std::cin >> choiсe;
		
			if (choiсe > 4)
			{
				std::cout << "\t\t\t\t\t\t\t\t\t  Ошибка выбора, повторите еще раз. " << std::endl;
				system("pause");
				system("cls");
			}

			switch (choiсe)
			{
			case 1: system("cls"); break;
			case 2: system("cls"); st.showResults(); break;
			case 3: system("cls"); cl2.lincMenu();	break;
			case 4: system("cls");
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

