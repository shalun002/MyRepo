#pragma once
#include "Node.h"

//�������� ������ ���������� ������ � ��������� ��� �������
template<typename T>
class DoubleLinkList{

public:
	Node<T> *first, *last;
	//������ ����������� ��� �������� ����������� ������
	DoubleLinkList();
	~DoubleLinkList();

	void addToLast(const T &);
	void addToFirst(const T &);
	void show();
};

