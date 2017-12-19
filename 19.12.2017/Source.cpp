#include <iostream>
#include <ostream>
#include <fstream>
using namespace std;


class A {
public:
	int value;
	friend std::ostream& operator << (std::ostream &, const A &);
};

std::ostream & operator<<(std::ostream & stream, const A & a)
{
	return stream << a.value;
}

int main() 
{
	A a;
	a.value = 10;

	std::ofstream fout;
	fout.open("file.txt");
	fout << a;
	fout.close();

	system("pause");
	return 0;
}