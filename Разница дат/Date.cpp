#include <iostream>
#include <string>
using namespace std;


//int fib(int n) {
//	if (n == 0 || n == 1) {
//		return n;
//	}
//	return fib(n - 1) + fib(n - 2);
//}
//
//int fib2(const int n) {
//	int *a = new int[n];
//	a[0] = 1;
//	a[1] = 1;
//
//	for (int i = 2; i < n + 1; i++) {
//		a[i] = a[i - 1] + a[i - 2];
//	}
//
//	int res = a[n - 1];
//	delete a;
//	return res;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	cout << fib(n);
//
//
//	system("pause");
//	return 0;
//}


class Date {
public:
	int *day, *year, *month;     //îáÿâëÿåì äåíü ìåñÿö ãîä êàê ïóáëè÷íûå óêàçàòåëè

	Date(int day, int year, int month) {   // èíèöèàëèçèðóåì ïåðåìåííûå â êîíñòðóêòîðå
		this->day = new int(day);
		this->month = new int(month);
		this->year = new int(year);
	}

	friend int operator -(const Date& d1, const Date& d2); // äðóæåñòâåííàÿ ôóíêöèÿ ïåðåãðóçêà îïåðàòîðà " - " 

	~Date() {							// äåñòðóêòîð. óäàëÿåì óêàçàòåëè
		delete day, month, year;
	}
};

int operator -(const Date& d1, const Date& d2) {			// ôóíêöèÿ ïåðåãðóçêè îïåðàòîðà " - "				
	return (*d1.day + (*d1.month * 30) + (*d1.year * 365)) -
		(*d2.day + (*d2.month * 30) + (*d2.year * 365));
}

int main() {
	setlocale(LC_ALL, "ru");

	Date d1(5, 9, 1986);		// îáúåêò îò êëàññà "Date"
	Date d2(22, 11, 2017);		// âòîðîé îáúåêò îò êëàññà "Date"

	cout << d2 - d1 << endl;

	system("pause");
	return 0;
}