// HW_1512397076.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

///*Задание 1
//Создайте класс Student, который будет содержать информацию о студенте. С помощью механизма наследования, реализуйте класс
//Aspirant (аспирант – студент, который готовится к защите кандидатской работы) производный от Student.*/
//
//class Student {
//public:
//	string name;
//	int age;
//	int course;
//
//	virtual void show() = 0;
//
//
//	Student() {}
//	virtual ~Student() {}
//};
//
//class Aspirant : public Student {
//
//public:
//	string ResearchTitle;
//	string Coordinator;
//
//	Aspirant(string name, int age, int course, string researchTitle, string coordinator){
//		this->name = name;
//		this->age = age;
//		this->course = course;
//		this->ResearchTitle = researchTitle;
//		this->Coordinator = coordinator;
//	}
//	~Aspirant() { }
//
//	void show() {
//		cout << "Aspirant name - " << name << ", age - " << age << ", course - " << course << endl;
//		cout << "Research Title - " << ResearchTitle << endl;
//		cout << "Coordinator - " << Coordinator << endl;
//	}
//
//};
//
//int main() {
//	setlocale(LC_ALL, "ru");
//	
//	Student *aspirant = new Aspirant("Sergey", 30, 2, "Programming", "Vasiliev Alexey");
//	aspirant->show();
//	cout << endl;
//
//	system("pause");
//    return 0;
//}

