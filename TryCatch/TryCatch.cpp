// TryCatch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class MyException : public exception {
public:
	MyException() {
	}
	const char* what() const {
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

int main()
{
	try {
		divide(2, 0);
	}
	catch (MyException e) {
		cout << e.what();
	}

	system("pause");
    return 0;
}