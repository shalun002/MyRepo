// Meeting_22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int convert(string s) {
	if (s.length() > 10) {
		throw exception("Bigger than int");
	}
	int res = 0, radix = 1;
	for (int i = s.length() - 1; i >=0; --i) {
		res += radix * ((int)s[i] - 48);
		radix *= 10;
	}
	return res;
}
int main()
{
	//string a = "128";

	try {
		convert("123456789123456789123456789123456789");

	}
	catch (exception e) {
		cout << "Bigger than int" << endl;
	}
	/*cout << convert(a) << endl;
	int x = stoi(a);
	cout << x << endl;*/

    return 0;
}