///*Задание №2
//Создайте класс Passport (паспорт), который будет содержать паспортную информацию о гражданине Украины.
//С помощью механизма наследования, реализуйте класс ForeignPassport (загран.паспорт) производный от Passport.
//Напомним, что заграничный паспорт содержит помимо паспортных данных, также данные о визах, номер заграничного паспорта.*/
//
//class Passport {
//	string surname;//фамилия
//	string name;//имья
//	string patronymic;//отчество
//	string birthday;//дата рождения
//	string adress;//фактичный адресс
//	string registration;//адресс прописки
//	
//public:
//	// сеттеры
//	void SetSurname(string surname)	{
//		this->surname = surname;
//	}
//	void SetName(string name) {
//		this->name = name;
//	}
//	void SetPatronymic(string patronymic) {
//		this->patronymic = patronymic;
//	}
//	void SetBirthday(string birthday) {
//		this->birthday = birthday;
//	}
//	void SetAdress(string adress) {
//		this->registration = registration;
//	}
//	void SetRegistration(string registration) {
//		this->registration = registration;
//	}
//
//	//геттеры 
//	string const GetSurname() const {
//		return surname;
//	}
//	string const GetName() const {
//		return name;
//	}
//	string const GetPatronymic() const	{
//		return patronymic;
//	}
//	string GetBirthday() const {
//		return birthday;
//	}
//	string const GetAdress() const {
//		return  adress;
//	}
//	string const GetRegistration() const {
//		return  registration;
//	}
//
//	//показ всех данных о клиенте
//	virtual void Print() {
//		cout << "Фамилия: " << surname << endl;
//		cout << "Имья: " << name << endl;
//		cout << "Отчество: " << patronymic << endl;
//		cout << "Дата рождения: " << birthday  << endl;
//		cout << "Фактический адресс проживания: " << adress << endl;
//		cout << "Адресс прописки: " << registration << endl;
//		cout << endl;
//	}
//
//	//конструктор по умолчанию
//	Passport() :surname(""), name(""), patronymic(""), birthday(""), adress(""), registration("") {}
//
//	//2 - 3 версии конструктора с параметрами
//	Passport(string _Surname, string _Name, string _Patronymic, string _Birthday) :
//		surname(_Surname), name(_Name), patronymic(_Patronymic), birthday(_Birthday),
//		adress("г.Одесса Одесская обл. ул.Посмитного 33"), registration("г.Костополь Ровенская обл. ул.Ровенская 76/186") {	}
//
//	Passport(string _Surname, string _Name, string _Patronymic, string _Birthday, string _Adress) :
//		surname(_Surname), name(_Name), patronymic(_Patronymic), birthday(_Birthday),
//		adress(_Adress), registration("г.Костополь Ровенская обл. ул.Ровенская 76/186") { }
//
//	//главный конструктор 
//	Passport(string _Surname, string _Name, string _Patronymic, string _Birthday, string _Adress, string _Registration) :
//		surname(_Surname), name(_Name), patronymic(_Patronymic), birthday(_Birthday), adress(_Adress), registration(_Registration) { }
//
//	~Passport() { }
//};
//
//
//class ForeignPassport : public Passport {
//public:
//	string nationality; // национальность
//	string become;		// пол
//	int age;		// возраст
//	int passNumber;  // номер паспорта
//	int kolVisa;	 // колличество виз
//public:
//
//	//сеттеры:
//	void Setnationality(string nationality) {
//		this->nationality = nationality;
//	}
//	void Setbecome(string become) {
//		this->become = become;
//	}
//	void Setage(int age) {
//		this->age = age;
//	}
//	void SetPassNumber(int passNumber) {
//		this->passNumber = passNumber;
//	}
//	void SetKolVisa(int kolVisa) {
//		this->kolVisa = kolVisa;
//	}
//	
//	//геттеры 
//	const string Getnationality() const {
//		return nationality;
//	}
//	const string Getbecome() const {
//		return become;
//	}
//	int Getage() const {
//		return age;
//	}
//	int GetPassNumber() const {
//		return passNumber;
//	}
//	int GetKolVisa() {
//		return kolVisa;
//	}
//
//	//показ всех данных
//	void Print() {
//		Passport::Print();
//		cout << "Национальность: " << nationality << endl;
//		cout << "Пол: " << become << endl;
//		cout << "Возраст: " << age << " лет" << "\n";
//		cout << "Номер паспорта: " << passNumber << endl;
//		cout << "Кол. виз: " << kolVisa << " Шенген зона" << endl;
//		cout << endl;
//	}
//
//	//конструктор по умолчанию
//	ForeignPassport() : nationality(""), become(""), age(), passNumber(), kolVisa(){ }
//
//	//главный конструктор 
//	ForeignPassport(string N, string B, int _A, int pass, int visa) : nationality(N), become(B), age(_A), passNumber(pass), kolVisa(visa){ }
//
//	ForeignPassport(string _Surname, string _Name, string _Patronymic, string _Birthday, string _Adress,
//					string _Registration, string nationality, string become, int _A, int pass, int visa) 
//		: Passport(_Surname, _Name, _Patronymic, _Birthday, _Adress, _Registration), nationality(nationality), become(become), age(_A), passNumber(pass), kolVisa(visa) { }
//
//	~ForeignPassport() { }
//};
//
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	cout << endl;
//	cout << "\t\tПаспортная информация " << endl;
//	cout << endl;
//
//	Passport* a = new Passport("Рубик", "Наталия", "Петровна", "11.12.1887", " г.Одесса Одесская обл.ул.Посмитного 33 ","г.Костополь Ровенская обл. ул.Ровенская 76/186");
//	a->Print();
//
//	cout << endl;
//	cout << "---------------------------------------------" << endl;
//
//	cout << endl;
//	cout << "\t\tЗагран Паспорт " << endl;
//	cout << endl;
//	ForeignPassport* c = new ForeignPassport("Рубик", "Наталия", "Петровна", "11.12.1887", " г.Одесса Одесская обл.ул.Посмитного 33 ",
//		"г.Костополь Ровенская обл. ул.Ровенская 76/186", "казашка", "жен.", 33, 987654321, 12);
//	c->Print();
//
//	cout << endl;
//	cout << "--------------------------------------------------------------------------------------" << endl;
//	cout  << endl;
//
//	cout << "\t\tПаспортная информация " << endl;
//	cout << endl;
//	Passport* b = new Passport("Романов", "Жора", "Валентинович", "03.10.1877", "г.Одесса Одесская обл.ул.Поскотного 1",	"г.Костополь Ровенская обл. ул.Стуса 5/34");
//	b->Print();
//
//	cout << endl;
//	cout << "---------------------------------------------" << endl;
//		
//	cout << endl;
//	cout << "\t\tЗагран Паспорт " << endl;
//	cout << endl;
//	ForeignPassport* d = new ForeignPassport("Романов", "Жора", "Валентинович", "3.13.1877", "г.Одесса Одесская обл.ул.Поскотного 1",
//											 "г.Костополь Ровенская обл. ул.Стуса 5/34", "украинец", "муж.", 33, 123456789, 5);
//	d->Print();
//
//	cout << endl;
//	cout << "--------------------------------------------------------------------------------------" << endl;
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

