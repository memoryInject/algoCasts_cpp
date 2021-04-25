// --- Directions
// Write a function that accepts an integer N
// and returns a NxN spiral matrix.
// --- Examples
// 	matrix(2)
// 		[[1, 2],
// 		 [4, 3]]
//	matrix(3)
//		[[1, 2, 3],
//		 [8, 9, 4],
//		 [7, 6, 5]]

#include <bits/stdc++.h>

using namespace std;

// Helper function to print matrix
void printMat(vector<vector<int>> mat);

vector<vector<int>> matrix(int n);
