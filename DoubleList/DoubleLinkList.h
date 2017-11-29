#pragma once
#include "Node.h"

//описание класса двусвязный список и прототипы его функций
//template<typename T>
class DoubleLinkList{

public:
	Node *first, *last;
	//пустой конструктор для создания двусвязного списка
	DoubleLinkList();
	~DoubleLinkList();

	void addToLast(const int &);
	void addToFirst(const int &);
	void show();
};

