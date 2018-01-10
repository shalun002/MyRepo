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
		if (!fin.is_open())  // check file
		{
			std::cout << "The file not found" << std::endl;
		}
		else if (fin.is_open()) {
			std::string temp; // creat temp string
			while (!fin.eof()) {
				getline(fin, temp); //read first string 
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

