#pragma once
#include <cstdlib>
#include <iostream>
#include "Player.h"
#include "Quiz.h"
#include <conio.h>
#include<Windows.h>


class App
{
	Quiz quiz;
	Player player;

public:
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	App();
	~App();

	void start(std::string filename) {
		quiz.retrieveQuestions(filename);
		for (int i = 0; i < quiz.questions.size(); ++i) {
			std::cout << quiz.questions[i].content << std::endl;
			for (int j = 0; j < 5; ++j) {
				std::cout << quiz.questions[i].variants[j] << std::endl;
			}
			std::cout << std::endl;
			std::cout << " Your answer:  "; std::cin >> player.choice;
			std::string s = quiz.questions[i].variants[player.choice - 1];
			if (quiz.questions[i].variants[player.choice - 1] == quiz.questions[i].right) 
			{
				SetConsoleTextAttribute(hConsole, 2);
				std::cout << " Your answer is correct\t" << std::endl;
				SetConsoleTextAttribute(hConsole, 7);
				std::cout << std::endl;
				
				++player.cnt;
			}
			else 
			{
				std::cout << std::endl;
				SetConsoleTextAttribute(hConsole, 12);
				std::cout << " Your answer -\t" << quiz.questions[i].variants[player.choice - 1] << std::endl;
				SetConsoleTextAttribute(hConsole, 2);
				std::cout << " Correct answer -  " << quiz.questions[i].right << std::endl;
				SetConsoleTextAttribute(hConsole, 7);
				std::cout << std::endl;
			}
		
		}
		if (player.cnt < 5)
		{
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << " \t\tYou typed - " << player.cnt << " points" << std::endl;
			std::cout << " \tYou did not pass the test. It is sad(((( " << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
		}
		else 
		{
			std::cout << "\t\tYou typed - " << player.cnt << " points" << std::endl;
			std::cout << " \tYou passed the test. Congratulations!" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
		}
		system("pause");
		system("cls");
	}
};
