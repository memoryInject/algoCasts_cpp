#include "two_sided_steps_pyramids.h"
#include "gtest/gtest.h"

TEST(fizzBuzz, test1) {
	string expect = " # \n###\n\n"; 

	testing::internal::CaptureStdout();
	pyramid(2);
	string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ (expect, output);
}

TEST(fizzBuzz, test2) {
	string expect = "  #  \n ### \n#####\n\n"; 

	testing::internal::CaptureStdout();
	pyramid(3);
	string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ (expect, output);
}

TEST(fizzBuzz, test3) {
	string expect = "    #    \n   ###   \n  #####  \n ####### \n#########\n\n"; 

	testing::internal::CaptureStdout();
	pyramid(5);
	string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ (expect, output);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
