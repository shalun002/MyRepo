#include <typeinfo>
#include <iostream>

class A{};
class B : public A{};

int main() {
	setlocale(LC_ALL, "ru");

	A a;
	B b;

	int x = 5;

	std::cout << typeid(a).before(typeid(b));
	std::cout << "\n";
	std::cout << typeid(a).name();
	std::cout << "\n";

	system("pause");
	return 0;
}