#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <string>
#include <algorithm>

//class A {
//public:
//
//	A() {
//		std::cout << "A()" << std::endl;
//	}
//	A(int x) :value(x) {}
//
//	~A() {
//		std::cout << "~A()" << std::endl;
//	}
//
//	int value;
//
//	friend std::ostream& operator << (std::ostream &, const A &);
//	friend void operator >> (std::istream & stream, const A & a);
//};
//
//std::ostream & operator<<(std::ostream & stream, const A & a)
//{
//	return stream << a.value;
//}
//
//void operator >> (std::istream & stream, const A & a)
//{
//	stream >> a;
//}
//
//int main() {
//
//	std::vector<A> x = { A(1), A(2), A(3) };
//	int y;
//	std::cin >> y;
//	auto a = std::find_if(x.begin(), x.end(), [y](A & a) {return a.value == y; });
//	std::cout << *a << std::endl;
//
//	system("pause");
//	return 0;
//}

class A {
public:
	A() {
		std::cout << "A()" << std::endl;
	}
	A(int x) : value(x) {
		std::cout << "A(int)" << std::endl;
	}
	~A() {
		std::cout << "~A()" << std::endl;
	}
	int value;
	friend std::ostream & operator<<(std::ostream &, const A &);
	friend void operator >> (std::istream & stream, const A & a);
};
std::ostream & operator<<(std::ostream & stream, const A & a)
{
	return stream << a.value;
}
void operator >> (std::istream & stream, const A & a) {
	stream >> a;
}
class Finder {
public:
	Finder(int y) : x(y) {}
	int x;
	bool operator()(const A & a) {
		return x == a.value;
	}
};
void algorithm() {
	std::vector<A> x = { A(1), A(2), A(3) };
	std::for_each(x.begin(), x.end(), [](A a) { std::cout << a.value << '\t'; });
	std::cout << std::endl;
	int y;
	std::cin >> y;
	Finder f(y);
	auto a = std::find_if(x.begin(), x.end(), f);
	auto b = std::find_if(x.begin(), x.end(), [y](A & a) {return a.value == y; });
	if (a != x.end()) {
		std::cout << *a << '\t' << *b << std::endl;
	}
	else {
		std::cout << "not found" << std::endl;
	}
}
int main()
{
	std::string s = "123456789";
	for (int i = 0; i < s.length(); ++i) {
		for (int j = 0; j < s.length(); ++j) {
			if (i != j && s[i] == s[j]) {
				std::cout << "not unique";
				return 0;
			}
		}
	}
	s = "1223456789";
	bool arr[256] = { false };
	for (int i = 0; i < s.length(); ++i) {
		int temp = (int)(s[i] - 48);
		if (arr[temp]) {
			std::cout << "not unique";
			return 0;
		}
		arr[temp] = true;
	}

	std::cout << "unique";
	return 0;
}