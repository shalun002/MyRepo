#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Question.h"

class Quiz
{
public:
	Quiz();
	~Quiz();

	std::string var;
	std::vector<Question> questions; // vector whith questions

	void retrieveQuestions() {
		std::ifstream fin("Russian.txt"); // create file and read it
		if (!fin.is_open())  // проверка файла
		{
			std::cout << " Файл не найден " << std::endl;
		}
		else if (fin.is_open()) {
			std::string temp; // создаем временную переменну temp типа string
			while (!fin.eof()) {
				getline(fin, temp); // cчитать первую строку
				Question q; // creat Question's object
				q.content = temp; // write the read string to the created variable for the question

				for (int i = 0; i < 4; ++i) {
					getline(fin, temp); // read variants 
					q.variants[i] = temp; // wright variants
				}
				getline(fin, temp); // read right unswer
				q.right = temp; // write unswer to temp
				questions.push_back(q);
			}
		}
	}

	void startQuiz() {

	}

};

