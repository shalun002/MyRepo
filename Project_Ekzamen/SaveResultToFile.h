#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Player.h"
//#include "Cabinet.h"


class SaveResultToFile
{
	Player & player = Player::getInstace();

public:
	SaveResultToFile();
	~SaveResultToFile();

	void saveResult(std::string e, std::string f, int g)
	{
		std::ofstream fout;
		fout.open("Result.txt", std::ofstream::app);
		if (!fout.is_open())
		{
			std::cout << "���� �� ������" << std::endl;
		}
		else
		{
			fout << "��� " << e << " : " << "����� " << f << " " << "���� " << g << std::endl;
			fout << "��� "<< e << " : " << "����� "<< f << std::endl;
		}
		fout.close();

		system("cls");
		std::cout << "\n\n";
		std::cout << "\t\t\t\t\t\t\t\t\t ��������� ������� ��������! " << std::endl;
		std::cout << std::endl;
	}
	

	std::vector <SaveResultToFile> out;
	void showResults(std::string filename)
	{
		std::string s;
		
		/*system("cls");
		std::cout << "\n\n\n\n\n\t\t\t\t\t\t ��� ����������� ������� ��� � �����" << "\n\n\n\n";
		std::cout << "\n\t\t\t\t\t\t\t ������� ���:"; std::cin >> player.name;
		std::cout << "\t\t\t\t\t\t\t ������� �����: "; std::cin >> player.cource; std::cout << std::endl;*/
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
			while (getline(fin, s))
			{
				if (s == player.name+":"+ player.cource)
				{
					std::system("cls");
					std::cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t��� ��������� " << std::endl;
					std::cout << std::endl;
					system("pause");
					system("cls");					
				}
				else
				{
					std::cout << "\n\n\n\n\n\t\t\t\t\t\t����������� ���. ������������ �� ������.";
					std::cout << std::endl;
					system("pause");
					system("cls");
				}
				break;
			}
			fin.close();
		}
	}
};