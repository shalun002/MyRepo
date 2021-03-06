// Home_Work_1513266495.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


/*Задание №1
Реализуйте программу, которая предоставляет функциональность по работе с файлами. Приложение получает у пользователя путь к файлу, после чего программа отображает интерфейс по
анализу содержимого файла. Возможности интерфейса:
■ Поиск заданной строки (по итогам показывать статистику поиска строки по всему файлу);
■ Замена строки на новую строку (по итогам показать статистику по замене строки);
■ Отображение файла на экран;
■ Переворот содержимого файла.
Используйте для работы с файлами потоки, а для работы со строками класс string.*/



class String {
public:
	std::string str, path, find, pos;
	String() {}
	~String() {}

	std::string CreateFile() {
		getline(std::cin, path);
		return path;
	}
	
	void GetInFile() {
		std::ofstream fout; // создаём переменную типа ofstream для записи
		fout.open(path, std::ofstream::app); // открываем файл и дополнительно указываем ofstream::app для дозаписывания в конец (без затирания)
		if (!fout.is_open()) { // проверка на открытия файла
			std::cout << "Файл не найден" << std::endl;
		}
		else { // посылаем в fout данные
			std::cin >> str;
			fout << str << std::endl;
			std::cout << std::endl;
		}
		fout.close(); // закрытие файла !!!
	}

	void Show() {
		std::ifstream fin; // создаём переменную типа ifstream для считывания
		fin.open(path); // открывает файл
		if (!fin.is_open()) { // проверка на наличие файла
			std::cout << "Файл не найден" << std::endl;
		}
		else {
			if (fin.is_open())
				while (getline(fin, str)) {
					system("cls");
					std::cout << str << std::endl;
					system("pause");
				}
		}
		fin.close(); // закрываем файд !!!
	}

	void Substitution() {
		std::ofstream fout;
		fout.open(path);
		if (!fout.is_open()) { // проверка на открытия файла
			std::cout << "Файл не найден" << std::endl;
		}
		else { // посылаем в fout данные
			std::cin >> str;
			fout << str << std::endl;
			std::cout << std::endl;
		}
		fout.close();
	}

	void FindString() {
		std::ifstream fin(path);
		//size_t npos;
		std::cout << "\n\t\tЧто искать? - "; std::cin >> find;
		//pos = str.find(find);
		while (getline(fin, str)) { 
			std::cout << str << std::endl;
		}
	}

	void Coup() {
		for (int i = str.size() - 1; i >= 0; --i) {
			std::cout << str[i]; std::cout << "\n\n";
		}
	}

	void Menu() {
		int choice;
		while (true) {
			system("cls");
			std::cout << "--------------- Меню ---------------" << std::endl;
			std::cout << std::endl;
			std::cout << "Нажмите '1' чтобы вывести весь файл на экран " << std::endl;  // Отображение файла на экран
			std::cout << "Нажмите '2' чтобы заменить строки на новую строку " << std::endl;  
			std::cout << "Нажмите '3' чтобы добписать строки в файл " << std::endl; 
			std::cout << "Нажмите '4' для поиск заданной строки " << std::endl;
			std::cout << "Нажмите '5' для переворота содержимого файла " << std::endl;
			std::cout << "Нажмите '0' для выхода " << std::endl;
			std::cout << std::endl;
			std::cout << "-------------------------------------" << std::endl;
			std::cout << std::endl;
			std::cout << "Ваш выбор - "; std::cin >> choice;
			switch (choice) {
			case 1: system("cls"); Show(); break;
			case 2: system("cls"); Substitution(); break;
			case 3: system("cls"); GetInFile(); break;
			case 4: system("cls"); FindString(); break;
			case 5: system("cls"); Coup(); break;
			case 0: return;
			}
		}
	}
};


int main()
{
	setlocale(LC_ALL, "ru");

	String S;
	std::cout << " Введите название файла - ";
	S.CreateFile();
	S.Menu();

	system("pause");
	return 0;
}