#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main() {
	setlocale(LC_ALL, "ru");

	ifstream t("file.txt"); // ����� � �����
	string str;

	if (t.is_open()) {   // ���� ���� ������
		while (getline(t, str)) { // ������� �� ����� ������ � �����
			cout << str;
		}
	}
	t.close(); // �������� �����

	ofstream o("file.txt"); // ������� �������� ����� � ����
	string s;  // ������ � ������� ����� ����������
	cin >> s; // ���� ������

	while (getline(cin, s)) { // ���� ������ ���������, getline ����� ����� ��� ��������
		while (s != "exit") {   // ������� �� ��� ��� ���� �� �������� "exit"
			o << s; // ���������� � �����, ������������� ������������ � ����
		}
		else break;  // �������� � �������
	}
	o.close();

	system("pause");
	return 0;
}