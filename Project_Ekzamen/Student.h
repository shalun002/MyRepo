#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class Student
{
public:
	std::string name;    // ��� ��������
	std::string cource;  // ���� ��������
	int subject; // ���� �� �������� �.� �������

	void studentInfo()
	{	
		std::cout << std::endl;
		std::cout << " Enter your name: "; std::cin >> name;           // ������ ��� ��������
		std::cout << " Enter a course: "; std::cin.ignore() >> cource; // ������ ����
		std::cout << " Select item: ";  std::cin >> subject;
		std::cout << std::endl;				
	}

	Student();
	~Student();
};
