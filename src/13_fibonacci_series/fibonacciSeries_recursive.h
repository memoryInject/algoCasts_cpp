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

#include <bits/stdc++.h>

using namespace std;

int fib_recursive(int n);
