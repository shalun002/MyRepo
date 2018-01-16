#pragma once
#include "Menu.h"


class LincMenu
{
	Menu menu;

public:
	LincMenu();
	~LincMenu();

	void lincMenu()
	{
		menu.menu();
	}
};

