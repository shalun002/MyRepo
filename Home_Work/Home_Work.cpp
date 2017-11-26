#include <iostream>
#include <string>
#include <vector>
using namespace std;


///*Реализуйте класс Дробь. Необходимо хранить числитель
//и знаменатель в качестве переменных-членов. Реализуйте
//функции-члены для ввода данных в переменные-члены,
//для выполнения арифметических операций (сложение,
//вычитание, умножение, деление, и т.д.).*/
//
//
//class fraction {		// класс дробь
//private:
//	int numerator; //числитель
//	int denominator; //знаменатель
//
//	int nod(int ch, int zn) {     //наименьший общий делитель
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
//		cout << " введите числитель: "; cin >> numerator;
//		cout << " введите знаменатель: "; cin >> denominator;
//		cout << endl;
//		cout << " получилась дробь - " << numerator << "/" << denominator << endl;
//		cout << endl;
//		cout <<" =============================================== " << endl;
//		cout << endl;
//		cout << " \t\t=== выберите действие ===" << endl;
//		cout << endl;
//		cout << " 1 - прибавить к дроби число " << endl;
//		cout << " 2 - отнять число от дроби " << endl;
//		cout << " 3 - умножить дробь на число " << endl;
//		cout << " 4 - разделить дробь на  число " << endl;
//		cout << endl;
//		cout << " ваш выбор: "; cin >> choice;
//		cout << endl;
//		switch (choice)
//		{
//		case 1: 
//			cout << " введите слагаемое: "; cin >> c;
//			summ(c); break;
//		case 2:
//			cout << " введите вычитаемое: "; cin >> c;
//			sub(c); break;
//		case 3:
//			cout << " введите множитель: "; cin >> c;
//			mult(c); break;
//		case 4:
//			cout << " введите делитель: "; cin >> c;
//			div(c); break;
//		default:
//			cout << " не корректные данные " << endl;
//			break;
//		}
//
//	}
//	void summ(int ch) {
//		numerator += (ch * denominator);
//		cout << " результат сложения: " << numerator << "/" << denominator << endl;
//		cout << endl;
//	}
//	void sub(int ch) {
//		numerator -= (ch * denominator);
//		cout << " результат вычитания: " << numerator << '/' << denominator << endl;
//		cout << endl;
//	}
//	void mult(int ch) {
//		numerator *= ch;
//		cout << " результат умножения: " << numerator << '/' << denominator << endl;
//		cout << endl;
//	}
//	void div(int ch) {
//		denominator *= ch;
//		cout << " результат деления: " << numerator << '/' << denominator << endl;
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

///*Создайте приложение "Телефонная книга". Необходимо хранить данные об абоненте (ФИО, домашний телефон, рабочий телефон, мобильный телефон, дополнительная
//информация о контакте) внутри соответствующего класса. Наполните класс переменными-членами, функциями-членами, конструкторами, inline-функциями-членами,
//используйте инициализаторы, реализуйте деструктор. Обязательно необходимо выделять динамически память под ФИО. Предоставьте пользователю возможность до-
//бавлять новых абонентов, удалять абонентов, искать абонентов по ФИО, показывать всех абонентов, сохранять информацию в файл и загружать из файла.*/
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

///*Разработать класс String, который в дальнейшем будет использоваться для работы со строками. Класс должен содержать:
//•	 Конструктор по умолчанию, позволяющий создать строку длиной 80 символов;
//•	 Конструктор, позволяющий создавать строку произвольного размера;
//•	 Конструктор, который создаёт строку и инициализи рует её строкой, полученной от пользователя.
//Необходимо создать деструктор, а также использовать механизмы делегирования конструкторов, если это возможно.
//Класс должен содержать методы для ввода строк с клавиатуры и вывода строк на экран. Также нужно реализовать
//статическую функцию-член, которая будет возвращать количество созданных объектов строк.*/
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
//		cout << "проверка - длина введенной строки: " << k;
//	}
//};
//
//
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//	MyString str;
//	cout << "Введите строку длиной 80 символов: \n";
//	str.in_str();
//	cout << "строка 1 : \n";
//	str.show();
//	cout << "\n\n\n\n";
//	system("pause");
//	system("cls");
//
//	int l = 0;
//	cout << "Введите количество символов в строке: \n";
//	cin >> l;
//	MyString str2(l);
//	cout << "Введите строку : \n";
//	cin.ignore(1);
//	str2.in_str();
//	cin.ignore(1);
//	cout << "строка 2 : \n";
//	str2.show();
//	cout << "\n\n\n\n";
//	system("pause");
//	system("cls");
//}
