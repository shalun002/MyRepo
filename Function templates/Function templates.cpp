#include <iostream>
#include <string>
using namespace std;


/*������� �������. ��������� ������� c++. template typename. template class.*/


int Sum(int a, int b, int c) {
	return a + b + c;
}

int Sum(int a, int b) {			// ���������� ������� � ����� int
	return a + b;
}

double Sum(double a, double b) {    // ���������� ������� � ����� double
	return a + b;
}

float Sum(float a, float b, float c) {  // ���������� ������� � ����� float
	return a + b + c;
}

int main() {
	setlocale(LC_ALL, "ru");

	cout << Sum(5.3f, 2.2f, 5.6f) << endl; // ����� ������ �� �������
	system("pause");
	return 0;
}