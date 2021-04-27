#include "linkedList_midpoint.h"
#include "gtest/gtest.h"

TEST(linkedList_midpoint, test1) {

	list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	l.push_back(6);

	EXPECT_EQ (midpoint(l), 3);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
