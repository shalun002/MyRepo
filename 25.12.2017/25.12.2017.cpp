#include <tchar.h>
#include <iostream>
#include <string>


class Singletone {

public:
	static Singletone &getInstance() 
	{
		static Singletone instance;
		return instance;
	}

private:
	Singletone(){}
	Singletone(const Singletone &) = delete;
	Singletone & operator = (const Singletone &) = delete;

};



int main() {
	setlocale(LC_ALL, "ru");
	
	Singletone& a = Singletone::getInstance();
	Singletone& b = Singletone::getInstance();
	Singletone& c = Singletone::getInstance();

	std::cout << &a << std::endl;
	std::cout << &b << std::endl;
	std::cout << &c << std::endl;


	system("pause");
	return 0;
}