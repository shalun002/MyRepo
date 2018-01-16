#pragma once
#include <iostream>
#include <string>

class Player
{
public:

	Player();
	~Player();

	int cnt = 0;
	int choice;
	int ctr = 0;

	std::string login; // логин login при регистрации
	std::string name;	// имя при регистрации 
	std::string surName;  // фамилия при регистрации
	std::string pass;   // присваиваем corPass в pass, который и будет использоваться как единый пароль
	std::string pass2;  // первый пароль при регистрации 
	std::string corPass; // подтверждение первого пароля
	std::string name2;    // имя студента
	std::string cource;  // класс учащегося
};

