#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <iostream>
class City;
class Country;

/*Задание 1
Есть файл с данными о названиях стран и городов. Реализуйте программу, которая позволит загружать данные из файла, сохранять данные в файл, искать города конкретной страны, заменять
название города, добавлять города и страны, удалять города и страны, подсчитывать количество городов, отображать список стран. При программировании приложения обязательно исполь-
зуйте механизм лямбд.*/

class City
{
public:
	std::string country;
	std::string name;
	City(std::string country, std::string name)
	{
		this->country = country;
		this->name = name;
	}
	friend std::ostream & operator <<(std::ostream & stream, City & city);
};

std::ostream & operator <<(std::ostream & stream, City & city) {
	return stream << city.country << ' ' << city.name << std::endl;
}
class Manager {
public:
	std::vector<City> cities;
	Manager() {
		City city("Kazakhstan", "Almaty");
		cities.push_back(city);
		City city1("Kazakhstan", "Astana");
		cities.push_back(city1);
	}
	void writeToFile() {
		std::ofstream out("countries.txt");
		std::for_each(cities.begin(), cities.end(), [&out](City & city)
		{
			if (out.is_open())
			{
				out << city;
			}
		});
		out.close();
	}
	void readFromFile() {
		std::ifstream in("countries.txt");
		if (in.is_open()) {
			while (in.eof()) {
				std::string s;
				std::getline(in, s);
				int position = s.find_first_of(' ');
				cities.push_back(
					City(
						std::string{ s.begin(), s.begin() + position },
						std::string{ s.begin() + position + 1, s.end() }
					)
				);
			}
		}
	}
	friend std::ostream & operator <<(std::ostream & stream, Manager & manager);
};

std::ostream & operator <<(std::ostream & stream, Manager & manager) {
	std::for_each(manager.cities.begin(), manager.cities.end(), [&stream](City & city) {
		stream << city;
	});
	return stream;
}

int main() {
	Manager m;
	m.writeToFile();
	m.readFromFile();
	std::cout << m;
	system("pause");
	return 0;
}