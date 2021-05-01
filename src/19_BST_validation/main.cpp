#include "BST_validation.h"
#include "gtest/gtest.h"

// Create a test tree with node struct
Node* buildTestTree(){
	Node* node = new Node(11);
	node->insert(2);
	node->insert(14);
	node->insert(13);
	node->insert(5);
	node->insert(1);

	return node;
}

// Create a test tree with node struct, non-valid BST
Node* buildTestTreeBad(){
	Node* node = new Node(11);
	node->insert(2);
	node->insert(14);
	node->insert(13);

	// Make it invalid for test
	node->left->right = new Node(16);

	return node;
}

// Test a valid BST
TEST(BST_validate, test1) {
	auto node = buildTestTree();

	EXPECT_EQ (validate(node), true);
	delete node;
}

// Test a non-valid BST
TEST(BST_validate, test2) {
	auto node = buildTestTreeBad();

	EXPECT_EQ (validate(node), false);
	delete node;
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
