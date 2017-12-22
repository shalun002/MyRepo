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
	std::vector< int > x(9);
	std::for_each(x.begin(), x.end(), [](int &a) { a = rand() % 10; std::cout << a << " "; });
	
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Min element " << *std::min_element(x.begin(), x.end()) << " ";
	std::cout << std::endl;
	std::cout << "Max element " << *std::max_element(x.begin(), x.end()) << " ";
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Sortirovka po ubivaniyu      " << std::endl; std::sort(x.begin(), x.end(), std::greater<int>());  // Sort 9 - 0
	std::for_each(x.begin(), x.end(), [](int &a) { std::cout << a << " "; });	
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Sortirovka po vozrastaniyu   " << std::endl; std::sort(x.begin(), x.end(), std::less<int>());  // Sort 0 - 9
	std::for_each(x.begin(), x.end(), [](int &a) { std::cout << a << " "; });
	std::cout << std::endl;
	std::cout << std::endl;
	
	int n = 2;
	std::cout << "Uvelicit na n-oe chislo:   " << std::endl; std::for_each(x.begin(), x.end(), [n](int &a) { a += n; });
	std::for_each(x.begin(), x.end(), [](int &a) { std::cout << a << " "; });
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "Umenshit na n-oe chislo:  " << std::endl; std::for_each(x.begin(), x.end(), [n](int &a) { a -= n; });
	std::for_each(x.begin(), x.end(), [](int &a) { std::cout << a << " "; });
	std::cout << std::endl;
	
	std::cout << std::endl;

	x.erase(x.begin() + n);
	std::cout << "Udalenie elementa iz massiva " << std::endl; std::for_each(x.begin(), x.end(), [](int &a) { std::cout << a << " "; });
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	x.erase(std::remove(x.begin(), x.end(), 4), x.end());
	std::cout << "affter 4 is removed: " << std::endl;
	std::for_each(x.begin(), x.end(), [](int &a) { std::cout << a << " "; });
	std::cout << std::endl;
	system("pause");
	return 0;
}