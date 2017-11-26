#include <iostream>
#include <string>
using namespace std;


/*���������� ��������� �������� � ���������. ���������� ���������� ������.*/


class MyClass {
private:
	int x;
	int y;
public:

	MyClass(){}
	MyClass(int valueX, int valueY) // ����������� ������
	{
		x = valueX; // ����������� �������� "�" 
		y = valueY; // // ����������� ��������  "�"
	}

	//bool operator ==(const MyClass &other) {				// ���������� ��������� ==
	//	return this->x == other.x && this->y == other.y;
	//}


	//bool operator !=(const MyClass &other) {				// ���������� ��������� !=
	//	return !(this->x == other.x && this->y == other.y);
	//}

	MyClass operator +(const MyClass &other) {   //���������� ��������� ��������.
		MyClass temp;
		temp.x = this->x + other.x;
		temp.y = this->y + other.y;
		return temp;
	}
	
	// ������� ����� �������� ������, ����� ����� ����� "operator", �� � ���������� ��� ��������, ������� ���������� �����������
	MyClass operator -(const MyClass &other) {   /* ���������� ��������� ���������. � ������� ������� "const" ��������, ��� �������� ��� ���������� �������� �� �����. ����� ���� �������� ������
											        � ����� ���������� "other", ������� ��������� �������� �� ������, � �� ������� ��������� �����*/
	// ����� ��������� ���������� "temp"
		MyClass temp;  
		temp.x = this->x - other.x;
		temp.y = this->y - other.y;
		return temp;
	}

	~MyClass() {}
};


int main() {
	setlocale(LC_ALL, "ru");

	MyClass a(4, 5);  // ������ �� ������
	MyClass b(4, 4);

	MyClass c = a + b;
	//MyClass c = a - b;


	//bool result = a == b;
	//bool result = a != b;

	system("pause");
	return 0;
}