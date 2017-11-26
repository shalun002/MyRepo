#include <iostream>
#include <string>
using namespace std;


/*���������� ��������� ��������� == � �� ����� !=. ���������� ���������� ���������� ���������.*/


class MyClass {
private:
		int x;
		int y;
public:
	MyClass(int valueX, int valueY) // ����������� ������
	{
		x = valueX; // ����������� �������� "�" 
		y = valueY; // // ����������� ��������  "�"
	}

	bool operator ==(const MyClass &other) {				// ���������� ��������� ==
		return this->x == other.x && this->y == other.y;
	}
	bool operator !=(const MyClass &other) {				// ���������� ��������� !=
		return !(this->x == other.x && this->y == other.y);
	}

	
};


int main() {
	setlocale(LC_ALL, "ru");

	MyClass a(4, 5);  // ������ �� ������
	MyClass b(4, 4);

	bool result = a == b;
	//bool result = a != b;

	cout << result << endl;

	system("pause");
	return 0;
}