#include "print_steps.h"
#include "gtest/gtest.h"

TEST(fizzBuzz, test1) {
	string expect = "# \n##\n"; 

	testing::internal::CaptureStdout();
	step(2);
	string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ (expect, output);
}

TEST(fizzBuzz, test2) {
	string expect = "#   \n##  \n### \n####\n";
	testing::internal::CaptureStdout();
	step(4);
	string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ (expect, output);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
