#include <iostream>
#include <string>
using namespace std;

/*������ ������
�������� ������ ������*/

class Human {    // ������� ����� Human

public:						// ����������� ������� ���������

	string name;
	int age;				// ����  ������ � ������������� �����, ������� ����� ������ � ���� ������
	int weight; 

	void Print() {				// ����� ������ Human
		cout << "���: " << name << " " << "���: " << weight << " " << "�������: " << age << endl;
	}
};

int main() {
	setlocale(LC_ALL, "ru");

	Human human;         // ������� ������ ������

	human.age = 25;		// ������������� ����� ������
	human.name = "Afanasyi";
	human.weight = 58;

	human.Print();  //����� ������(�������) ������ Human

	system("pause");
	return 0;
}