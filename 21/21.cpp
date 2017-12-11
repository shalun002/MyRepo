// 21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//class Employer {
//public:
//
//	Employer() {}
//	~Employer() {}
//
//	virtual void Print() {}
//};
//
//class President:public Employer{
//public:
//	
//	void Print() {
//		cout << "Boss! " << endl;
//		cout << endl;
//	}
//};
//
//class Manager : public Employer {
//public:
//	
//	void Print() {
//		cout << "Boss3! " << endl;
//		cout << endl;
//	}
//};
//
//class Worker :public Employer {
//public:
//	
//	void Print() override {
//		cout << "Boss2! " << endl;
//		cout << endl;
//	}
//};
//
//int main()
//{
//	Manager manager;
//	manager.Print();
//
//	Worker worker;
//	worker.Print();
//
//	President president;
//	president.Print();
//
//
//	system("pause");
//    return 0;
//}

class Figure {
public:
	Figure() {}
	~Figure() {}

	virtual float getArea() = 0;

};

class Rectangle : public Figure {
public:
	float width, height;

public:
	Rectangle() {}
	~Rectangle() {}

	Rectangle(float width, float height) {
		this->width = width;
		this->height = height;
	}
	float getArea() override {
		return width * height;
	}
};

class Circle : public Figure {
public:
	float radius;

	Circle(float radius){
		this->radius = radius;
	}

	~Circle() {}
	float getArea() override {
		return radius * radius * 3.14;
	}
};

int main() {
	setlocale(LC_ALL, "ru");

	Figure **arr = new Figure*[2];
	arr[0] = new Rectangle(3, 2);
	arr[1] = new Circle(2);
	for (size_t i = 0; i < 2; ++i) {
		cout << arr[i]->getArea() << endl;
		delete arr[i];
	}

	delete[] arr;

	system("pause");
	return 0;
}