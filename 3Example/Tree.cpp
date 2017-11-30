#include "stdafx.h"
#include "Tree.h"

template <typename T>
Tree<T>::Tree()
{
	root = NULL;
}

template <typename T>
Tree<T>::~Tree()
{
}

template<typename T>
void Tree<T>::add(const T &value, Hode<T> &root = this->root)
{
	if (root == NULL) {
		root = new Nod<T>(value);
	}
	else {
		Node<T> *temp = root;
		if (root->value < value) {
			if (root->right == NULL) {
				root->right = new Nod<T>(value);
			}
			else {
				add(value, root->right);
			}
		}
		else if (root->value >= value) {
			if (root->left == NULL) {
				root->left = new Nod<T>(value);
			}
			else {
				add(value, root->left);
			}
		}
	}
}
