#pragma once
#include <iostream>
#include "Login.h"
#include "Registration.h"




class Hello
{
	Registration reg;
	Login l;

public:
	Hello();
	~Hello();

	int action = 0;

	void hello()
	{
		bool bl = true;
		while (bl)
		{
			std::cout << std::endl;
			std::cout << "����- 1" << "   " << "�����������- 2" << "   " << "����� - 3" << std::endl;

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

			switch (action)
			{
				case 1: l.login("UserInfo.txt"); break;
				case 2: reg.registration(); break;
				case 3: bl = false; break;
			}
		}
	}
};