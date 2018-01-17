#pragma once
#include <iostream>
#include <string>


class Player
{
public:
	
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

	static Player & getInstace() 
	{
		static Player instance;
		return instance;
	}

	/*void setCnt(int cnt) { this->cnt = cnt; }
	void setChoice(int choice) { this->choice = choice; }
	void setCtr(int ctr) { this->ctr = ctr; }

	void setLogin(std::string login) { this->login = login; }
	void setName(std::string name) { this->name = name; }
	void setSurName(std::string surName) { this->surName = surName; }
	void setPass(std::string pass) { this->pass = pass; }
	void setPass2(std::string pass2) { this->pass2 = pass2; }
	void setCorPass(std::string corPass) { this->corPass = corPass; }
	void setName2(std::string name2) { this->name2 = name2; }
	void setCource(std::string cource) { this->cource = cource; }

	int getCnt() { return cnt; }
	int getChoice() { return choice; }
	int getCtr() { return ctr; }

	std::string getLogin() { return login; }
	std::string getName() { return name; }
	std::string getName2() { return name2; }
	std::string getSurName() { return surName; }
	std::string getPass() { return pass; }
	std::string getPass2() { return pass2; }
	std::string getCorPass() { return corPass; }
	std::string getCource() { return cource; }*/
	

		Player();  // конструктор недоступен
		~Player(); // и деструктор
};