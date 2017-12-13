#include <typeinfo>
#include <iostream>

class A
{
public:
	A(){}
	virtual ~A(){}
};
class B : public A{};

void fi() 
{
	A a;
	B b;

	int x = 5;

	std::cout << typeid(a).before(typeid(b));
	std::cout << "\n";
	std::cout << typeid(a).name();
	std::cout << "\n";

}

int main() 
{
	setlocale(LC_ALL, "ru");

	A *a = new B();
	B *b = dynamic_cast<B *> (new A());

	double y = 2.5;
	int x = static_cast <int> (y);

	const double q = 5.5;
	double *w = const_cast<double *>(&q);

	//double *c = reinterpret_cast<double *>(123);

	std::cout << x;
	std::cout << "\n";

	std::cout << *w;
	std::cout << "\n";

	//std::cout << *c;
	//std::cout << "\n";
	
	//delete c;
	delete a;
	delete b;
	delete w;

	system("pause");
	return 0;
}