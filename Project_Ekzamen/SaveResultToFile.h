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
			std::cout << "Файл не найден" << std::endl;
		}
		else
		{
			fout << "Имя " << e << " : " << "Класс " << f << " " << "Балл " << g << std::endl;
			fout << "Имя "<< e << " : " << "Класс "<< f << std::endl;
		}
		fout.close();

		system("cls");
		std::cout << "\n\n";
		std::cout << "\t\t\t\t\t\t\t\t\t Результат успешно сохранен! " << std::endl;
		std::cout << std::endl;
	}
	

	std::vector <SaveResultToFile> out;
	void showResults(std::string filename)
	{
		std::string s;
		
		/*system("cls");
		std::cout << "\n\n\n\n\n\t\t\t\t\t\t Для результатов введите Имя и Класс" << "\n\n\n\n";
		std::cout << "\n\t\t\t\t\t\t\t Введите имя:"; std::cin >> player.name;
		std::cout << "\t\t\t\t\t\t\t Введите класс: "; std::cin >> player.cource; std::cout << std::endl;*/
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
			while (getline(fin, s))
			{
				if (s == player.name+":"+ player.cource)
				{
					std::system("cls");
					std::cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tВаш результат " << std::endl;
					std::cout << std::endl;
					system("pause");
					system("cls");					
				}
				else
				{
					std::cout << "\n\n\n\n\n\t\t\t\t\t\tРезультатов нет. Пользователь не найден.";
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