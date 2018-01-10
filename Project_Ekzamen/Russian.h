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
		std::cout << " Начать тест?  yes - 1 / no - 2       "; std::cin >> x;

		if (x == 1)
		{
			system("cls");
			std::cout << " \tТест начат " << std::endl;
			Test();
		}
		else if (x == 2)
		{
			system("cls");
			std::cout << " \tТест закончен " << std::endl;
		}
	}

	static void Test()
	{

	}
};