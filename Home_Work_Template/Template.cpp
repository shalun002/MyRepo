#include <iostream>
using namespace std;


/*�������.
���������� ��������� ������� ��� ������ ���������, ��������, ���������� �������
(����� ���������� ����������), ������ � �������, ������ �������� ������� ��
���������� ��������.
*/

template <typename T>  // ��������� ������� .
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





/*�����:
1) �������� ������������� ������� ������� ��� ���������� ������ ���������
(a*x + b = 0) � ����������� (a*x2+b*x + c = 0) ���������.
2) ���-�������: �������� ���������� � ��������.*/