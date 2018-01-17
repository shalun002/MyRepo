#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Player.h"




class Registration
{
	Player & player = Player::getInstace();

public:

	Registration();
	~Registration();

	void AddInfoToFile(std::string a, std::string b, std::string c, std::string d)
	{
		std::ofstream fout;
		fout.open("UserInfo.txt", std::ofstream::app); 
		if (!fout.is_open())
		{ 
			std::cout << "���� �� ������" << std::endl;
		}
		else
		{	
			fout <<"��� "<< a << "  " <<"������� " << b << " " << c << ":" << d << std::endl;
			fout << c << ":" << d << std::endl;
		}
		fout.close();
	}

	
	void registration()
	{
		
		
		system("cls");
		std::cout << "\n\n";
		std::cout << "\t\t\t\t\t\t\t\t\t ����� ���������� �� ����� �����������!" << "\n\n\n\n";
		std::cout << "\t\t\t\t\t\t\t\t\t\t   ������� ���: "; std::cin >> player.name;
		std::cout << "\t\t\t\t\t\t\t\t\t\t   ������� �������: "; std::cin >> player.surName;
		std::cout << "\t\t\t\t\t\t\t\t\t\t   ���������� �����: "; std::cin >> player.login;
		std::cout << "\t\t\t\t\t\t\t\t\t\t   ���������� ������: "; std::cin >> player.pass2;
		std::cout << "\t\t\t\t\t\t\t\t\t\t   ��������� ������: ";  std::cin >> player.corPass;

		

		if (player.pass2 == player.corPass)
		{
			player.pass = player.corPass;
			std::cout << "\n\n";
			std::cout << "\t\t\t\t\t\t\t\t\t\t      ������ ���������" << std::endl;
			std::cout << "\n\n";
			std::cout << "\t\t\t\t\t �����������! �� ������� ������������������. ������ ��� ���������� ���������������� ��� ����������� ������������." << "\n\n\n\n";
			system("pause");
			system("cls");
			std::cout << "\n\n";
			AddInfoToFile(player.name, player.surName, player.login, player.pass);
		}
		else
		{
			std::cout << "\n\n";
			std::cout << "\t\t\t\t\t\t\t\t\t������ �� ��������� ���������� ��� ���."; 
			std::cout << "\n\n";
			std::cout << "\n\n";
			system("pause");
			system("cls");
			return;
		}		
	}
};

