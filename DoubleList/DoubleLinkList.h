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

	void add(const T &);
};

