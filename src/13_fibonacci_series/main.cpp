#include "fibonacciSeries_iterative.h"
#include "fibonacciSeries_recursive.h"
#include "fibonacciSeries_recursive_memoization.h"
#include "gtest/gtest.h"

TEST(fibonacciSeries, test1_iterative) {
	EXPECT_EQ (fib_iter(3), 2);
	EXPECT_EQ (fib_iter(4), 3);
	EXPECT_EQ (fib_iter(5), 5);
	EXPECT_EQ (fib_iter(12), 144);
	EXPECT_EQ (fib_iter(40), 102334155);
}

TEST(fibonacciSeries, test2_recursive) {
	EXPECT_EQ (fib_recursive(3), 2);
	EXPECT_EQ (fib_recursive(4), 3);
	EXPECT_EQ (fib_recursive(5), 5);
	EXPECT_EQ (fib_recursive(12), 144);
	EXPECT_EQ (fib_recursive(40), 102334155);
}

TEST(fibonacciSeries, test3_recursive_memoization) {
	EXPECT_EQ (fib_memo(3), 2);
	EXPECT_EQ (fib_memo(4), 3);
	EXPECT_EQ (fib_memo(5), 5);
	EXPECT_EQ (fib_memo(12), 144);
	EXPECT_EQ (fib_memo(40), 102334155);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
