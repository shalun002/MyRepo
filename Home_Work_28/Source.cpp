#include <tchar.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <ostream>

class City;
class County;

//class Coutry
//{
//public:
//	
//	std::vector<City> cities;
//	Coutry(){}
//	~Coutry() {}
//};

class City 
{
public:
	std::string name;
	std::string country;

	std::vector<City> cities;
	City(std::string country, std::string name) {
		this->country = country;
		this->name = name;
	}
	friend std::ostream & operator <<(std::ostream & stream, const City & city);
};

std::ostream & operator <<(std::ostream & stream, const City & city)
{
	return stream << city.country << "  " << city.name << std::endl;
}


class Manager 
{
public:
	std::vector<City> cities;
	Manager() 
	{
		City city("Kazakhstan ", "Almaty");
		cities.push_back(city);
		City city1("Kazakhstan ", "Astana");
		cities.push_back(city1);
	}

	void writeToFile()
	{
		std::ofstream out("countries.txt");
		std::for_each(cities.begin(), cities.end(), [&out](const City &city)
		{
			if (out.is_open())
			{
				out << city;
			}
		});
		out.close();			
	}

	void readFromFile()
	{
		std::ifstream in("countries.txt");
		if (in.is_open())
		{
			while (in.eof())
			{
				std::string s;
				std::getline(in, s);
				auto position = s.find_first_of(' ');
				cities.push_back(
					City(
						std::string{ s.begin(), s.begin() + position },
						std::string{ s.begin() + position + 1, s.end() - 1 }
					)
				);
			}
		}
	}
	friend std::ostream & operator <<(std::ostream & stream, Manager & manager);
};

std::ostream & operator<<(std::ostream & stream, Manager & manager)
{
	std::for_each(manager.cities.begin(), manager.cities.end(), [&stream](City &city)
	{
		stream << city.country << city.name << std::endl;
	});
	return stream;
}


int main()
{
	setlocale(LC_ALL, "ru");
	
	Manager m;
	m.writeToFile();
	m.readFromFile();
	std::cout << m;
	std::cout << m.cities.size() << std::endl;
	
	

	system("pause");
	return 0;
}