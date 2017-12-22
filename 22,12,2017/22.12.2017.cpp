#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <string>
#include <time.h>
#include <algorithm>
#include <functional>



int main() {

	srand(time(NULL));
	std::vector< int > x(20);
	std::for_each(x.begin(), x.end(), [](int &a) { a = rand() % 10; std::cout << a << " "; });
	
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Min element " << *std::min_element(x.begin(), x.end()) << " ";
	std::cout << std::endl;
	std::cout << "Max element " << *std::max_element(x.begin(), x.end()) << " ";
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Sortirovka po ubivaniyu      "; std::sort(x.begin(), x.end(), std::greater<int>());
	std::for_each(x.begin(), x.end(), [](int &a) { std::cout << a << " "; });	
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Sortirovka po vozrastaniyu   "; std::sort(x.begin(), x.end(), std::less<int>());
	std::for_each(x.begin(), x.end(), [](int &a) { std::cout << a << " "; });
	std::cout << std::endl;
	std::cout << std::endl;
	
	int n = 2;
	std::cout << "Uvelicit na n-oe chislo:   "; std::for_each(x.begin(), x.end(), [n](int &a) { a += n; });
	std::for_each(x.begin(), x.end(), [](int &a) { std::cout << a << " "; });
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "Umenshit na n-oe chislo:  "; std::for_each(x.begin(), x.end(), [n](int &a) { a -= n; });
	std::for_each(x.begin(), x.end(), [](int &a) { std::cout << a << " "; });
	std::cout << std::endl;
	
	std::cout << std::endl;

	x.erase(x.begin() + n);
	std::cout << "Udalenie elementa iz massiva "; std::for_each(x.begin(), x.end(), [](int &a) { std::cout << a << " "; });
	std::cout << std::endl;
	std::cout << std::endl;

	system("pause");
	return 0;
}