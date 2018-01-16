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
			std::cout << "Файл не найден" << std::endl;
		}
		else
		{
			fout << "Имя - " << e << "  " << "Класс - " << f << " " << "Балл - " << g << std::endl;
			fout << "Имя - " << e << ":" << "Балл - " << g << std::endl;
		}
		fout.close();

		system("cls");
		std::cout << "\n\n";
		std::cout << "\t\t\t\t\t\t\t\t\t Результат успешно сохранен! " << std::endl;
		std::cout << std::endl;
	}

	std::vector <SaveResultToFile> save;
	void showResults(std::string filename)
	{
		std::ifstream fin(filename);   //создаем объект потока istream  по имени fin
									   //который инициализируется  именем fileName,
									   //вызывается функция file.open();
		if (!fin.is_open())			// Проверка файла на присутствие
		{
			std::cout << "Файл не найден" << std::endl;
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
					std::cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\tВаш результат " << std::endl;
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

