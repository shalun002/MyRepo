#include <iostream>
#include <string>
#include <fstream>
#include "Russian.h"
#include <Windows.h>

class Menu
{
public:

	Menu() {}
	~Menu() {}

	static void menu()
	{
		while (true) {
			std::cout << std::endl;
			std::cout << " 1. ���� �� �������� ������� ���� " << std::endl;
			std::cout << " 2. ���� �� �������� ���������� " << std::endl;
			std::cout << " 3. ���� �� �������� ������� " << std::endl;
			std::cout << " 4. ������ ���� � ������ ����� " << std::endl;
			std::cout << std::endl;
			std::cout << "-------------------------------------" << std::endl;
			std::cout << std::endl;

			int choi�e;
			std::cout << "��� ����� - "; std::cin >> choi�e;
			switch (choi�e) {
			case 1: system("cls");
				std::cout << " �� ������� ���� �� �������� ������� ���� " << std::endl;
				Russian::start();
				break;
			case 2: system("cls");  break;
			case 3: system("cls");  break;
			case 4: system("cls");  break;
			case 5: default:
				break;
			}
			break;
		}
	}
};


class Student
{
public:
	std::string name;  //��� ��������
	std::string cource;  // ���� ��������
	std::string subject; // ���� �� �������� �.� �������

	void studentInfo()
	{
		std::cout << " ������� ���: "; std::cin >> name;
		std::cout << " ������� ����: "; std::cin.ignore() >> cource;
		std::cout << " �������� �������: ";
		std::cout << std::endl;
		Menu::Menu::menu(); // ����� ������� ����
	}

	Student(std::string &name, std::string &corce, std::string &subject)
	{
		this->name = name;
		this->cource = corce;
		this->subject = subject;
	}

	Student() {}
	~Student() {};
};


int main()
{
	setlocale(LC_ALL, "ru");

	Student st;
	st.studentInfo();

	system("pause");
	return 0;
}