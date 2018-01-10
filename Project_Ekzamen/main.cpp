#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <functional>

class Student;
class Russian;
class Matem;
class History;
class Menu;


class Menu
{
public:
	static void menu()
	{
		while (true) {
			std::cout << std::endl;
			std::cout << " 1. Тест по предмету русский язык " << std::endl;
			std::cout << " 2. Тест по предмету математика " << std::endl;
			std::cout << " 3. Тест по предмету история " << std::endl;
			std::cout << " 4. Пройти тест в другое время " << std::endl;
			std::cout << std::endl;
			std::cout << "-------------------------------------" << std::endl;
			std::cout << std::endl;

			int choiсe;
			std::cout << "Ваш выбор - "; std::cin >> choiсe;
			switch (choiсe) {
			case 1: system("cls");
				std::cout << " Вы выбрали тест по предмету русский язык " << std::endl;
				Russian::start(); 
				break;
			case 2: system("cls");  break;
			case 3: system("cls");  break;
			case 4: system("cls");  break;
			case 0: return;
			}
		}

	}
	
	Menu();
};


class Student
{
public:
	std::string name;  //имя студента
	std::string cource;  // курс студента
	std::string subject; // тест по предмету т.е предмет

	 void studentInfo()
	{
		std::cout << " Введите имя: "; std::cin >> name;
		std::cout << " Введите курс: "; std::cin.ignore() >> cource;
		std::cout << " Выберите предмет: ";
		std::cout << std::endl;
		Menu::Menu::menu(); // вызов функции меню
	}
	
	Student(std::string &name, std::string &corce, std::string &subject) 
	{
		this->name = name;
		this->cource = corce;
		this->subject = subject;
	}

	Student() {}
	~Student() {};
};

class Russian
{
public:

	static void start()
	{
		char y, n, x;
		std::cout << " Начать тест? yes/no "; std::cin >> x;

		if (x == y)
		{
			std::cout << " \tТест начат " << std::endl;
			Test();
		}
		else if (x == n)
		{
			std::cout << " \tТест закончен " << std::endl;
			return Menu::Menu::menu();
		}
	}

	static void Test()
	{

	}
};

class Matem
{

};

class History
{

};




int main()
{
	setlocale(LC_ALL, "ru");

	Student st;
	st.studentInfo();

	system("pause");
	return 0;
}

Menu::Menu()
{

}