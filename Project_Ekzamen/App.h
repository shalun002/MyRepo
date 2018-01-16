#pragma once
#include <cstdlib>
#include <iostream>
#include "Player.h"
#include "Quiz.h"
#include <conio.h>
#include <Windows.h>
#include "SaveResultToFile.h"



class App
{
	SaveResultToFile save;
	Quiz quiz;
	Player player;

public:
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	App();
	~App();

	void start(std::string filename) 
	{
		quiz.retrieveQuestions(filename);
		for (int i = 0; i < quiz.questions.size(); ++i) 
		{
			std::cout << quiz.questions[i].content << std::endl;
			for (int j = 0; j < 5; ++j) 
			{
				std::cout << quiz.questions[i].variants[j] << std::endl;
			}
			std::cout << std::endl;
			std::cout << " Ваш ответ:  "; std::cin >> player.choice;
			std::string s = quiz.questions[i].variants[player.choice - 1];
			if (quiz.questions[i].variants[player.choice - 1] == quiz.questions[i].right) 
			{
				SetConsoleTextAttribute(hConsole, 2);
				std::cout << " Ваш ответ правильный\t " << std::endl;
				SetConsoleTextAttribute(hConsole, 7);
				std::cout << std::endl;
				
				++player.cnt;
			}
			else 
			{
				std::cout << std::endl;
				SetConsoleTextAttribute(hConsole, 12);
				std::cout << " Ваш вариант ответа: -\t" << quiz.questions[i].variants[player.choice - 1] << std::endl;
				SetConsoleTextAttribute(hConsole, 2);
				std::cout << " Правильный ответ -  " << quiz.questions[i].right << std::endl;
				SetConsoleTextAttribute(hConsole, 7);
				std::cout << std::endl;
			}
		
		}
		if (player.cnt < 5)
		{
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << " \t\t   Вы набрали - " << player.cnt << " балл(а/ов)" << std::endl;
			std::cout << "\t\tВы не прошли тест. Это грустно(((( " << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else 
		{
			std::cout << "\t\t     Вы набрали - " << player.cnt << " балл(а/ов)" << std::endl;
			std::cout << "\t\t   Вы прошли тест. Поздравляем!" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
		}

		int count = 0;
		std::cout << "\t\t  Желаете сохранить результат? 1 - ДА, 2 - НЕТ  " << std::endl;
		std::cout << "\t\t  Ваш выбор: "; std::cin >> count;
		
		if (count == 1)
		{
			system("cls");
			save.saveResult(player.name, player.cource, player.cnt);
		}
		else if (count == 2)
		{		
			system("cls");
			return;
		}

		system("pause");
		system("cls");
	}
};