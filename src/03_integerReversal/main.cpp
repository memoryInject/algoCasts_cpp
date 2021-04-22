#include "integerReversal.h"
#include "gtest/gtest.h"

TEST(integerReversal, test1) {
	EXPECT_EQ (reverseInt(-15), -51);
	EXPECT_EQ (reverseInt(15), 51);
	EXPECT_EQ (reverseInt(2800), 82);
}


int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