///*Задание №3
//Создать абстрактный базовый класс «Транспортное средство» и производные классы «Автомобиль», «Велосипед», «Повозка».
//Подсчитать время и стоимость перевозки пассажиров и грузов каждым транспортным средством.*/
//
//
//class Vehicle {
//
//protected:
//	double *price;
//	double *time;
//	double *distance;
//	virtual void TimeTransportation(double distance) = 0;
//	Vehicle() {}
//	~Vehicle() {}
//};
//
//class Car : public Vehicle {
//
//	const double Carspeed = 60;
//public:
//
//	Car() {
//		distance = new double;
//		price = new double;
//		time = new double;
//	}
//	virtual void TimeTransportation(double distance) {
//		*this->time = distance / Carspeed;
//		*this->price = distance / 10;
//		cout << endl << "Скорость машины :" << Carspeed << " км/ч" << endl;
//		cout << "Время поездки : " << *time << " час" << endl;
//		cout << "Стоимость : " << *price << " $" << endl;
//	}
//	~Car() {
//		delete price;
//		delete time;
//		delete distance;
//	};
//};
//
//class Bike : public Vehicle {
//	const double Bikespeed = 20;
//public:
//
//	Bike() {
//		distance = new double;
//		price = new double;
//		time = new double;
//	}
//	virtual void TimeTransportation(double distance) {
//		*this->time = distance / Bikespeed;
//		*this->price = distance / 50;
//		cout << endl << "Скорость велосипеда : " << Bikespeed << " км/ч" << endl;
//		cout << "Время поездки : " << *time << " час" << endl;
//		cout << "Стоимость : " << *price << " $" << endl;
//	}
//	~Bike() {
//		delete price;
//		delete time;
//		delete distance;
//	};
//};
//
//class Wagon : public Vehicle
//{
//	const double Wagonspeed = 80;
//public:
//	Wagon() {
//		distance = new double;
//		price = new double;
//		time = new double;
//	}
//	virtual void TimeTransportation(double distance) {
//		*this->time = distance / Wagonspeed;
//		*this->price = distance / 5;
//		cout << endl << "Скорость повозки : " << Wagonspeed << "км/ч" << endl;
//		cout << "Время поездки : " << *time << " час" << endl;
//		cout << "Стоимость : " << *price << " $" << endl;
//		cout << endl;
//	}
//	~Wagon() {
//		delete price;
//		delete time;
//		delete distance;
//	}
//};
//
//void f1() {
//	cout << endl;
//	cout << "Выберите транспортное средство: " << endl;
//	cout << endl;
//	cout << "1. Машина\n" << "2. Велосипед\n" << "3. Повозка\n" << endl;
//
//	int Choice;
//	double temp;
//	cout << "Ваш выбор: "; cin >> Choice;
//	cout << endl;
//	if (Choice > 3) {
//		cout << "Нет такой позиции " << endl;
//		cout << endl;
//		system("pause");
//		system("cls");
//		f1();
//	}
//	else{
//		switch (Choice) {
//			case 1: {
//				Car *Vehic = new Car();
//				cout << "Введите дистанцию (KM) : ";	cin >> temp;
//				Vehic->TimeTransportation(temp);
//				delete Vehic;
//				break;
//			}
//			case 2: {
//				Bike *Vehic = new Bike();
//				cout << "Введите дистанцию (KM) : "; cin >> temp;
//				Vehic->TimeTransportation(temp);
//				delete Vehic;
//				break;
//			}
//			case 3: {
//				Wagon *Vehic = new Wagon();
//				cout << "Введите дистанцию (KM) : "; cin >> temp;
//				Vehic->TimeTransportation(temp);
//				delete Vehic;
//				break;
//			}
//			default:
//				break;
//		}
//		system("pause");
//		system("cls");
//		f1();
//	}
//}
//
//int main() {
//	setlocale(LC_ALL, "ru");
//
//	f1();
//
//	system("pause");
//	return 0;
//}