#include <iostream>
using namespace std;



template<typename T1, typename T2>   //шаблонная функция
auto sum(T1 t1, T2 t2) {
	return t1 + t2;
}

int main()
{
	// auto определяет свм тип переменной, но при этом сильно напрягает компилятор
	auto x = 123;

	//объявить переменную "у" с таким же типом что и у "х"
	decltype(x) y;

	system("pause");
    return 0;
}

