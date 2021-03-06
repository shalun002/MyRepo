// HW_1511965687.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*Задание №2
Добавить в класс из задания 1 следующие функции:
вставка элемента в заданную позицию,
удаление элемента по заданной позиции,
поиск заданного элемента (функция возвращает позицию найденного элемента в случае
успеха или NULL в случае неудачи),
поиск и замена заданного элемента (функция возвращает количество замененных
элементов в случае успеха или -1 в случае неудачи),
переворот списка*/


class Node       
{
public:
	int x; 
	Node *previus, *next; 

	Node() {}  
	Node(const int x) {
		this->x = x;
		previus = next = NULL;
	}
	~Node() {} 
};

class DoubleLinkedList   
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
	void AddElementToSpecifiedPosition(int index, const int &x); // вставка элемента в заданную позицию
	void DeleteElementToSpecifiedPosition(int index);  // удаление элемента по заданной позиции
	int SearchElement(const int &x); // поиск заданного элемента (функция возвращает позицию найденного элемента в случае успеха или NULL в случае неудачи)
	int SearchElementAndReplace(const int &x, const int &x1);  // поиск и замена заданного элемента (функция возвращает количество замененных	элементов в случае успеха или - 1 в случае неудачи),
	void ReversalList();	// переворот списка
};

DoubleLinkedList::~DoubleLinkedList() //Деструктор
{
}
void DoubleLinkedList::AddToHead(const int &x) {
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
void DoubleLinkedList::AddToTail(const int &x) {
	if (first/*начало*/ == NULL) {
		last = first = new Node(x);
	}
	else {
		Node *temp = new Node(x);
		last->next = temp;
		temp->previus = last;
		last = temp;
	}
}
void DoubleLinkedList::DeleteFromHead() {
	first = first->next;
}
void DoubleLinkedList::DeleteFromTail() {
	last->previus->next = NULL;
	last = last->previus;
}
void DoubleLinkedList::Show() {

	if (first == NULL) {
		cout << "List is empty" << endl;
	}
	else {

		for (Node *temp = first; temp != NULL; temp = temp->next) {
			cout << temp->x << "\n";
		}
	}
}
void DoubleLinkedList::AddElementToSpecifiedPosition(int index, const int &x) {
	int i = 0;
	for (Node * temp = first; temp != NULL; temp = temp->next, i++) {
		if (i == index - 2) {
			Node *inst = new Node(x);
			inst->next = temp->next;
			temp->next = inst;
			inst->previus = temp;
		}
	} 
}
void DoubleLinkedList::DeleteElementToSpecifiedPosition(int index) {
	int i = 0;
	for (Node *temp = first; temp != NULL; temp = temp->next, i++) {
		if (i == index - 1) {
			temp->previus->next = temp->next;
			temp->next->previus = temp->previus;
		}
	}
	i = 0;
	for (Node *temp = first; temp != NULL; temp = temp->next, i++) {
	}
}
int DoubleLinkedList::SearchElement(const int &x) {
	int i = 0;
	bool f = false;
	for (Node *temp = first; temp != NULL; temp = temp->next, i++) {
		if (temp->x == x) {
			cout << "Элемент под номером " << temp->x << " находиться на позиции - " << i + 1 << endl;
			f = true;
		}
	}
	if (!f) { 
		cout << x << " - NOT FOUND!"; return 0;
	}
	return x;
}
int DoubleLinkedList::SearchElementAndReplace(const int &x, const int &x1) {
	int i = 0, count = 1;
	bool f = false;
	for (Node *temp = first; temp != NULL; temp = temp->next, i++) {
		if (temp->x == x) {
			temp->x = x1;
			cout << "Элемент под номером " << x << " заменили на элемент " << temp->x << ". Колличество замененных элементов = " << count << "\n";
			f = true; count++;
		}
	}
	if (!f) { 
		cout << x << " - NOT FOUND!\n\n"; return -1; 
		cout << endl;
	}

	i = 0;
	for (Node *temp = first; temp != NULL; temp = temp->next, i++) {
	}

}
void DoubleLinkedList::ReversalList() {
	int i = 0;
	Node *temp = first;
	first = last;
	last = temp;
	for (temp = first; temp != NULL; temp = temp->previus, i++) {
		cout << temp->x << "\n";
	}
	cout << "\n";
}

int main()
{
	setlocale(LC_ALL, "ru");

	DoubleLinkedList *dll = new DoubleLinkedList();
	dll->AddToHead(12);
	dll->AddToHead(13);
	dll->AddToHead(14);
	dll->AddToHead(15);
	dll->AddToHead(16);
	dll->AddToTail(11);
	dll->Show();

	cout << endl;

	/*dll->DeleteFromHead();
	dll->Show();*/

	/*dll->DeleteFromTail();
	dll->Show();*/
	
	/*dll->AddElementToSpecifiedPosition(4, 55);
	dll->Show();*/

	/*dll->DeleteElementToSpecifiedPosition(3);
	dll->Show();*/

	/*dll->SearchElement(13);
	cout << endl;*/

	/*dll->SearchElementAndReplace(14, 555);
	cout << endl;
	dll->Show();
	cout << endl;*/

	/*dll->ReversalList();
	cout << endl;*/

	delete dll;

	system("PAUSE");
	return 0;
}

