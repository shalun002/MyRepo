#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstdlib>
#include "Menu.h"
#include "Hello.h"


class App;
class Cabinet;
class Hello;
class History;
class Login;
class Matem;
class Menu;
class Player;
class Question;
class Quiz;
class Registration;
class Russian;
class Student;





int main()
{
	setlocale(LC_ALL, "RU");

	Hello hl;
	hl.hello();

	system("pause");
	return 0;
}