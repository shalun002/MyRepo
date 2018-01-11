#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Student.h"


class Student;
class App;
class Menu;
class Player;
class Question;
class Quiz;
class Russian;




int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	Student st;
	st.studentInfo();

	system("pause");
	return 0;
}