#pragma once
#include <iostream>
#include <string>




class Registration
{
	std::string name;
	std::string surName;
	std::string login;
	std::string pass;

public:
	Registration();
	~Registration();

	void registration()
	{
		system("cls");
		std::cout << "\n\n";
		std::cout << "\t\t\t\t\t\t\t\t\t ����� ���������� �� ����� �����������!" << "\n\n\n\n";
		std::cout << " ������� ���: "; std::cin >> name; std::cout << std::endl;
		std::cout << " ������� �������: "; std::cin >> surName; std::cout << std::endl;
		std::cout << " ���������� �����: "; std::cin >> login; std::cout << std::endl;
		std::cout << " ���������� ������: "; std::cin >> pass; std::cout << "   " << " ��������� ������: ";  std::cin >> pass;
	}
};

