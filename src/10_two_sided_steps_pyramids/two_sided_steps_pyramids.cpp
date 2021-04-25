// --- Directions
// Write a function that accepts a positive number N.
// The function should print a pyramid shape 
// with N levels using the # character. Make sure the 
// pyramid has spaces on both left *and* right hand sides 
// --- Examples
// 	pyramid(1)
// 		'#'
// 	pyramid(2)
// 		' # '
// 		'###'
// 	pyramid(3)
// 		'  #  '
// 		' ### '
// 		'#####'

#include <bits/stdc++.h>
using namespace std;

void pyramid(int n){
	// Number of bricks at the bottom layer (maximum witdth on each layer).
	int numBricks = n + n - 1;	
	for (int i = 0; i < n; i++){
		string str(numBricks, ' ');
		auto start = next(str.begin(), numBricks - n - i);
		auto end = next(str.end(), n - numBricks + i);
		fill(start, end, '#');
		cout << str << endl;
	}
	cout << endl;
}

/*
// Test driver code, googletest file: main.c
int main()
{
	pyramid(1);
	pyramid(2);
	pyramid(3);
	pyramid(4);
	pyramid(5);
	return 0;
}
*/

