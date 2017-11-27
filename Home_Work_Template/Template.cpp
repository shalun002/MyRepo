#include <iostream>
using namespace std;


/*�������.
���������� ��������� ������� ��� ������ ���������, ��������, ���������� �������
(����� ���������� ����������), ������ � �������, ������ �������� ������� ��
���������� ��������.
*/

//-----------------------------------------------------------------------------------------------------------------------------------

template <typename T>  // ��������� ������� ��� ������ �������� .
T getFuncArrMin(T arr[], int size) {

	cout << "------------------------------------------------------------------------------------";
	cout << endl;

	if (size < 1) {		// ���� ������ ������� ������ 1, �� �������� � ������� "������ ������"
		cout << "������ ����! " << endl;
	}
	T min = arr[0];  
	for (int i = 0; i < size; ++i) {	// ��������� �� �������
		if (arr[i] < min) { 
			min = arr[i];
		}
	}
	return min;
}

//-----------------------------------------------------------------------------------------------------------------------------------

template <typename T>  // ��������� ������� ��� ������ ���������.
T getFuncArrMax(T arr[], int size) {

	cout << endl;
	cout << "------------------------------------------------------------------------------------";
	cout << endl;

	if (size < 1) {		// ���� ������ ������� ������ 1, �� �������� � ������� "������ ������"	
		cout << "������ ����! " << endl;
	}
	T max = arr[0];
	for (int i = 0; i < size; ++i) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

//-----------------------------------------------------------------------------------------------------------------------------------

template <typename T1, typename T2>			 //  ������� ��� ������ � �������
T1 SearchArrayElement(T1 arr[], T2 number, int size) {

	cout << endl;
	cout << "------------------------------------------------------------------------------------";
	cout << endl;

	if (size < 1) {		
		cout << "������ ����! ";
	}

	bool check = true;

	for (int i = 0; i < size; i++) {
		if (arr[i] == number) {
			cout << endl;
			cout << "�����, ������� �� ������! - ��������, �����������: " << number << endl;
			cout << endl;
			check = false;
		}
	}
	if(check) {
		cout << " ��� ������ �����! " << endl;
	}
	return number;
}

//-----------------------------------------------------------------------------------------------------------------------------------

template <typename T>  // ��������� ������� ��� ���������� �������.
void bubbleSort(T arr[], int size) {
	
	cout << endl;
	cout << "------------------------------------------------------------------------------------";
	cout << endl;

	if (size < 1) {		// ���� ������ ������� ������ 1, �� �������� � ������� "������ ������"
		cout << "������ ����! " << endl;
	}
	T temp = 0;
	for (int i = 0; i < size - 1; ++i) {    // i - ����� �������
		for (int j = 0; j < size - 1; ++j) {   // ���������� ���� �������
			if (arr[j + 1] < arr[j]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < size; ++i) {			// ����� ������� � �������
		cout << arr[i] << " ";
	}
	cout << endl; // ������� ������
}

//-----------------------------------------------------------------------------------------------------------------------------------

template <typename T> // ��������� ������� ��� ������ �������� �������
void RepArrayElement(T arr[], int x, int number, int size) {

	cout << endl;
	cout << "------------------------------------------------------------------------------------";
	cout << endl;
	cout << endl;

	if (size < 1) {		// ���� ������ ������� ������ 1, �� �������� � ������� "������ ������"
		cout << "Array is empty";
	}

	cout << "�����, �� ������� ����� �������� ������� �������: " << x << endl;
	cout << endl;

	for (int i = 0; i < size; i++) { // ��������� �� �������
		if (arr[i] == arr[number]) {  /* ���� ������� ������� ����� �����, ������� �� ������� ��� ������ �������, �� ���� ������� �������� �� �� �����, ������� �� ��������
										 �.�. arr[i] (9) = x (22). ����� ������� �� ������� ������� 9 �������� �� ����� 22*/
			arr[i] = x;
		}
	}
	for (int i = 0; i < size; ++i) {   // ��������� �� ������� ��� ��� � ��� ������� ��� � ������� � ����� ���������
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

int main(){
	setlocale(LC_ALL, "ru");

	int arr[10] = { 2, 3, 7, 9, 6, 3, 1, 5, 2, 8 }; // ���������� ������� � ��� �������������

	cout << "min " << getFuncArrMin(arr, 10) << endl; // ����� � ������� ��������� ������� ��� ������ ��������.
	cout << "max " << getFuncArrMax(arr, 10) << endl; // ����� � ������� ��������� ������� ��� ������ ���������.

	// ������� ����������
	bubbleSort(arr, 10);  // 10 - ������ �������, arr - ��� ������.

	// �������� ������� � �������� �� ��������� (arr, 5, 10)
	SearchArrayElement(arr, 4, 10);		// 10 - ������ �������, 5 - �����, ������� ����� ����� � �������		

	// �������� ������� � �������� �� ��������� (arr, 22, 9, 10)
	RepArrayElement(arr, 22, 9, 10);  // 10 - ������ �������, 9 - ����� ����������� � �������, 22 - �����, ������� ����� �������� � �������, arr - ��� ������.
	

	system("pause");
	return 0;
}





/*�����:
1) �������� ������������� ������� ������� ��� ���������� ������ ���������
(a*x + b = 0) � ����������� (a*x2+b*x + c = 0) ���������.
2) ���-�������: �������� ���������� � ��������.*/