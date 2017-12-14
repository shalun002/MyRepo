#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main() {
	setlocale(LC_ALL, "ru");

	ifstream t("file.txt"); // вывод с файла
	string str;

	if (t.is_open()) {   // если файл открыт
		while (getline(t, str)) { // вывести на экран данные с файла
			cout << str;
		}
	}
	t.close(); // закрытие файла

	ofstream o("file.txt"); // создали выходной поток в файл
	string s;  // строка в которую будем записывать
	cin >> s; // ввод данных

	while (getline(cin, s)) { // пока строка вводиться, getline будет брать его значения
		while (s != "exit") {   // пишется до тех пор пока не встретит "exit"
			o << s; // записываем в поток, автоматически записывается в файл
		}
		else break;  // обрываем и выходим
	}
	o.close();

	system("pause");
	return 0;
}