#include <iostream>
#include <string>
using namespace std;


/*������� �������. ��������� ������� c++.*/

//int Sum(int a, int b, int c) {
//	return a + b + c;
//}
//
//int Sum(int a, int b) {			// ���������� ������� � ����� int
//	return a + b;
//}
//
//double Sum(double a, double b) {    // ���������� ������� � ����� double
//	return a + b;
//}
//
//float Sum(float a, float b, float c) {  // ���������� ������� � ����� float
//	return a + b + c;
//}

template <typename T1, typename T2>  // ��������� ������� � ����� ������� ����������� "�1" � "�2". �.�. ����� ���������� ������ ���� ������.
T1 Sum(T1 a, T2 b) {	
	return a + b;
}

int main() {
	setlocale(LC_ALL, "ru");

	cout << Sum(5, 2) << endl; // ����� ������ �� �������

	cout << Sum(5.2, 2) << endl; // ����� ������ �� �������


	system("pause");
	return 0;
}