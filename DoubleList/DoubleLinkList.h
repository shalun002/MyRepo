#pragma once
#include "Node.h"

//�������� ������ ���������� ������ � ��������� ��� �������
//template<typename T>
class DoubleLinkList{

public:
	Node *first, *last;
	//������ ����������� ��� �������� ����������� ������
	DoubleLinkList();
	~DoubleLinkList();

	void addToLast(const int &);
	void addToFirst(const int &);
	void show();
};

