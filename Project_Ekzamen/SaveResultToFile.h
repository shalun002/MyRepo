#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
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
			fout << "��� - " << e << "  " << "����� - " << f << " " << "���� - " << g << std::endl;
			fout << "��� - " << e << ":" << "���� - " << g << std::endl;
		}
		fout.close();

		system("cls");
		std::cout << "\n\n";
		std::cout << "\t\t\t\t\t\t\t\t\t ��������� ������� ��������! " << std::endl;
		std::cout << std::endl;
	}

	std::vector <SaveResultToFile> save;
	void showResults(std::string filename)
	{
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
			while (getline(fin, temp))
			{
				if (temp == pl.name+" "+pl.cource)
				{
					std::system("cls");
					std::cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\t��� ��������� " << std::endl;
					std::cout << std::endl;
					system("pause");
					system("cls");
					break;
				}
			}
			fin.close();
		}
	}
};

