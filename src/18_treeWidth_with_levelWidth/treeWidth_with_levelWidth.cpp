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


#include "treeWidth_with_levelWidth.h"

// Implement this function
vector<int> levelWidth(Node* root){
	// Create a stopper node to find the tree level
	Node stopper = Node(-1);

	// Create queue to perform BFS
	queue<Node*> nodeQueue;

	// Initially we add root node and stopper node to queue
	nodeQueue.push(root);
	nodeQueue.push(&stopper);

	// Create a counter array to store number of elements in each level
	vector<int> counterArr = {0};

	// Check if the size of queue is greater than 1 because in the end 
	// there will be the stopper node in the queue.
	while (nodeQueue.size() > 1) {
		// Take the node in the front of the queue.
		// Then pop that node from the queue
		auto node = nodeQueue.front();
		nodeQueue.pop();

		// Check if the node taken from the queue is stopper node
		if(node == &stopper) {
			// We finish one level now, add new counter element to 
			// counter array
			counterArr.push_back(0);
			// Make sure to push back the stopper node to the queue.
			nodeQueue.push(node);
		} else {
			// If the node is not the stopper node then
			// add it's children to the queue.
			for(auto i: node->children){
				nodeQueue.push(i);
			}
			// Last up the counter by one
			counterArr[counterArr.size() - 1]++;
		}
	}
	
	// Return the counter array
	return counterArr;
}


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
//	cout << "Called destructor" << endl;
	for(auto i : this->children){
		delete i;
	}
}

