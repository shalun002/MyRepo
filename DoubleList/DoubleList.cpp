// DoubleList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "DoubleLinkList.h"
using namespace std;

int main()
{
	DoubleLinkList<int> *a = new DoubleLinkList<int>(); 
	a->addToLast(5);
	a->addToLast(6);
	a->addToFirst(4);
	a->show();
	delete a;


	system("pause");
	return 0;
}

