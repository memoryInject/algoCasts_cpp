#include "fizzBuzz.h"
#include "gtest/gtest.h"

TEST(fizzBuzz, test1) {
	string expect = "1\n2\nfizz\n4\nbuzz\nfizz\n7\n8\nfizz\nbuzz\n11\nfizz\n13\n14\nfizzbuzz\n16\n17\nfizz\n19\nbuzz\n";

	testing::internal::CaptureStdout();
	fizzBuzz(20);
	string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ (expect, output);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
