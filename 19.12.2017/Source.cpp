#include <iostream>
#include <ostream>
#include <fstream>
#include <memory>


class A {
public:

	A() {
		std::cout << "A()" << std::endl;
	}

	~A() {
		std::cout << "~A()" << std::endl;
	}

	int value;
	friend std::ostream& operator << (std::ostream &, const A &);
};

std::ostream & operator<<(std::ostream & stream, const A & a)
{
	return stream << a.value;
}

void auto_ptr() {
	std::auto_ptr<A> a(new A());
	a->value = 5;
	std::auto_ptr<A> b = a;
	std::cout << b->value << std::endl;
}

void shared_ptr() { 
	std::shared_ptr<int> x(new int(5));
	std::cout << x.use_count() << std::endl;
	std::shared_ptr<int> y = x;
	std::cout << x.use_count() << std::endl;
}

void use_count(std::shared_ptr<int> & x) {
	std::cout << x.use_count() << std::endl;
}

void unique_ptr() {
	std::unique_ptr<int> x(new int(5));
}

int main() 
{
	auto_ptr();
	std::shared_ptr<int> x(new int(5));
 
	
	/*A a;
	a.value = 10;

	std::ofstream fout;
	fout.open("file.txt");
	fout << a;
	fout.close();*/

	system("pause");
	return 0;
}


