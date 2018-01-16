#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Cabinet.h"
#include "Player.h"
#include "Registration.h"



class Login
{
	Registration reg;
	Cabinet cab;
	Player pl;

public:
	Login();
	~Login();


	
	std::vector <Registration> registration;
	void login(std::string filename)
	{
		system("cls");		
		std::cout << "\n\n\n\n\n\t\t\t\t\t\t ��� ����� � ������ ������� ������� ����� � ������" << "\n\n\n\n";
		std::cout << "\n\t\t\t\t\t\t\t\t ������� �����:  "; std::cin >> pl.login;
		std::cout << "\t\t\t\t\t\t\t\t ������� ������: "; std::cin >> pl.pass; std::cout << std::endl;
		std::ifstream fin(filename);   //������� ������ ������ istream  �� ����� fin
																		//������� ����������������  ������ fileName,
																		//���������� ������� file.open();
		if (!fin.is_open())			// �������� ����� �� �����������
		{
			std::cout << "���� �� ������" << std::endl;
			system("pause");
			system("cls");
		}
		else if (fin.is_open())
		{	
			std::string temp;
			bool b = true;
			while (getline(fin, temp))
			{
				if (temp == pl.login+":"+pl.pass)
				{
					std::system("cls");
					std::cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\t����� ���������� ��������� " << pl.login << std::endl;
					std::cout << std::endl;
					std::cout << std::endl;
					std::cout << std::endl;
					system("pause");
					system("cls");
					
					b = false;
					break;
				}
			}
			fin.close();
			if (b)
			{
				std::cout << "\n\n\n\n\n\t\t\t\t\t������������ �� ������. ��������� ����� ��� ������, ��� �����������������.";
				std::cout << std::endl;
				system("pause");
				system("cls");
			}
			else 
			{
				cab.Link(); 
			}
		}
	}
};