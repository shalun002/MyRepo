#pragma once
#include <iostream>
#include <fstream>
#include "Quiz.h"
#include "App.h"
#include "Student.h"



class Russian
{
	
public:

	Russian();
	~Russian();

	static void start()
	{
		system("cls");
		std::cout << std::endl;
		std::cout << " Данные сдающего: " << std::endl;
		std::cout << std::endl;
		Student st;
		st.studentInfo();
		
		std::cout << std::endl;
		std::cout << " \t\t\t\tТест начался " << std::endl;
		std::cout << std::endl;
		std::cout << " \t\t\t  Колличество вопросов - 10 " << std::endl;
		std::cout << " \t\t\tколличество вариантов ответов - 5 " << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		App app;
		app.start("Russian.txt");
	}
};