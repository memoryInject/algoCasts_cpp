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

#include "fibonacciSeries_iterative.h"

int fib_iter(int n){
	if(n == 0) return 0;
	if(n < 3) return 1;
	int prev = 0;
	int i = 1;
	int current = 1;
	while(i < n){
		int tmp = current;
		current += prev;
		prev = tmp;
		i++;
	}
	return current;
}

/*
// Test driver code, googletest file: main.cpp
int main()
{
	cout << fib_iter(3) << endl;
	cout << fib_iter(4) << endl;
	cout << fib_iter(5) << endl;
	cout << fib_iter(12) << endl;

	return 0;
}
*/

