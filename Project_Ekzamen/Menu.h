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
			std::cout << " 1. ���� �� �������� ������� ���� " << std::endl;
			std::cout << " 2. ���� �� �������� ���������� " << std::endl;
			std::cout << " 3. ���� �� �������� ������� " << std::endl;
			std::cout << " 4. ������ ���� � ������ ����� " << std::endl;
			std::cout << std::endl;
			std::cout << "-------------------------------------" << std::endl;
			std::cout << std::endl;

			int choi�e;
			std::cout << "��� ����� - "; std::cin >> choi�e;
			switch (choi�e) {
			case 1: system("cls");
				std::cout << " �� ������� ���� �� �������� ������� ���� " << std::endl;
				Russian::start();
				break;
			case 2: system("cls");/*
				std::cout << " �� ������� ���� �� �������� ���������� " << std::endl;
				Russian::start();*/
				break;
			case 3: system("cls");/*
				std::cout << " �� ������� ���� �� �������� ������� " << std::endl;
				Russian::start();*/
				break;
			case 4: system("cls"); /*
				std::cout << " �� ����� ������ " << std::endl;
				Russian::start();*/ 
				break;
			case 5: default:
				break;
			}
			break;
		}
	}
};

