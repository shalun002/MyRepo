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
			std::cout << " �������� ����, ������� �� ������ ������. " << std::endl;
			std::cout << std::endl;
			std::cout << " 1. ���� �� �������� ����� " << std::endl;
			std::cout << " 2. ���� �� ���������� " << std::endl;
			std::cout << " 3. ���� �� ������� " << std::endl;
			std::cout << std::endl;
			std::cout << " ----------------------------------" << std::endl;
						
			int a = 0;

			std::cout << std::endl;
			std::cout << "�������� ������������ ��� �������: "; std::cin >> a;
			std::cout << std::endl;

			while (true) 
			{
				if (a > 4)
				{
					std::cout << " ������ ����� ��� � ����� ����, �������� ������. " << std::endl;
					system("pause");
					system("cls");
				}

				switch (a)
				{
				case 1: system("cls");
					std::cout << std::endl << std::endl;
					std::cout << " �� ������� ���� �� �������� ����� " << std::endl;
					Russian::start();
					break;
				case 2: system("cls");
					std::cout << std::endl << std::endl;
					std::cout << " �� ������� ���� �� ���������� " << std::endl;
					Matem::start();
					break;
				case 3: system("cls");
					std::cout << std::endl << std::endl;
					std::cout << " �� ������� ���� �� ������� " << std::endl;
					History::start();
					break;
				}
				break;
			}
		}
	}
};

