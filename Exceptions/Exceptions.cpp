// Exceptions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class MyException : public exception {
public:
	MyException() {
	}
	virtual const char * what() const throw () {
		return "no division by zero is allowed!";
	}
};

float divide(float a, float b) {
	if (b == 0) {
		throw MyException();
	}
	else {
		return a / b;
	}
}

int main() {
	try {
		divide(2, 0);
	}
	catch (exception e) {
		cout << e.what();
	}

	char* p;
	try
	{
		for (int i = 0; i < 20; i++)
		{
			p = new char[614400000U];
			cout << i << ":success of allocation " << endl;
		}
	}
	catch (bad_alloc)
	{
		cout << "Allocation failure " << endl;
		abort();
	}

	for (int i = 0; i < 1000; i++)
	{
		try
		{
			int * p = new int[100000000];
		}
		catch (...)
		{
			cout << "Not enough memory";
		}
	}
	return 0;
}