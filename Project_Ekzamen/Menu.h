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
			std::cout << std::endl << std::endl;
			std::cout << "\t----------------------------------" << std::endl;
			std::cout << std::endl;
			std::cout << "\t Select the item you want to pass. " << std::endl;
			std::cout << std::endl;
			std::cout << "\t 1. Russian Language Test " << std::endl;
			std::cout << "\t 2. Math test " << std::endl;
			std::cout << "\t 3. Subject test history " << std::endl;
			std::cout << "\t 4. Take the test at another time " << std::endl;
			std::cout << std::endl;
			std::cout << "\t----------------------------------" << std::endl;
						
			student.studentInfo();

			while (true) 
			{
				int choiñe;
				std::cout << " Your choice - "; std::cin >> choiñe;

				if (choiñe > 4)
				{
					std::cout << " Your choice is wrong. Enter please correct choice " << std::endl;
					system("pause");
					system("cls");
				}

				switch (choiñe)
				{
				case 1: system("cls");
					std::cout << std::endl << std::endl;
					std::cout << " You have chosen the test in Russian language" << std::endl;
					Russian::start();
					break;
				case 2: system("cls");
					std::cout << std::endl << std::endl;
					std::cout << " You have chosen a test in the subject of mathematics" << std::endl;
					Matem::start();
					break;
				case 3: system("cls");
					std::cout << std::endl << std::endl;
					std::cout << " You chose a test on the subject of the story " << std::endl;
					History::start();
					break;
				case 4: system("cls");
					std::cout << std::endl << std::endl;
					std::cout << " ------------- Until next time ------------- " << std::endl;
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

