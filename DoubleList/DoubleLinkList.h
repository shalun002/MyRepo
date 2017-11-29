#pragma once
#include "Node.h"

//описание класса двусвязный список и прототипы его функций
template<typename T>
class DoubleLinkList{

public:
	Node<T> *first, *last;
	//пустой конструктор для создания двусвязного списка
	DoubleLinkList();
	~DoubleLinkList();

	void add(const T &);
};

