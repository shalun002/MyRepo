#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <ostream>




class Registration
{
public:

	std::string name;
	std::string surName;
	std::string login;
	std::string pass;
	std::string corPass;

	Registration();
	~Registration();

	
	void registration()
	{
		std::ofstream out("UserInfo.txt"); // ������ ���������� fout ���� ofstream ��� ������
		out.open("UserInfo.txt", std::ios::app); // ��������� ���� � ������������� ��������� ofstream::app ��� ������������� � ����� (��� ���������)
		std::string str = name, surName, login, pass, corPass;
		if (!out.is_open())  // �������� �� �������� �����
		{
			std::cout << "���� �� ������" << std::endl;
		}
		else {
			system("cls");
			std::cout << "\n\n";
			std::cout << "\t\t\t\t\t\t\t\t\t ����� ���������� �� ����� �����������!" << "\n\n\n\n";
			std::cout << " ������� ���: "; out << name;
			std::cout << " ������� �������: "; std::cin.ignore() >> surName;
			std::cout << " ���������� �����: "; std::cin >> login;
			std::cout << " ���������� ������: "; std::cin >> pass;
			std::cout << " ��������� ������: ";  std::cin >> corPass;
			std::cout << "\n\n";
			std::cout << "\t\t\t\t\t �����������! �� ������� ������������������. ������ ��� ���������� ���������������� ��� ����������� ������������." << "\n\n\n\n";
			system("pause");
		}
		out.close(); // �������� �����

		system("cls");
	}
};

