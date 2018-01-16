#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Player.h"


class SaveResultToFile
{
	Player pl;

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
			fout << "Name - " << e << "  " << "Class - " << f << " " << " Scor for test - " << g << std::endl;
		}
		fout.close();

		system("cls");
		std::cout << "\n\n";
		std::cout << "\t\t\t\t\t\t\t\t\t ��������� ������� ��������! " << std::endl;
		std::cout << std::endl;
	}

	void showResults()
	{
		std::ifstream fin("Result.txt");
		if (!fin.is_open()) 
		{
			std::string s;

			while (!fin.eof())
			{

				fin >> pl.name2 >> pl.cource >> pl.cnt;
			}
			fin.close();

			std::cout << std::endl;
			std::cout << " ���� ���: " << pl.name2 << std::endl;
			std::cout << " ��� �����: " << pl.cource << std::endl;
			std::cout << " ��� ���� �� ��������: " << pl.cnt << std::endl;
			std::cout << std::endl;
		}
	}
};