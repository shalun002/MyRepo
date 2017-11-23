#include <iostream>
#include <string>
using namespace std;

/*������� 1.
���������� ����� �����. ���������� ������� ���������
� ����������� � �������� ����������-������. ����������
�������-����� ��� ����� ������ � ����������-�����,
��� ���������� �������������� �������� (��������,
���������, ���������, �������, � �.�.).*/

class Fraction {		// ����� �����
private:
	int numerator; //���������
	int denominator; //�����������

	int NOD(int ch, int zn) {     //���������� ����� ��������
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
		cout << " ������� ���������: "; cin >> numerator;
		cout << " ������� �����������: "; cin >> denominator;
		cout << endl;
		cout << " ���������� ����� - " << numerator << "/" << denominator << endl;
		cout << endl;
		cout << " =============================================== " << endl;
		cout << endl;
		cout << " \t\t=== �������� �������� ===" << endl;
		cout << endl;
		cout << " 1 - ��������� � ����� ����� " << endl;
		cout << " 2 - ������ ����� �� ����� " << endl;
		cout << " 3 - �������� ����� �� ����� " << endl;
		cout << " 4 - ��������� ����� ��  ����� " << endl;
		cout << endl;
		cout << " ��� �����: "; cin >> choice;
		cout << endl;
		switch (choice)
		{
		case 1:
			cout << " ������� ���������: "; cin >> c;
			summ(c); break;
		case 2:
			cout << " ������� ����������: "; cin >> c;
			sub(c); break;
		case 3:
			cout << " ������� ���������: "; cin >> c;
			mult(c); break;
		case 4:
			cout << " ������� ��������: "; cin >> c;
			div(c); break;
		default:
			cout << " �� ���������� ������ " << endl;
			break;
		}

	}
	void summ(int ch) {
		numerator += (ch * denominator);
		cout << " ��������� ��������: " << numerator << "/" << denominator << endl;
		cout << endl;
	}
	void sub(int ch) {
		numerator -= (ch * denominator);
		cout << " ��������� ���������: " << numerator << '/' << denominator << endl;
		cout << endl;
	}
	void mult(int ch) {
		numerator *= ch;
		cout << " ��������� ���������: " << numerator << '/' << denominator << endl;
		cout << endl;
	}
	void div(int ch) {
		denominator *= ch;
		cout << " ��������� �������: " << numerator << '/' << denominator << endl;
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