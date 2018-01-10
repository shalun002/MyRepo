#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Student.h"


class Student;
class App;
class Menu;




int main()
{
	setlocale(LC_ALL, "ru");

	Student st;
	st.studentInfo();

	system("pause");
	return 0;
}