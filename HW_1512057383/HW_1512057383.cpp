// HW_1512057383.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



/*Задание №1
Создать класс для работы с бинарным деревом, содержащим англо-русский словарь. Каждый узел содержит счетчик обращений к слову в данном узле. В процессе
эксплуатации словаря при каждом вызове слова в счетчик обращений добавляется единица. Написать программу, которая: 
■ обеспечивает начальный ввод словаря с конкретными значениями счетчика обращений; 
■ позволяет отобразить слово и его перевод;
■ позволяет добавить,заменить,удалить перевод слова; 
■ отображает топ-3 самых популярных слов (определяем популярность на основании счетчика обращений); 
■ отображает топ-3 самых непопулярных слов (определяем непопулярность на основании счетчика обращений).*/


class Tree {
private:
	class Node {
	private:
		string eng;
		string rus;
		Node* left;
		Node* right;
	public:
		Node(string a, string b) :eng(a), rus(b), left(NULL), right(NULL) {}
		void insert(string a, string b) {
			if (a>eng&&right) right->insert(a, b);
			else if (a>eng && !right) right = new Node(a, b);
			else if (a<eng&&left) left->insert(a, b);
			else left = new Node(a, b);
		}
		void print() {
			if (left) left->print();
			std::cout << eng << " - " << rus << "\n";
			if (right) right->print();
		}
	};
	Node* root;
public:
	Tree() :root(NULL) {}
	void insert(string, string);
	void print();
};

void Tree::insert(string a, string b) {
	if (!root) root = new Node(a, b);
	else root->insert(a, b);
}

void Tree::print() {
	root->print();
}

int main() {
	setlocale(LC_ALL, "ru");

	Tree dict;
	dict.insert("zero", "нуль");
	dict.insert("achieve", "достигать");
	dict.insert("main", "главный");
	dict.insert("apply", "применять");
	dict.print();

	system("pause");
	return 0;
}