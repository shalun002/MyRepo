#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <functional>

// Meet 28
/*������� 1
���� ���� � ������� � ��������� ����� � �������. ���������� ���������, ������� �������� ��������� ������ �� �����, ��������� ������ � ����, ������ ������ ���������� ������, ��������
�������� ������, ��������� ������ � ������, ������� ������ � ������, ������������ ���������� �������, ���������� ������ �����. ��� ���������������� ���������� ����������� ������-
����� �������� �����.*/

class Country;
class City;


class City {
public:
	std::string name;
	std::string country;

	City(std::string country, std::string name) {
		this->country = country;
		this->name = name;
	}

	friend std::ostream & operator << (std::ostream & stream, const  City & city);

	friend bool  operator == (const City & city, const City & city1);

	~City() {}
};

bool operator==(const City & city, const City & city1)
{
	return city.name == city1.name && city.country == city1.country;
}

class Manager {
public:
	std::vector<City> cityes;
	Manager() {
		City city("Kazakhstan", "Almaty");
		cityes.push_back(city);
		City city1("Kazakhstan", "Astana");
		cityes.push_back(city1);
		City city2("Germany", "Berlin");
		cityes.push_back(city2);
		City city3("Kirgistan", "Bishkek");
		cityes.push_back(city3);

	}

	void writeToFilt() {
		std::ofstream fout("Country.txt");
		std::for_each(cityes.begin(), cityes.end(), [&fout](const City & city) {
			if (fout.is_open()) {
				fout << city;
			}
		});
		fout.clear();
	}

	void readFile() {
		std::ifstream fin("Country.txt");
		if (fin.is_open())
		{
			while (fin.eof())
			{
				std::string str;
				std::getline(fin, str);
				auto pos = str.find_first_of(' ');
				cityes.push_back(
					City(
						std::string { 
							str.begin(), str.begin() + pos 
						},
						std::string { 
							str.begin() + pos + 1, str.end() - 1 
						}
					)
				);
			}
		}
		fin.close();
	}

	friend std::ostream & operator << (std::ostream & stream, Manager & manager);

	void findCountryByCity() {
		std::string find;
		std::cout << "Enter city name ";
		std::cin >> find;
		auto x = std::find_if(cityes.begin(), cityes.end(), [find](City & city) {
			return find == city.name;
		});
		std::cout << x->country << std::endl;
	}

	void replacement(City & city, City & newcity) {
		std::replace(cityes.begin(), cityes.end(), city, newcity);
	}

	void show() {
		std::for_each(cityes.begin(), cityes.end(), [](City  city) {
			std::cout << city.country << "\t" <<
			city.name << std::endl; 
		});
	}
	~Manager() {}
};

std::ostream & operator<<(std::ostream & stream, const City & city) {
	return stream << city.country << "  " << city.name << std::endl;
}

std::ostream & operator <<(std::ostream & stream, Manager & manager) {
	std::for_each(manager.cityes.begin(), manager.cityes.end(), [&stream](const City & city) {
		stream << city.country << "  " << city.name << std::endl;
	});
	return stream;
}

int main() {


	Manager man;
	man.writeToFilt();
	man.readFile();

	std::cout << "City size - " << man.cityes.size() << " pi." << std::endl;
	std::cout << std::endl;
	man.findCountryByCity();

	std::cout << std::endl;

	City a("Kazakhstan", "Astana");
	City b("USA", "Chikago");

	man.replacement(a, b);
	man.writeToFilt();
	man.readFile();
	man.show();
	system("pause");
	return 0;
}