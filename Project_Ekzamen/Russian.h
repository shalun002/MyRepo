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
		std::cout << " ������ ����?  yes - 1 / no - 2       "; std::cin >> x;

		if (x == 1)
		{
			system("cls");
			std::cout << " \t���� ����� " << std::endl;
			std::cout << " ����������� �������� - 10 " << std::endl;
			std::cout << " �� ������ ������ - 5 ��������� ������� " << std::endl;
			Test();
		}
		else if (x == 2)
		{
			system("cls");
			std::cout << " \t���� �������� " << std::endl;
		}
	}

	static void Test()
	{
		std::string question; //������
		std::string kind_of_answer[5];  //��� ������
		std::string answer; // �����


		const int SIZE = 10; // ���-�� ��������
		const int NUM = 5; // ���-�� ��������� �������.

		std::ifstream ifs;

		while (ifs)
		{
			ifs.open("Russian.txt");

			std::string mas[SIZE];
			char user[SIZE]; // ����� ��������� ��� �������� ������ ������������.
			char *letter[NUM] = { "A) ", "B) ", "C) ", "D) ","E) " }; // ��� ������� ������.

		// ���������� ��������� � �����.
			for (int i = 0; i<SIZE; i++)
			{
				getline(ifs, mas[i].question);
				for (int j = 0; j<NUM; j++)
					getline(ifs, mas[i].kind_of_answer[j]);
				ifs >> mas[i].answer;
			}
			// ������ ������������.
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
			// ������� ���-�� ������.
			int cnt = 0;
			for (int i = 0; i < SIZE; i++)
			{
				if (mas[i].answer == user[i])
				{
					++cnt;
					std::cout << "���������� �������: " << cnt << std::endl;
					std::cout << "������������ �������: " << SIZE - cnt << std::endl;
					ifs.close();
				}
			}			
		}
	}
};