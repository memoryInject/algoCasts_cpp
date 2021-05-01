// --- Direction
// Given a node, validate the binary search tree, ensuring that every node's 
// left hand child is less than the parent node's value, and that every node's
// right hand child is greater than the parent

#include <bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;

	// Constructor
	Node(int data){
		this->data = data;
		this->left = nullptr;
		this->right = nullptr;
	}

	// BST insertion
	void insert(int data){
		if (data < this->data && this->left != nullptr){
			this->left->insert(data);
		} else if (data < this->data){
			this->left = new Node(data);
		} else if (data > this->data && this->right != nullptr){
			this->right->insert(data);	
		} else if (data > this->data){
			this->right = new Node(data);
		}
	}

	// Destructor
	~Node(){
		if(this->left != nullptr) delete this->left;
		if(this->right != nullptr) delete this->right;
	}
};

// Implement this function
bool validate(Node* node, int min=-1, int max=-1);

