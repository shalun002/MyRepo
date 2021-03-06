#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <string>
#include <algorithm>


void Vector() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	std::vector <int> x(arr, arr + 10);
	std::vector <int> ::iterator it = x.begin(); 
	for (; it != x.end(); ++it)
	{
		
		std::cout << *it << '\t';
	}
	std::cout << std::endl;
	std::cout << "Vector" << std::endl;

}

void Map() {
	std::map <std::string, int> dictionary;
	dictionary.emplace(std::make_pair<std::string, int>("123", 1));
	std::cout << dictionary.at("123") << std::endl;
	dictionary.emplace(std::make_pair<std::string, int>("123", 1));
	auto it2 = dictionary.begin();
	for (; it2 != dictionary.end(); ++it2) {
		std::cout << it2->first << '\t' << it2->second << '\t';
	}
	std::cout << std::endl;
	std::cout << "Map" << std::endl;
	std::cout << std::endl;
}

void MultiMap() {
	std::multimap <std::string, int> dictionary1;
	dictionary1.insert(std::make_pair<std::string, int>("123", 1));
	std::cout << dictionary1.find("123")->first << std::endl;
	dictionary1.insert(std::make_pair<std::string, int>("123", 5));
	auto it3 = dictionary1.begin();
	for (; it3 != dictionary1.end(); ++it3) {
		std::cout << it3->first << '\t' << it3->second << '\t';
	}
	std::cout << std::endl;
	std::cout << "Multimap" << std::endl;
	std::cout << std::endl;
}

void List() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	std::list <int> y(arr, arr + 10);
	y.sort();     // сортировка массива
	auto it1 = y.begin();
	for (; it1 != y.end(); ++it1)
	{
		std::cout << *it1 << '\t';
	}
	std::cout << std::endl;
	std::cout << "List" << std::endl;
	std::cout << std::endl;
}

int main() {
	setlocale(LC_ALL, "ru");

	Vector();
	
	List();
	
	Map();
	
	MultiMap();


	system("pause");
	return 0;
}