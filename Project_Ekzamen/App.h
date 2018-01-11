#pragma once
#include <iostream>
#include "Player.h"
#include "QuizRussian.h"
#include "QuizMatem.h"
#include "QuizHistory.h"


class App
{
	QuizHistory quizHistory;
	QuizMatem quizMatem;
	QuizRussian quizRussian;
	Player player;

public:

	App();
	~App();

	void start() {
		quizRussian.retrieveQuestions();
		for (int i = 0; i < quizRussian.questions.size(); ++i) {
			std::cout << quizRussian.questions[i].content << std::endl;
			for (int j = 0; j < 5; ++j) {
				std::cout << quizRussian.questions[i].variants[j] << std::endl;
			}
			std::cout << std::endl;
			std::cout << " Your answer:  "; std::cin >> player.choice;
			std::string s = quizRussian.questions[i].variants[player.choice - 1];
			if (quizRussian.questions[i].variants[player.choice - 1] == quizRussian.questions[i].right) {
				++player.cnt;
			}
				std::cout << std::endl;
				std::cout << " Your answer -\t" << quizRussian.questions[i].variants[player.choice - 1] << std::endl;
				std::cout << " Correct answer -  " << quizRussian.questions[i].right << std::endl;
				std::cout << std::endl;
		
		}
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << " \tYou typed - " << player.cnt << " points";
		std::cout << std::endl;
		std::cout << " The test is complete. Congratulations!" << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		system("pause");
	}
};

