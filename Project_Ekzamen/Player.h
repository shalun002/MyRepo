#pragma once
#include <iostream>
#include <string>

class Player
{
public:

	Player();
	~Player();

	int cnt = 0;
	int choice;
	int ctr = 0;

	std::string login, loginCheck;
	std::string passwordCheck;
	std::string name;
	std::string surName;
	std::string pass;
	std::string pass2;
	std::string corPass;
	std::string name2;    // им€ студента
	std::string cource;  // курс студента

	void studentInfo()
	{
		std::cout << std::endl;
		std::cout << " ¬ведите ваше им€: "; std::cin >> name2;           // ¬водим им€ студента
		std::cout << " ¬ведите ваш класс: "; std::cin.ignore() >> cource; // ¬водим курс
		std::cout << std::endl;
	}

};

