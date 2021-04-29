// --- Direction
// In the given tree class, implement 'traverseBFS' (Breadth First Search) and 'traverseDFS (Depth First Search)'

#include <bits/stdc++.h>

using namespace std;

// Create a node for the tree class
struct Node {
	int data;
	vector<Node*> children;
	Node(int data);
	~Node();
	void add(int data);
	void remove(int data);
};

class Tree{
private:
	Node* root;

public:
	Tree(){ this->root = nullptr; }
	~Tree();
	Node* getRoot(){ return this->root; }
	void addRoot(Node* root){ this->root = root; }
	void traverseBFS();
	void traverseDFS();
};

