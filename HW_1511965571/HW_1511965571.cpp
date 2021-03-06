// HW_1511965571.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*Задание №1
Создайте шаблонный класс двусвязного списка для работы с целыми значениями.
Требуется создать реализации для типичных операций над элементами:
AddToHead – добавление элемента в голову;
AddToTail – добавление элемента в хвост;
DeleteFromHead – удаление элемента из головы;
DeleteFromTail – удаление элемента из хвоста;
Show – отображение всех элементов списка на экран*/

class Node       //Структура являющаяся звеном списка
{
public:
	int x;     //Значение x будет передаваться в список
	Node *previus, *next; //Указатели на адреса следующего и предыдущего элементов списка
	  
	Node() {}  // Пустой конструктор класса Node

	Node(const int x) {
		this->x = x;
		previus = next = NULL;
	}

	~Node() {} //Деструктор класса Node
};

class DoubleLinkedList   //Создаем тип данных Список
{
public:
	Node *first, *last; //Указатели на адреса начала списка и его конца

	DoubleLinkedList() : first(NULL), last(NULL) {}; //Инициализируем адреса как пустые
	~DoubleLinkedList(); //Деструктор
	void Show(); //Функция отображения списка на экране
	void AddToHead(const int &x);     // добавление элемента в голову   ---
	void AddToTail(const int &x);     // добавление элемента в хвост
	void DeleteFromHead();	// удаление элемента из головы;
	void DeleteFromTail();	// удаление элемента из хвоста;
};

DoubleLinkedList::~DoubleLinkedList() //Деструктор
{
}
void DoubleLinkedList :: AddToHead(const int &x){
	if (first == NULL) {
		last = first = new Node(x);
	}
	else {
		Node *temp = new Node(x);
		first->previus = temp;
		temp->next = first;
		first = temp;
	}
	
}
void DoubleLinkedList :: AddToTail(const int &x) {
	if (first == NULL) {
		last = first = new Node(x);
	}
	else {
		Node *temp = new Node(x);
		last->next = temp;
		temp->previus = last;
		last = temp;
	}
}
void DoubleLinkedList :: DeleteFromHead() {
	first = first->next;
}
void DoubleLinkedList :: DeleteFromTail() {
	last->previus->next = NULL;
	last = last->previus;
}
void DoubleLinkedList :: Show() {
	
	if (first == NULL) {
		cout << "List is empty" << endl;
	}
	else {
		
		for (Node *temp = first; temp != NULL; temp = temp->next) {
			cout << temp-> x << "\n"; 			
		}
	}
}

int main()
{
	DoubleLinkedList *dll = new DoubleLinkedList(); 
	dll->AddToHead(2); 
	dll->AddToHead(3);
	dll->AddToHead(4);
	dll->AddToTail(1);
	dll->Show(); 

	cout << endl;
	cout << endl;

	dll->DeleteFromHead();
	dll->Show();

	cout << endl;
	cout << endl;

	dll->DeleteFromTail();
	dll->Show();

	cout << endl;
	cout << endl;

	delete dll;

	system("PAUSE");
	return 0;
}
