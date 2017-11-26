#include <iostream>
#include <string>
#include <vector>
using namespace std;


///*���������� ����� �����. ���������� ������� ���������
//� ����������� � �������� ����������-������. ����������
//�������-����� ��� ����� ������ � ����������-�����,
//��� ���������� �������������� �������� (��������,
//���������, ���������, �������, � �.�.).*/
//
//
//class fraction {		// ����� �����
//private:
//	int numerator; //���������
//	int denominator; //�����������
//
//	int nod(int ch, int zn) {     //���������� ����� ��������
//		if (zn == 0) return ch;
//		return nod(zn, ch % zn);
//	}
//public:
//	fraction() {}
//	~fraction() {};
//	fraction(int x, int y) {
//		numerator = x;
//		denominator = y;
//	}
//	void imput() {
//		int c = 0;
//		int choice = 0;
//		cout << endl;
//		cout << " ������� ���������: "; cin >> numerator;
//		cout << " ������� �����������: "; cin >> denominator;
//		cout << endl;
//		cout << " ���������� ����� - " << numerator << "/" << denominator << endl;
//		cout << endl;
//		cout <<" =============================================== " << endl;
//		cout << endl;
//		cout << " \t\t=== �������� �������� ===" << endl;
//		cout << endl;
//		cout << " 1 - ��������� � ����� ����� " << endl;
//		cout << " 2 - ������ ����� �� ����� " << endl;
//		cout << " 3 - �������� ����� �� ����� " << endl;
//		cout << " 4 - ��������� ����� ��  ����� " << endl;
//		cout << endl;
//		cout << " ��� �����: "; cin >> choice;
//		cout << endl;
//		switch (choice)
//		{
//		case 1: 
//			cout << " ������� ���������: "; cin >> c;
//			summ(c); break;
//		case 2:
//			cout << " ������� ����������: "; cin >> c;
//			sub(c); break;
//		case 3:
//			cout << " ������� ���������: "; cin >> c;
//			mult(c); break;
//		case 4:
//			cout << " ������� ��������: "; cin >> c;
//			div(c); break;
//		default:
//			cout << " �� ���������� ������ " << endl;
//			break;
//		}
//
//	}
//	void summ(int ch) {
//		numerator += (ch * denominator);
//		cout << " ��������� ��������: " << numerator << "/" << denominator << endl;
//		cout << endl;
//	}
//	void sub(int ch) {
//		numerator -= (ch * denominator);
//		cout << " ��������� ���������: " << numerator << '/' << denominator << endl;
//		cout << endl;
//	}
//	void mult(int ch) {
//		numerator *= ch;
//		cout << " ��������� ���������: " << numerator << '/' << denominator << endl;
//		cout << endl;
//	}
//	void div(int ch) {
//		denominator *= ch;
//		cout << " ��������� �������: " << numerator << '/' << denominator << endl;
//		cout << endl;
//	}
//
//};
//
//
//
//int main() {
//	setlocale(LC_ALL, "ru");
//
//	fraction fr;
//	fr.imput();
//
//	system("pause");
//	return 0;
//}

