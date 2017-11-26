#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Point {   // ������� �����

private:

	int x;		// ��������� ���������� "�" � "�"
	int y;

public:

	Point() {		// ����������� �� ���������
		x = 0;		
		y = 0;		// �������������� ����������
	}

	Point(int valueX, int valueY) {   // ����������� ��� ���������� 
		x = valueX;
		y = valueY;
	}

	int getX() {   // ������ ��� ���������� �
		return x;
	}

	void setX(int valueX) {		// ������ ��� ���������� �
		x = valueX;
	}

	int getY() {     // ������ ��� ���������� �
		return y;
	}

	void setY(int valueY) {       // ������ ��� ���������� �
		y = valueY;
	}

	void Print() {		// ����� ��� ������ ���������� � �������

		cout << "X: " << x << "\tY: " << y << endl << endl;
	}

	~Point() {}   // ����������
};

int main() {
	setlocale(LC_ALL, "ru");

	Point temp;				// ����� �� ������ 
	temp.Print();			// ����� �������(������)  Print

	Point temp2(2, 15);   // ����� �� ������ �� ����������
	temp2.Print();    // ����� �������(������)  Print

	system("pause");
	return 0;
}

