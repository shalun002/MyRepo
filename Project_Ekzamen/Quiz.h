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
	std::vector<Question> questions; // вектор с вопросами
	void retrieveQuestions(std::string filename ) {
		std::ifstream fin(filename); // создаем файл и читаем его
		if (!fin.is_open())  // проверка файла
		{
			std::cout << " File not found " << std::endl;
		}
		else if (fin.is_open()) {
			std::string temp; //создать временную временную переменную типа string
			while (!fin.eof()) {
				getline(fin, temp); // считывает первую строку
				Question q; // создает объект «Вопрос»
				q.content = temp; // write the read string to the created variable for the question

				for (int i = 0; i < 5; ++i) {
					getline(fin, temp); // считывает варианты
					q.variants[i] = temp; // записывает варианты в temp
				}
				getline(fin, temp); // read right unswer
				q.right = temp; // записывает правильные ответы в temp
				questions.push_back(q);
			}
		}
	}
};

