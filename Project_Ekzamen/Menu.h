#pragma once
#include <string>
#include <fstream>
#include <vector>
#include "Russian.h"
#include "Matem.h"
#include "History.h"



class Menu
{

public:

	Menu();
	~Menu();

	static void menu()
	{
		while (true) {
			std::cout << std::endl;
			std::cout << "\t 1. Russian Language Test " << std::endl;
			std::cout << "\t 2. Math test " << std::endl;
			std::cout << "\t 3. Subject test history " << std::endl;
			std::cout << "\t 4. Take the test at another time " << std::endl;
			std::cout << std::endl;
			std::cout << "\t----------------------------------" << std::endl;
			std::cout << std::endl;

			int choiñe;
			std::cout << " Your choice - "; std::cin >> choiñe;
			switch (choiñe) {
			case 1: system("cls");
				std::cout << std::endl;
				std::cout << std::endl;
				std::cout << " You have chosen the test in Russian language" << std::endl;
				Russian::start();
				break;
			case 2: system("cls");
				std::cout << std::endl;
				std::cout << std::endl;
				std::cout << " You have chosen a test in the subject of mathematics" << std::endl;
				Matem::start();
				break;
			case 3: system("cls");
				std::cout << std::endl;
				std::cout << std::endl;
				std::cout << " You chose a test on the subject of the story " << std::endl;
				History::start();
				break;
			case 4: system("cls"); 
				std::cout << std::endl;
				std::cout << std::endl;
				std::cout << " ------------- Until next time ------------- " << std::endl;
				std::cout << std::endl;
				system("pause");
				std::cout << std::endl;
				break;
			case 5: default:
				break;
			}
			break;
		}
	}
};

