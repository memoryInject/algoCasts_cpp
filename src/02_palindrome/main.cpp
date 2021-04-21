#include "palindrome.h"
#include "gtest/gtest.h"

TEST(palindrome, test1) {
	EXPECT_EQ (palindrome("abba"),  1);
	EXPECT_EQ (palindrome("aabcdef"),  0);
}


int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
