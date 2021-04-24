#include "sentence_capitalization.h"
#include "gtest/gtest.h"

TEST(sentence_capitalization, test1) {
	EXPECT_EQ(capitalize("a short sentence"), "A Short Sentence");
	EXPECT_EQ(capitalize("a lazy fox"), "A Lazy Fox");
	EXPECT_EQ(capitalize("look, it is working!"), "Look, It Is Working!");
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