///*�������� ���������� "���������� �����". ���������� ������� ������ �� �������� (���, �������� �������, ������� �������, ��������� �������, ��������������
//���������� � ��������) ������ ���������������� ������. ��������� ����� �����������-�������, ���������-�������, ��������������, inline-���������-�������,
//����������� ��������������, ���������� ����������. ����������� ���������� �������� ����������� ������ ��� ���. ������������ ������������ ����������� ��-
//������� ����� ���������, ������� ���������, ������ ��������� �� ���, ���������� ���� ���������, ��������� ���������� � ���� � ��������� �� �����.*/
//
//
//
//class Contact {
//	string *name, *phone, *info;
//public:
//	Contact() {
//	}
//	Contact(string name, string phone, string info) {
//		this->name = new string(name);
//		this->phone = new string(phone);
//		this->info = new string(info);
//	}
//	~Contact() {
//		delete name;
//		delete phone;
//		delete info;
//	}
//	string getName() {
//		return *name;
//	}
//	void setName(string name) {
//		*this->name = name;
//	}
//	string getPhone() {
//		return *phone;
//	}
//	void setPhone(string phone) {
//		*this->phone = phone;
//	}
//	string getInfo() {
//		return *info;
//	}
//	void setInfo(string info) {
//		*this->info = info;
//	}
//	inline void print() {
//		cout << "name: " << getName() << ", phone: " << *phone << ", info: " << getInfo() << endl;
//	}
//	bool operator ==(const Contact& contact) const {
//		return true;
//	}
//};
//
//class PhoneBook {
//public:
//	vector<Contact> *contacts;
//	PhoneBook() {
//		contacts = new vector<Contact>();
//		contacts->reserve(10);
//	}
//	void add(string name, string phone, string info) {
//		contacts->push_back(*(new Contact(name, phone, info)));
//	}
//	~PhoneBook() {
//		delete contacts;
//	}
//};
//
//void f2() {
//	PhoneBook *a = new PhoneBook();
//	string name, phone, info;
//	cin >> name >> phone >> info;
//	a->add(name, phone, info);
//	cin >> name >> phone >> info;
//	a->add(name, phone, info);
//
//	for (int i = 0; i < a->contacts->size(); i++) {
//		cout << a->contacts->at(i).getName() << endl;
//		cout << a->contacts->at(i).getPhone() << endl;
//		cout << a->contacts->at(i).getInfo() << endl;
//	}
//	delete a;
//}
//int main()
//{
//	Contact a("Alex", "7772225599", "Student");
//	Contact b("Sergey", "7772798927", "Student");
//	cout << b.getInfo() << endl;
//	cout << a.getInfo() << endl;
//	
//	system("pause");
//	return 0;
//}

///*����������� ����� String, ������� � ���������� ����� �������������� ��� ������ �� ��������. ����� ������ ���������:
//�	 ����������� �� ���������, ����������� ������� ������ ������ 80 ��������;
//�	 �����������, ����������� ��������� ������ ������������� �������;
//�	 �����������, ������� ������ ������ � ���������� ���� � �������, ���������� �� ������������.
//���������� ������� ����������, � ����� ������������ ��������� ������������� �������������, ���� ��� ��������.
//����� ������ ��������� ������ ��� ����� ����� � ���������� � ������ ����� �� �����. ����� ����� �����������
//����������� �������-����, ������� ����� ���������� ���������� ��������� �������� �����.*/
//
//class MyString
//{
//	char *str;
//	int size;
//
//public:
//
//	MyString()
//	{
//		size = 81;
//		str = new char[size];
//	}
//
//	MyString(int n)
//	{
//		size = n + 1;
//		str = new char[size];
//	}
//	~MyString()
//	{
//		delete[] str;
//	}
//
//	void in_str()
//	{
//		cin.getline(str, size);
//	}
//
//	void show()
//	{
//		int k;
//		cout << str << endl;
//		k = strlen(str);
//		cout << "�������� - ����� ��������� ������: " << k;
//	}
//};
//
//
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//	MyString str;
//	cout << "������� ������ ������ 80 ��������: \n";
//	str.in_str();
//	cout << "������ 1 : \n";
//	str.show();
//	cout << "\n\n\n\n";
//	system("pause");
//	system("cls");
//
//	int l = 0;
//	cout << "������� ���������� �������� � ������: \n";
//	cin >> l;
//	MyString str2(l);
//	cout << "������� ������ : \n";
//	cin.ignore(1);
//	str2.in_str();
//	cin.ignore(1);
//	cout << "������ 2 : \n";
//	str2.show();
//	cout << "\n\n\n\n";
//	system("pause");
//	system("cls");
//}
