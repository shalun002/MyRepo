// 3Example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Tree.h"


int main()
{
	Tree<int> tree;

	tree.add(10);

	for (size_t i = 0; i < 20; ++i) {
		tree.add(rand() % 100);
	}

    return 0;
}

