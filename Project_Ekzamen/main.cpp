#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Student.h"
#include <cstdlib>


class Student;
class App;
class Menu;
class Player;
class Question;
class Quiz;
class Russian;
class QuizMatem;




int main()
{
	system("color 1F");
	setlocale(LC_ALL, "RUSSIAN");

	Student st;
	st.studentInfo();

	system("pause");
	return 0;
}