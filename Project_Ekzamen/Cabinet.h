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
		std::cout << " ����������� ����, � ��� ��������!!! " << std::endl;
		std::cout << std::endl;
		std::cout << " 1. ������ �� ���� ������ " << std::endl;
		std::cout << " 2. ��� ���������� " << std::endl;
		std::cout << " 3. ������ ������������ " << std::endl;
		std::cout << " 4. ����� " << std::endl;
		std::cout << std::endl;
		std::cout << " ----------------------------------" << std::endl;

		while (true)
		{
			int choi�e =0;

			if (choi�e > 4)
			{
				std::cout << " ������ ������, ��������� ��� ���. " << std::endl;
				system("pause");
				system("cls");
			}

			switch (choi�e)
			{
			case 1: system("cls");
				/*std::cout << std::endl << std::endl;
				std::cout << " �� ������� ���� �� �������� ����� " << std::endl;
				Russian::start();*/
				break;
			case 2: system("cls");
				/*std::cout << std::endl << std::endl;
				std::cout << " �� ������� ���� �� ���������� " << std::endl;
				Matem::start();*/
				break;
			case 3: system("cls");
				/*std::cout << std::endl << std::endl;
				std::cout << " �� ������� ���� �� ������� " << std::endl;
				History::start();*/
				break;
			case 4: system("cls");
				std::cout << std::endl << std::endl;
				std::cout << " ------------- �� ����� ������ ------------- " << std::endl;
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

