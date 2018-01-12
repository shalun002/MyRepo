#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <ostream>




class Registration
{
public:

	std::string name;
	std::string surName;
	std::string login;
	std::string pass;
	std::string corPass;

	Registration();
	~Registration();

	
	void registration()
	{
		std::ofstream out("UserInfo.txt"); // создаём переменную fout типа ofstream для записи
		out.open("UserInfo.txt", std::ios::app); // открываем файл и дополнительно указываем ofstream::app для дозаписывания в конец (без затирания)
		std::string str = name, surName, login, pass, corPass;
		if (!out.is_open())  // проверка на открытия файла
		{
			std::cout << "Файл не найден" << std::endl;
		}
		else {
			system("cls");
			std::cout << "\n\n";
			std::cout << "\t\t\t\t\t\t\t\t\t Добро пожаловать на форму регистрации!" << "\n\n\n\n";
			std::cout << " Введите имя: "; out << name;
			std::cout << " Введите фамилию: "; std::cin.ignore() >> surName;
			std::cout << " Придумайте логин: "; std::cin >> login;
			std::cout << " Придумайте пароль: "; std::cin >> pass;
			std::cout << " Повторите пароль: ";  std::cin >> corPass;
			std::cout << "\n\n";
			std::cout << "\t\t\t\t\t Поздравляем! Вы успешно зарегистрировались. Теперь вам необходимо авторизироваться для прохождения тестирования." << "\n\n\n\n";
			system("pause");
		}
		out.close(); // закрытие файла

		system("cls");
	}
};

