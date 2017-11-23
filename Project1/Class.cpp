#include <iostream>
#include <string>
using namespace std;

/*Задание 1.
Реализуйте класс Дробь. Необходимо хранить числитель
и знаменатель в качестве переменных-членов. Реализуйте
функции-члены для ввода данных в переменные-члены,
для выполнения арифметических операций (сложение,
вычитание, умножение, деление, и т.д.).*/

class Fraction {		// Класс дробь
private:
	int numerator; //числитель
	int denominator; //знаменатель

	int NOD(int ch, int zn) {     //наименьший общий делитель
		if (zn == 0) return ch;
		return NOD(zn, ch % zn);
	}
public:
	Fraction() {}
	~Fraction() {};
	Fraction(int x, int y) {
		numerator = x;
		denominator = y;
	}
	void imput() {
		int c = 0;
		int choice = 0;
		cout << endl;
		cout << " Введите числитель: "; cin >> numerator;
		cout << " Введите знаменатель: "; cin >> denominator;
		cout << endl;
		cout << " Получилась дробь - " << numerator << "/" << denominator << endl;
		cout << endl;
		cout << " =============================================== " << endl;
		cout << endl;
		cout << " \t\t=== Выберите действие ===" << endl;
		cout << endl;
		cout << " 1 - Прибавить к дроби число " << endl;
		cout << " 2 - Отнять число от дроби " << endl;
		cout << " 3 - Умножить дробь на число " << endl;
		cout << " 4 - Разделить дробь на  число " << endl;
		cout << endl;
		cout << " Ваш выбор: "; cin >> choice;
		cout << endl;
		switch (choice)
		{
		case 1:
			cout << " Введите слагаемое: "; cin >> c;
			summ(c); break;
		case 2:
			cout << " Введите вычитаемое: "; cin >> c;
			sub(c); break;
		case 3:
			cout << " Введите множитель: "; cin >> c;
			mult(c); break;
		case 4:
			cout << " Введите делитель: "; cin >> c;
			div(c); break;
		default:
			cout << " Не корректные данные " << endl;
			break;
		}

	}
	void summ(int ch) {
		numerator += (ch * denominator);
		cout << " Результат сложения: " << numerator << "/" << denominator << endl;
		cout << endl;
	}
	void sub(int ch) {
		numerator -= (ch * denominator);
		cout << " Результат вычитания: " << numerator << '/' << denominator << endl;
		cout << endl;
	}
	void mult(int ch) {
		numerator *= ch;
		cout << " Результат умножения: " << numerator << '/' << denominator << endl;
		cout << endl;
	}
	void div(int ch) {
		denominator *= ch;
		cout << " Результат деления: " << numerator << '/' << denominator << endl;
		cout << endl;
	}

};



int main() {
	setlocale(LC_ALL, "ru");

	Fraction fr;
	fr.imput();

	system("pause");
	return 0;
}