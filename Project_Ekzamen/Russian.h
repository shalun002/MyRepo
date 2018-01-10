#pragma once
#include <iostream>
#include <fstream>
#include <Windows.h>

class Russian
{
public:

	Russian();
	~Russian();

	static void start()
	{
		int x = 0;
		std::cout << " Начать тест?  yes - 1 / no - 2       "; std::cin >> x;

		if (x == 1)
		{
			system("cls");
			std::cout << " \tТест начат " << std::endl;
			std::cout << " Колличество вопросов - 10 " << std::endl;
			std::cout << " На каждый вопрос - 5 вариантов ответов " << std::endl;
			Test();
		}
		else if (x == 2)
		{
			system("cls");
			std::cout << " \tТест закончен " << std::endl;
		}
	}

	static void Test()
	{
		std::string question; //вопрос
		std::string kind_of_answer[5];  //вид ответа
		std::string answer; // ответ


		const int SIZE = 10; // кол-во вопросов
		const int NUM = 5; // кол-во вариантов ответов.

		std::ifstream ifs;

		while (ifs)
		{
			ifs.open("Russian.txt");

			std::string mas[SIZE];
			char user[SIZE]; // будет содержать все варианты ответа пользователя.
			char *letter[NUM] = { "A) ", "B) ", "C) ", "D) ","E) " }; // для удоства вывода.

		// заполнение структуры с файла.
			for (int i = 0; i<SIZE; i++)
			{
				getline(ifs, mas[i].question);
				for (int j = 0; j<NUM; j++)
					getline(ifs, mas[i].kind_of_answer[j]);
				ifs >> mas[i].answer;
			}
			// ответы пользователя.
			for (int i = 0; i<SIZE; i++)
			{
				std::cout << mas[i].question;
				std::cout << std:: endl;
				for (int j = 0; j<NUM; j++)
				{
					std::cout << letter[j] << mas[i].kind_of_answer[j];
					std::cout << std::endl;
				}
				std::cin >> user[i];
			}
			// находим кол-во баллов.
			int cnt = 0;
			for (int i = 0; i < SIZE; i++)
			{
				if (mas[i].answer == user[i])
				{
					++cnt;
					std::cout << "Правильных ответов: " << cnt << std::endl;
					std::cout << "Неправильных ответов: " << SIZE - cnt << std::endl;
					ifs.close();
				}
			}			
		}
	}
};