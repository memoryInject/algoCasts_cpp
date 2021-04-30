// --- Direction
// Given the root node of a tree, return an array where each element is 
// the width of the tree at each level.
// --- Example
// Given:
// 		0
//   /  |  \
// 1	2	3
// |		|
// 4		5
// Answer: {1, 3, 2}
// Explanation: on the first level of the tree there is only 1 element (0),
// in the second level there are 3 elements (1, 2, 3), in the last level there
// are only 2 elements (4, 5).

#include <bits/stdc++.h>

using namespace std;

// Create a node 
struct Node {
	int data;
	vector<Node*> children;
	Node(int data);
	~Node();
	void add(int data);
	void remove(int data);
};

// Implement this function
vector<int> levelWidth(Node* root);

