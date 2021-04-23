#include "maxChar.h"
#include "gtest/gtest.h"

TEST(maxChar, test1) {
	EXPECT_EQ (maxChar("abcccd"), 'c');
	EXPECT_EQ (maxChar("apple 12311111"), '1');
	EXPECT_EQ (maxChar("abcccddddddddd"), 'd');
	
}


int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
