#include "reverseString.h"
#include "gtest/gtest.h"

TEST(reverseString, test1) {
	EXPECT_EQ (reverse("hello"),  "olleh");
}

TEST(reverseString, test2) {
	EXPECT_NE (reverse("foobar"),  "foobar");
}

TEST(reverseString, test3) {
	EXPECT_EQ (reverse("hello There!"),  "!erehT olleh");
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
