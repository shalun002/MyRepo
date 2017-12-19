#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <ostream>
using namespace std;


class A {
public:
	int a;
	friend std::ostream& operator << (A& a, std::ostream & stream);
};

std::ostream & operator<<(A & a, std::ostream & stream)
{
	stream << a.a;
	return stream;
}

int main() 
{

	system("pause");
	return 0;
}