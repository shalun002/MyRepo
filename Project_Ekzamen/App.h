#pragma once
#include <iostream>
#include "Player.h"
#include "Quiz.h"



class App
{
	Quiz quiz;
	Player player;

public:

	App() {}
	~App() {}

	void start() {
		for (int i = 0; i < quiz.questions.size(); ++i) {
			std::cout << quiz.questions[i].content << std::endl;
			for (int j = 0; j < 4; ++j) {
				std::cout << quiz.questions[i].variants[j] << std::endl;
			}
			std::cin >> player.choice;
			if (quiz.questions[i].variants[player.choice - 1] == quiz.questions[i].right) {
				++player.cnt;
			}
			else {
				std::cout << " ��� ����� " << quiz.questions[i].variants[player.choice - 1] << std::endl;
				std::cout << " ���������� ����� " << quiz.questions[i].right << std::endl;
			}
		}

	}
};

