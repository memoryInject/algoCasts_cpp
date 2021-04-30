#include "treeWidth_with_levelWidth.h"
#include "gtest/gtest.h"

// Create a test tree with node struct
Node* buildTestTree(){
	Node* node = new Node(1);
	node->add(2);
	node->add(3);
	node->add(4);
	node->children[0]->add(5);
	node->children[2]->add(6);

	return node;
}

TEST(levelWidth, nodeTest) {
	auto node = buildTestTree();

	EXPECT_EQ (node->data, 1);
	EXPECT_EQ (node->children.empty(), 0);
	delete node;
}

// Perform levelWidth test here
TEST(levelWidth, levelWidth_test) {
	auto node = buildTestTree();

	vector<int> expectArr {1, 3, 2};
	auto resultArr = levelWidth(node);

	for (int i = 0; i < expectArr.size(); i++){
		EXPECT_EQ(resultArr[i], expectArr[i]);	
	}

	delete node;
}


int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
