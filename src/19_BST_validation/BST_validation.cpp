// --- Direction
// Given a node, validate the binary search tree, ensuring that every node's 
// left hand child is less than the parent node's value, and that every node's
// right hand child is greater than the parent
// Assume the BST only contains positive integers

#include "BST_validation.h"

// Implement this function
bool validate(Node* node, int min , int max ){
	if(max != -1 && node->data > max) return false;

	if(min != -1 && node->data < min) return false;

	if(node->left != nullptr && !validate(node->left, min, node->data))
		return false;

	if(node->right != nullptr && !validate(node->right, node->data, max))
		return false;

	return true;
}

