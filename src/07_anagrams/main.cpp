#include "anagrams.h"
#include "gtest/gtest.h"

TEST(anagrams, test1) {
	EXPECT_EQ(anagram("rail safety", "fairy tales"), true);
	EXPECT_EQ(anagram("RAIL! SAFETY!", "fairy tales"), true);
	EXPECT_EQ(anagram("Hi there", "Bye there"), false);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
