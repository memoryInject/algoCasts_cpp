#include "arrayChunking.h"
#include "gtest/gtest.h"

TEST(arrayChunking, test1) {
	vector<int> v {1, 2, 3, 4, 5};
	auto arr = chunk(v, 2);

	EXPECT_EQ(arr.size(), 3);

	// Expected results of sub array 0
	EXPECT_EQ(arr[0].size(), 2);

	string expect = "1 2 \n";
	testing::internal::CaptureStdout();
	print(arr[0]);	
	string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ (expect, output);

	// Expected results of sub array 1
	EXPECT_EQ(arr[1].size(), 2);

	expect = "3 4 \n";
	testing::internal::CaptureStdout();
	print(arr[1]);	
	output = testing::internal::GetCapturedStdout();
	EXPECT_EQ (expect, output);

	// Expected results of sub array 2
	EXPECT_EQ(arr[2].size(), 1);

	expect = "5 \n";
	testing::internal::CaptureStdout();
	print(arr[2]);	
	output = testing::internal::GetCapturedStdout();
	EXPECT_EQ (expect, output);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
