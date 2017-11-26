#include <iostream>
#include <string>
using namespace std;


/*Шаблоны функций. Шаблонные функции c++.*/

//int Sum(int a, int b, int c) {
//	return a + b + c;
//}
//
//int Sum(int a, int b) {			// Перегрузка функции с типом int
//	return a + b;
//}
//
//double Sum(double a, double b) {    // Перегрузка функции с типом double
//	return a + b;
//}
//
//float Sum(float a, float b, float c) {  // Перегрузка функции с типом float
//	return a + b + c;
//}

template <typename T1, typename T2>  // шаблонная функция с двумя разными параметрами "Т1" и "Т2". т.е. можно передавать разные типы данных.
T1 Sum(T1 a, T2 b) {	
	return a + b;
}

int main() {
	setlocale(LC_ALL, "ru");

	cout << Sum(5, 2) << endl; // Вывод фунции на консоль

	cout << Sum(5.2, 2) << endl; // Вывод фунции на консоль


	system("pause");
	return 0;
}