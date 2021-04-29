#include "treeTraversal.h"
#include "gtest/gtest.h"

TEST(treeTraversal, Node_test) {
	Node* node = new Node(5);
	node->add(6);
	node->add(9);
	node->add(8);
	node->add(12);
	int size = node->children.size();
	node->remove(9);

	EXPECT_EQ (node->data, 5);
	EXPECT_EQ (node->children.empty(), 0);
	EXPECT_EQ (node->children.size(), size - 1);
}

// Setting up a test tree to test BFS and DFS
Tree treeSetup(){
	Node* node = new Node(5);
	node->add(6);
	node->add(9);
	node->add(8);
	node->add(12);
	node->children[3]->add(15);
	node->children[0]->add(24);
	Tree tree;
	tree.addRoot(node);
	return tree;
}

TEST(treeTraversal, traverseBFS_test) {

	auto tree = treeSetup();
	
	string expect = "5\n6\n9\n8\n12\n24\n15\n";
	testing::internal::CaptureStdout();
	tree.traverseBFS();
	string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ (expect, output);
}

TEST(treeTraversal, traverseDFS_test) {

	auto tree = treeSetup();

	string expect = "5\n12\n15\n8\n9\n6\n24\n"; 
	testing::internal::CaptureStdout();
	tree.traverseDFS();
	string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ (expect, output);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
