#include<iostream>

using namespace std;
struct tree {
	int data;
	tree* right;
	tree* left;
};
tree* root =nullptr;
int insert(int val) {
	tree* hello = new tree;
	hello->data = val;
	hello->right = nullptr;
	hello->left = nullptr;
	if (root == nullptr) {
		root = hello;
		return 0;
	}
	else {
		tree* temp = root;
		tree* ptr = nullptr;
		while (temp != nullptr) {
			if (temp->data < val) {
				ptr = temp;
				temp = temp->right;
			}
			else {
				ptr = temp;
				temp = temp->left;
			}
		}
		if (ptr->data < val) {
			ptr->right = hello;
		}
		else {
			ptr->left = hello;
		}
	}
	return 1;
}
int max() {
	tree* temp = root;
	while (temp->right!=nullptr) {
		temp = temp->right;

	}
	return temp->data;
}
int min() {
	tree* temp = root;
	while (temp->left != nullptr) {
		temp = temp->left;
	}
	return temp->data;
}

int main() {
	for (int x = 0; x < 6; x++) {
		int v;
		cin >> v;
		insert(v);
	}
	cout << max() << endl;
	cout << min() << endl;

		
}
