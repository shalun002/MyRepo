#pragma once
#include <iostream>

class Russian
{
public:

	Russian();
	~Russian();

	static void start()
	{
		int x = 0;
		std::cout << " ������ ����?  yes - 1 / no - 2       "; std::cin >> x;

		if (x == 1)
		{
			system("cls");
			std::cout << " \t���� ����� " << std::endl;
			Test();
		}
		else if (x == 2)
		{
			system("cls");
			std::cout << " \t���� �������� " << std::endl;
		}
	}

	static void Test()
	{

	}
};