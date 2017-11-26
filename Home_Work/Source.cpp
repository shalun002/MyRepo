//#include <iostream>
//#include <string.h>
//#include <vector>
//using namespace std;
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
//	Contact a("123", "123", "123");
//	Contact b("123", "456", "789");
//	cout << b.getInfo() << endl;
//	if (a.getName() == b.getName()) {
//		cout << "x" << endl;
//	}
//	cout << a.getInfo() << endl;
//	cout << b.getInfo() << endl;
//	system("pause");
//	return 0;
//}