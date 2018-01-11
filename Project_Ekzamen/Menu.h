#pragma once
#include <string>
#include <fstream>
#include <vector>
#include "Russian.h"


class Menu
{
public:

	Menu();
	~Menu();

	static void menu()
	{
		while (true) {
			std::cout << std::endl;
			std::cout << " 1. Тест по предмету русский язык " << std::endl;
			std::cout << " 2. Тест по предмету математика " << std::endl;
			std::cout << " 3. Тест по предмету история " << std::endl;
			std::cout << " 4. Пройти тест в другое время " << std::endl;
			std::cout << std::endl;
			std::cout << "-------------------------------------" << std::endl;
			std::cout << std::endl;

			int choiсe;
			std::cout << "Ваш выбор - "; std::cin >> choiсe;
			switch (choiсe) {
			case 1: system("cls");
				std::cout << " Вы выбрали тест по предмету русский язык " << std::endl;
				Russian::start();
				break;
			case 2: system("cls");/*
				std::cout << " Вы выбрали тест по предмету математика " << std::endl;
				Russian::start();*/
				break;
			case 3: system("cls");/*
				std::cout << " Вы выбрали тест по предмету история " << std::endl;
				Russian::start();*/
				break;
			case 4: system("cls"); /*
				std::cout << " До новых встреч " << std::endl;
				Russian::start();*/ 
				break;
			case 5: default:
				break;
			}
			break;
		}
	}
};

