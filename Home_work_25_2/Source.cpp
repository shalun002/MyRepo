#include<iostream>
#include<fstream>
#include<string>

using namespace std;
/*Задание №2
Создайте приложение «Валидатор HTML-файлов». Приложение запрашивает у пользователя путь к файлу, после чего проверяет файл на валидность. Критерием валидности для вашего про-
екта являются правила: все открытые теги должны закрываться, если был знак < его должен закрыть знак >. По итогам валидации Лабораторная работа №25 Лабораторная работа №<Номер дз>
нужно отобразить результат проверки на экран. Используйте для работы с файлами потоки, а для работы со строками класс string.
Примеры:
Содержимое валидного файла
<html>
<body>To be or not to be</body>
</html>
Содержимое невалидного файла
<html>
<body To be or not to be</body>
</html>*/




void main()
{
	string file;
	string str;
	int open = 0;
	int close = 0;
	cout << "Enter file name - ";
	getline(cin, file);


	ifstream fin(file); 
	if (fin.is_open())
	{
		cout << endl;
		while (!fin.eof())
		{
			string temp;
			getline(fin, temp);
			str += temp;
		} 
		cout << endl;
	}
	else cout << "The file is not open";

	cout << str << endl;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '<')	open++;
		if (str[i] == '>')	close++;
	}
	cout << endl;
	cout << "< -  " << open << "  |  " << "> - " << close << endl;
	cout << endl;
	if (open == close) 
	{
		cout << endl;
		cout << "The file is validate" << endl;
		cout << "< -  " << open << "  |  " << "> - " << close << endl;
	}
	else cout << "The file is not validate" << endl;

	ofstream fout; 
	fout.open(file, ios::app); cin >> str;
	if (fout.is_open())
	{
		fout << str;
	}

	fin.close();
	fout.close();
}