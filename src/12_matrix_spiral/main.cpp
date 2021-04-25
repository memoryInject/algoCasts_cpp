#include "matrix_spiral.h"
#include "gtest/gtest.h"

TEST(matrix_spiral, test1) {
	string expect = " 1  2 \n 4  3 \n\n"; 

	testing::internal::CaptureStdout();
	printMat(matrix(2));
	string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ (expect, output);
}

TEST(matrix_spiral, test2) {
	string expect = " 1  2  3  4 \n12 13 14  5 \n11 16 15  6 \n10  9  8  7 \n\n"; 

	testing::internal::CaptureStdout();
	printMat(matrix(4));
	string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ (expect, output);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
