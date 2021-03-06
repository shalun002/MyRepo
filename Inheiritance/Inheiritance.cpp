// Inheiritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//class Student {   // базовый класс, у кого наследуют
//protected:
//	int x;
//public:
//	Student() {
//		cout << "Student()" << endl;
//	}
//	~Student() {
//		cout << "~Student()" << endl;
//	}
//};
//
//class Master : public Student {  // дочерний класс
//public:
//	Master() {
//		cout << "Master()" << endl;
//	}
//	~Master() {
//		cout << "~Master()" << endl;
//	}
//	void show() {
//		cout << x << endl;
//	}
//
//};
//
//int main()
//{
//	Student *a;
//	a = new Master();
//
//	delete a;
//
//	system("pause");
//    return 0;
//}

class Mammal {

public:
	Mammal() {
		cout << "Mammal()" << endl;
	}

	~Mammal() {
		cout << "~Mammal()" << endl;
	}
	virtual void move() = 0;
};

class Hource : public Mammal {   // базовый класс, у кого наследуют
protected:
	int x;
public:
	Hource() {
		cout << "Hource()" << endl;
	}
	~Hource() {
		cout << "~Hource()" << endl;
	}
	void move() {
		cout << "Hource move" << endl;
	}
};

class Human : public Mammal {   // базовый класс, у кого наследуют
protected:
	int x;
public:
	Human() {
		cout << "Human()" << endl;
	}
	~Human() {
		cout << "~Human()" << endl;
	}
	void move() {
		cout << "Human move" << endl;
	}
};

class Centaur : public Human, public Hource {  // дочерний класс
public:
	Centaur() {
		cout << "Centaur()" << endl;
	}
	~Centaur() {
		cout << "~Centaur()" << endl;
	}
};

int main()
{
	Centaur *a = new Centaur();

	delete a;

	system("pause");
	return 0;
}