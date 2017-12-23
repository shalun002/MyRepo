#include <tchar.h>
#include <iostream>
#include <string>


/*� ������ ���������� ��������������� � �������� ������� �� ������� ����� ������� �� ������ �� ����������� ������
(������, ������� � �.�.).���������� ��� ��������� ������ � ������������� ����.���������� ���������� ��������� ���������
�����������.��������� �������� ����������� �������� ��� �� ������������ ����������� �������.*/



namespace firstNameSpace 
{
	class Human
	{
	public:
		std::string name;
		int age;
		std::string city;

		Human(std::string name)
		{
			this->name = name;
			std::cout << "Name: " << name << std::endl;
			std::cout << std::endl;
		}

		static void addInfo(std::string city, int age)
		{
			
			std::cout << "\t\tInformation about a person" << std::endl;
			std::cout << std::endl;
			std::cout << "City: " << city << std::endl;
			std::cout << "Age: " << age << std::endl;
			
				
		}

		 Human() {}
		~Human() {}	
	};

}

namespace secondNameSpace 
{
	class Animal
	{
	public:
		std::string name;
		int age;
		std::string city;

		Animal(std::string name)
		{
			this->name = name;
			std::cout << "Name:" << name << std::endl;
			std::cout << std::endl;
		}

		static void addInfo(std::string city, int age)
		{

			std::cout << "\t\tInformation about a animal: " << std::endl;
			std::cout << std::endl;
			std::cout << "City: " << city << std::endl;
			std::cout << "Age: " << age << std::endl;
		}
		 Animal() {}
		~Animal() {}
	};

}


int main() {
	setlocale(LC_ALL, "ru");
	
	firstNameSpace::Human::addInfo("Kazakstan", 23);
	firstNameSpace::Human::Human("Oleg");

	secondNameSpace::Animal::addInfo("Australia", 2);
	secondNameSpace::Animal::Animal("Kangaroo");

	system("pause");
	return 0;
}