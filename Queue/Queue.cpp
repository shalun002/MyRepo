// Queue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

template <class T>
class Queue {
	T *queue;
	const int size = 1048576;
	int first, last, cnt;
public:
	Queue();
	~Queue();

	void enqueue(const T &);
	T dequeue();
};

template <class T>   // конструктор
Queue<T>::Queue() {

	queue = new T[size];
	first = last = cnt = 0;
}  

template<class T>		// деструктор
Queue<T>::~Queue() {
	delete[] queue;
}

template<class T>
void Queue<T>::enqueue(const T &t) {
	if (cnt < size) {
		queue[++last] = t;
		++cnt;
		if (last > size) {
			last -= size + 1;
		}
	}	
}

template<class T>
T Queue <T>::dequeue() {
	if (cnt > 0) {
		T temp = dequeue[first++];
		--cnt;
	}
	return temp;
}

int main(){
	setlocale(LC_ALL, "ru");

	Queue<int> queue;

	system("pause");
    return 0;
}