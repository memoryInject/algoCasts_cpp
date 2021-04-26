// --- Directions
// Print out the n-th entry in the fibonacci series.
// The fibonacci series is an ordering of numbers where
// each number is the sum of the preceeding two.
// For example, the sequence
// 	[0, 1, 1, 2, 3, 5, 8, 13, 21, 34]
// 	F0 = 0 is omitted so that the sequence starts with F1 = F2 = 1
// 	forms the first ten entries of the fibonacci series.
// 	--- Example:
// 		fib(4) --> 3
// 		fib(5) --> 5
// 		fib(12) --> 144

#include "fibonacciSeries_recursive.h"

int fib_recursive(int n){
	if (n < 2) return n;
	return fib_recursive(n - 1) + fib_recursive(n - 2);
}

/*
// Test driver code, googletest file: main.cpp
int main()
{
	cout << fib_recursive(3) << endl;
	cout << fib_recursive(4) << endl;
	cout << fib_recursive(5) << endl;
	cout << fib_recursive(40) << endl;
	return 0;
}
*/

