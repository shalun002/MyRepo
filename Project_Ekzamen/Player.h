#pragma once
#include <iostream>
#include <string>

class Player
{
public:

	Player();
	~Player();

	int cnt = 0;
	int choice;
	int ctr = 0;

	std::string login, loginCheck;
	std::string passwordCheck;
	std::string name;
	std::string surName;
	std::string pass;
	std::string pass2;
	std::string corPass;
	std::string name2;    // ��� ��������
	std::string cource;  // ���� ��������

	void studentInfo()
	{
		std::cout << std::endl;
		std::cout << " ������� ���� ���: "; std::cin >> name;           // ������ ��� ��������
		std::cout << " ������� ��� �����: "; std::cin.ignore() >> cource; // ������ ����
		std::cout << std::endl;
	}

};

