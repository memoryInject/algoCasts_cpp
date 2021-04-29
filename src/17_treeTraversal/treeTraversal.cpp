// --- Direction
// In the given tree class, implement 'traverseBFS'(Breadth First Search) and 'traverseDFS'(Depth First Search)

#include "treeTraversal.h"

// Node constructor 
Node::Node(int data){
	this->data = data;	
}

// Node helper method to add children to the node.
// Adding children is implemented in node struct not in Tree class.
void Node::add(int data){
	Node* node = new Node(data);
	this->children.push_back(node);
}

// Node helper method to remove children from the node.
void Node::remove(int data){
	for (auto it = this->children.begin(); it != this->children.end(); it++){
		if((*it)->data == data){
			// erase is built in method with vector it accept a pointer to 
			// the element we want to remove
			this->children.erase(it);	
		}
	}
}

// Destructor for node.
// Deallocate memory for each children
Node::~Node(){
	for(auto i : this->children){
		delete i;
	}
}

// Method to implement for tree traversal problem BFS
void Tree::traverseBFS(){
	// Check if the tree is valid
	if(this->root != nullptr){
		// For the BFS we use queue data structure to store all the nodes 
		// in the tree and iterate through the queue and get the nodes in BFS
		// order due to the queue properties of enqueue and dequeue.
		queue<Node*> bfsQueue;
		bfsQueue.push(this->root);
		while(!bfsQueue.empty()){
			auto node = bfsQueue.front();
			bfsQueue.pop();
			for(auto i: node->children){
				bfsQueue.push(i);
			}
			cout << node->data << endl;
		}
	}
}

// Method to implement for tree traversal problem DFS 
void Tree::traverseDFS(){
	// Check if the tree is valid
	if(this->root != nullptr){
		// For the DFS we use stack data structure to store all the nodes 
		// in the tree and iterate through the statck and get the nodes in DFS 
		// order due to the stack properties of push to stack and pop stack 
		// from the top.
		stack<Node*> dfsStack;
		dfsStack.push(this->root);
		while(!dfsStack.empty()){
			auto node = dfsStack.top();
			dfsStack.pop();
			for(auto i: node->children){
				dfsStack.push(i);
			}
			cout << node->data << endl;
		}
	}
}

// Destructor fot tee
Tree::~Tree(){
	if(this->root != nullptr) delete this->root;
}
