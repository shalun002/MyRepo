#pragma once
#include <iostream>
//#include "Hello.h"



class Cabinet
{

	Hello hel;

public:
	Cabinet();
	~Cabinet();

	void Link()
	{

		std::cout << std::endl;
		std::cout << " ----------------------------------" << std::endl;
		std::cout << std::endl;
		std::cout << " Приветствую тебя, О мой Господин!!! " << std::endl;
		std::cout << std::endl;
		std::cout << " 1. Лучшие на этой неделе " << std::endl;
		std::cout << " 2. Мои результаты " << std::endl;
		std::cout << " 3. Пройти тестирование " << std::endl;
		std::cout << " 4. Выход " << std::endl;
		std::cout << std::endl;
		std::cout << " ----------------------------------" << std::endl;

		while (true)
		{
			int choiсe =0;

			if (choiсe > 4)
			{
				std::cout << " Ошибка выбора, повторите еще раз. " << std::endl;
				system("pause");
				system("cls");
			}

			switch (choiсe)
			{
			case 1: system("cls");
				/*std::cout << std::endl << std::endl;
				std::cout << " Вы выбрали тест по русскому языку " << std::endl;
				Russian::start();*/
				break;
			case 2: system("cls");
				/*std::cout << std::endl << std::endl;
				std::cout << " Вы выбрали тест по математике " << std::endl;
				Matem::start();*/
				break;
			case 3: system("cls");
				/*std::cout << std::endl << std::endl;
				std::cout << " Вы выбрали тест по истории " << std::endl;
				History::start();*/
				break;
			case 4: system("cls");
				std::cout << std::endl << std::endl;
				std::cout << " ------------- До новых встреч ------------- " << std::endl;
				std::cout << std::endl;
				system("pause");
				hel.hello();
				std::cout << std::endl;
				break;
			default:
				break;
			}
			break;
		}
	}
};

