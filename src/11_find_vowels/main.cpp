#include "find_vowels.h"
#include "gtest/gtest.h"

TEST(find_vowels, test1) {
	EXPECT_EQ (vowels("Hi There!"), 3);
	EXPECT_EQ(vowels("Why do you ask?"), 4);
	EXPECT_EQ(vowels("Why"), 0);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
