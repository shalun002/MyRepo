#pragma once
#include <string>
#include <fstream>
#include <vector>
#include "Russian.h"
#include "Matem.h"
#include "History.h"
#include "Student.h"



class Menu
{
	Student student;

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
			std::cout << " 4. Пройти в следующий раз " << std::endl;
			std::cout << std::endl;
			std::cout << " ----------------------------------" << std::endl;
						
			student.studentInfo();

			while (true) 
			{
				int choiсe = student.subject;

				if (choiсe > 4)
				{
					std::cout << " Такого теста нет в нашей базе, выберите другой. " << std::endl;
					system("pause");
					system("cls");
				}

				switch (choiсe)
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
				case 4: system("cls");
					std::cout << std::endl << std::endl;
					std::cout << " ------------- До новых встреч ------------- " << std::endl;
					std::cout << std::endl;
					system("pause");
					std::cout << std::endl;
					break;
				default:
					break;
				}
				break;
			}
		}
	}
};

