#pragma once
#include <string>
#include <fstream>
#include <vector>
#include "Russian.h"
#include "Matem.h"
#include "History.h"
//#include "LincCabinet.h"

class Menu
{
	Russian rus;

public:

	Menu();
	~Menu();

	bool bo = true;

	 void menu()
	{
		
		while (bo)
		{
			std::cout << std::endl;
			std::cout << " ----------------------------------" << std::endl;
			std::cout << std::endl;
			std::cout << " �������� ����, ������� �� ������ ������. " << std::endl;
			std::cout << std::endl;
			std::cout << " 1. ���� �� �������� ����� " << std::endl;
			std::cout << " 2. ���� �� ���������� " << std::endl;
			std::cout << " 3. ���� �� ������� " << std::endl;
			std::cout << " 4. ������� ���� " << std::endl;
			std::cout << std::endl;
			std::cout << " ----------------------------------" << std::endl;
					
			int a = 0;

			std::cout << std::endl;
			std::cout << "��� �����: "; std::cin >> a;
			std::cout << std::endl;

		
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
				rus.start();
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
			case 4: system("cls"); bo = false; break;
			default:
				break;

			}
		}	
	}
};