#pragma once
#include <iostream>
#include "Menu.h"


class Cabinet
{
	Menu menu;
public:
	Cabinet();
	~Cabinet();

	void Link()
	{

		std::cout << std::endl;
		std::cout << "------------------------------------------" << std::endl;
		std::cout << std::endl;
		std::cout << "������������ ����, ��������� ������������! " << std::endl;
		std::cout << std::endl;
		std::cout << "  1. ������ �� ���� ������ " << std::endl;
		std::cout << "  2. ��� ���������� " << std::endl;
		std::cout << "  3. ������ ������������ " << std::endl;
		std::cout << "  4. ����� " << std::endl;
		std::cout << std::endl;
		std::cout << "------------------------------------------" << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		int choi�e = 0;

		std::cout << "�������� ��������: "; std::cin >> choi�e;
		while (true)
		{
			if (choi�e > 4)
			{
				std::cout << "\t\t\t\t\t\t\t\t\t  ������ ������, ��������� ��� ���. " << std::endl;
				system("pause");
				system("cls");
			}

			switch (choi�e)
			{
			case 1: system("cls"); break;
			case 2: system("cls"); break;
			case 3: system("cls"); menu.menu(); return;
				break;
			case 4: system("cls");
				std::cout << std::endl << std::endl;
				std::cout << "\t\t\t\t\t\t\t\t\t  ------------- �� ����� ������ ------------- " << std::endl;
				std::cout << std::endl;
				system("pause");
				system("cls");
				std::cout << std::endl;
				break;
			default:
				break;
			}
			break;
		}
	}
};

