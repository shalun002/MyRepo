#pragma once
#include <iostream>
#include <string>
#include <fstream>
//#include "Hello.h"




class Registration
{
	//Hello h;

public:

	std::string name;
	std::string surName;
	std::string login;
	std::string pass;
	std::string corPass;

	Registration();
	~Registration();

	void AddInfoToFile(std::string n, std::string p, int c)
	{
		std::ofstream fout;
		fout.open("UserInfo.txt", std::ofstream::app); 
		if (!fout.is_open())
		{ 
			std::cout << "���� �� ������" << std::endl;
		}
		else
		{
			fout << n << std::endl;
			fout << p << std::endl;
			fout << c << std::endl;
			fout << std::endl;
		}

		fout.close();
	}

	
	void registration()
	{
		
			system("cls");
			std::cout << "\n\n";
			std::cout << "\t\t\t\t\t\t\t\t\t ����� ���������� �� ����� �����������!" << "\n\n\n\n";
			std::cout << " ������� ���: "; std::cin >> name;
			std::cout << " ������� �������: "; std::cin >> surName;
			std::cout << " ���������� �����: "; std::cin >> login;
			std::cout << " ���������� ������: "; std::cin >> pass;
			std::cout << " ��������� ������: ";  std::cin >> corPass;
				if (pass == corPass)
				{
					pass = corPass;
					std::cout << "������ ���������" << std::endl;
					std::cout << "\n\n";
					AddInfoToFile(login, pass, 0);
				}
				else std::cout << "������ �� ���������"; return;
			std::cout << "\n\n";
			std::cout << "\t\t\t\t\t �����������! �� ������� ������������������. ������ ��� ���������� ���������������� ��� ����������� ������������." << "\n\n\n\n";
			system("pause");
			system("cls");

			//h.hello();		
	}
};

