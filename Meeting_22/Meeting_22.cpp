// Meeting_22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int convert(string s) {
	int res = 0, radix = 1;
	for (int i = s.length() - 1; i >=0; --i) {
		res += radix * ((int)s[i] - 48);
		radix *= 10;
	}
	return res;
}
int main()
{
	string a = "128";
	cout << convert(a) << endl;
	int x = stoi(a);
	cout << x << endl;

    return 0;
}

