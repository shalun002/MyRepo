#include <iostream>
#include <string>
using namespace std;


/*����������� ��������*/


class MyClass{       // ������� �����
public:
	int *data;			// ��������� ���� ������

	MyClass(int size) {    // ����������� ������
		this->Size = size;  // ������ Size ������������ � ������ ������� size
		this->data = new int[size];
		for (int i = 0; i < size; i++){
			data[i] = i;
		}
		cout << "����������� " << this << endl;  // ����� � ������� ������������ ������ MyClass
	}

	MyClass(const MyClass &other) {			// ����������� �����������
		this->Size = other.Size;
		this->data = new int[other.Size];
		for (int i = 0; i < other.Size; i++){
			this->data[i] = other.data[i];
		}
		cout << "����������� ����������� " << this << endl;
	}

	~MyClass() {	//���������� ������ MyClass
	cout << "���������� " << this << endl;  // ����� � ������� ����������� ������ MyClass
		delete[] data;  // ������������ ������
	};

private:
	int Size;     // ��������� ���� ������

};

int main(){
	setlocale(LC_ALL, "");

	MyClass cl(10);  //������ ������ MyClass
	MyClass cl2(cl);

	return 0;
}
