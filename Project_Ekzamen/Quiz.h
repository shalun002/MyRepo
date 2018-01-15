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
	std::vector<Question> questions; // ������ � ���������
	void retrieveQuestions(std::string filename ) {
		std::ifstream fin(filename); // ������� ���� � ������ ���
		if (!fin.is_open())  // �������� �����
		{
			std::cout << " File not found " << std::endl;
		}
		else if (fin.is_open()) {
			std::string temp; //������� ��������� ��������� ���������� ���� string
			while (!fin.eof()) {
				getline(fin, temp); // ��������� ������ ������
				Question q; // ������� ������ �������
				q.content = temp; // write the read string to the created variable for the question

				for (int i = 0; i < 5; ++i) {
					getline(fin, temp); // ��������� ��������
					q.variants[i] = temp; // ���������� �������� � temp
				}
				getline(fin, temp); // read right unswer
				q.right = temp; // ���������� ���������� ������ � temp
				questions.push_back(q);
			}
		}
	}
};

