#include "linkedList_stepBack_from_tail.h"
#include "gtest/gtest.h"

TEST(linkedList_stepBack_from_tail, test1) {

	list<int> l;
	l.push_front(6);
	l.push_front(5);
	l.push_front(4);
	l.push_front(3);
	l.push_front(2);
	l.push_front(1);

	EXPECT_EQ (fromLast(l, 2), 4);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
