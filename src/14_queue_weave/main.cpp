#include "queue_weave.h"
#include "gtest/gtest.h"

TEST(queueWeave, test1) {

	queue<int> q1;
	q1.push(1);
	q1.push(2);
	q1.push(3);
	q1.push(4);

	queue<int> q2;
	q2.push(11);
	q2.push(12);
	q2.push(13);
	q2.push(14);
	q2.push(15);
	q2.push(16);
	q2.push(17);

	string expect = "1\n11\n2\n12\n3\n13\n4\n14\n15\n16\n17\n";

	testing::internal::CaptureStdout();
	printQueue(weave(q1, q2));
	string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ (expect, output);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
