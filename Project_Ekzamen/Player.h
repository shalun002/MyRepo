#pragma once
#include <iostream>
#include <string>


class Player
{
public:
	static Player& Instance()
	{
		// согласно стандарту, этот код ленивый и потокобезопасный
		static Player pl;
		return pl;
	}

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

	Player();  // конструктор недоступен
		~Player(); // и деструктор

private:
	

				 // необходимо также запретить копирование
	Player(Player const&) = delete;
	Player& operator >> (Player const&) = delete;
};
								

//
//class Player
//{
//public:
//
//	Player();
//	~Player();
//
//	
//};



//// ConsoleApplication2.cpp : Defines the entry point for the console application.
////
//
//#include "stdafx.h"
//
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class GameSetting {
//	static GameSetting* _instance;
//	int _brightness;
//	int _width;
//	int _height;
//	GameSetting() : _width(786), _height(1300), _brightness(75) {}
//	// all constructors should be private or public(iff you want to allow inheritance)
//
//public:
//	static GameSetting* getInstace() {
//		if (_instance == NULL)
//			_instance = new GameSetting();
//		return _instance;
//	}
//	void setWidth(int width) { _width = width; }
//	void setHeight(int height) { _height = height; }
//	void setBrighness(int brightness) { _brightness = brightness; }
//
//	int getWidth() { return _width; }
//	int getHeight() { return _height; }
//	int getBrightness() { return _brightness; }
//	void displaySetting() {
//		cout << "brightness: " << _brightness << endl;
//		cout << "height: " << _height << endl;
//		cout << "width: " << _width << endl << endl;
//	}
//};
//
//GameSetting * GameSetting::_instance = NULL;
//
//void someFunction() {
//	GameSetting *setting = GameSetting::getInstace();
//	setting->displaySetting();
//}
//
//int main() {
//
//	GameSetting *setting = GameSetting::getInstace();
//	setting->displaySetting();
//	setting->setBrighness(100);
//
//	someFunction();
//	return 0;
//}
