#include <iostream>
using namespace std;


/*Задание.
Реализуйте шаблонные функции для поиска максимума, минимума, сортировки массива
(любым алгоритмом сортировки), поиска в массиве, замены элемента массива на
переданное значение.
*/

template <typename T>  // шаблонная функция .
T FuncArrMin(T *arr[], int size) {
	if (size < 1) {
		cout << "array is empty!" << endl;
	}
	T min = arr[0];
	for (int i = 0; i < size; ++i) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}


int main() 
{
	setlocale(LC_ALL, "ru");

	int arr[10] = { 2, 3, 7, 9, 6, 3, 1, 5, 2, 8 };

	cout << FuncArrMin << endl;

	system("pause");
	return 0;
}





/*Бонус:
1) Написать перегруженные шаблоны функций для нахождения корней линейного
(a*x + b = 0) и квадратного (a*x2+b*x + c = 0) уравнений.
2) Хэш-таблица: написать реализацию с шаблоном.*/