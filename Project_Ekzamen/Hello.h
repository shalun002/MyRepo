#pragma once
#include <iostream>
#include "Login.h"
#include "Registration.h"



class Hello
{
	Registration reg;
	Login log;

public:
	Hello();
	~Hello();

	int action = 0;

	void hello()
	{
		while (true)
		{
			std::cout << std::endl;
			std::cout << "����- 1" << "   " << "�����������- 2" << std::endl;

			std::cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t  ����������, ��������� ������������! ���� �������������� ��� �� ������������� �������. " << std::endl;
			std::cout << "\n\n\t\t\t\t\t   ���������� ���� �������� ������ ������� ���� �� ������������ ��� ��������� � ����� �������� ���������." << std::endl;
			std::cout << "\t\t\t\t\t\t\t      ������� ���� ������� ������ � ���������� � ������������ ��� � ���. " << std::endl;
			std::cout << "\t\t\t\t\t\t\t   ����� ���������� � ������������, ���������� ���������������� �� �������. " << std::endl;
			std::cout << "\t\t\t\t\t\t\t���� �� ��� �� ����������������, ���������� ��� ������ �� ������� �����������." << std::endl;
			std::cout << "\n\n\t\t\t\t\t\t\t\t\t       �������� ����������� �����!!" << std::endl;
			std::cout << "\t\t\t\t\t\t\t\t\t    ����� ������������ �� ����������. " << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << "�������� ��������: "; std::cin >> action;

			while (true)
			{
				switch (action)
				{
				case 1: system("cls");
					log.logIn();
					break;
				case 2: system("cls");
					reg.registration();
					break;
				default:
					break;
				}
				break;
			}
		}
		
	}
};

