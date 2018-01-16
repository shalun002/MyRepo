#pragma once
#include <iostream>
#include <string>


class SimpleClass {
public:
	int get() const;
	void set(int val);
	static SimpleClass& instance();
private:
	SimpleClass(int val);
	SimpleClass();
	int m_val;
};
//simpleclass.cpp
SimpleClass& SimpleClass::instance() {
	static SimpleClass instance;
	return instance;
}


class Player
{
public:

	Player();
	~Player();

	int cnt = 0;
	int choice;
	int ctr = 0;

	std::string login; // ����� login ��� �����������
	std::string name;	// ��� ��� ����������� 
	std::string surName;  // ������� ��� �����������
	std::string pass;   // ����������� corPass � pass, ������� � ����� �������������� ��� ������ ������
	std::string pass2;  // ������ ������ ��� ����������� 
	std::string corPass; // ������������� ������� ������
	std::string name2;    // ��� ��������
	std::string cource;  // ����� ���������
};

