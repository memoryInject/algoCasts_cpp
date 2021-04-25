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

#include "matrix_spiral.h"

// Helper function to print matrix
void printMat(vector<vector<int>> mat){
	for(auto i : mat){
		for(auto j : i){
			if(j < 10){
				cout << ' ' << j  << ' '; 
			} else {
				cout <<  j  << ' ';
			}
		}
		cout << endl;
	}
	cout << endl;
}

vector<vector<int>> matrix(int n){
	vector<vector<int>> mat;
	
	for(int i = 0; i < n; i++){
		vector<int> tmpArr;
		tmpArr.resize(n);
		mat.push_back(tmpArr);
	}

	int counter = 1;
	int startColumn = 0;
	int endColumn = n - 1;
	int startRow = 0;
	int endRow = n - 1;
	
	while(startColumn <= endColumn && startRow <= endRow){
		// Top row
		for( int i = startColumn; i <= endColumn; i++){
			mat[startRow][i] = counter;
			counter++;
		}
		startRow++;

		// Right column 
		for( int i = startRow; i <= endRow; i++){
			mat[i][endColumn] = counter;
			counter++;
		}
		endColumn--;

		// Bottom row
		for( int i = endColumn; i >= startColumn; i--){
			mat[endRow][i] = counter;
			counter++;
		}
		endRow--;
		
		// Start column
		for( int i = endRow; i >= startRow; i--){
			mat[i][startColumn] = counter;
			counter++;
		}
		startColumn++;
		
	}
	
	return mat;
}


/*
// Test driver code, googletest file: main.cpp
int main()
{
	printMat(matrix(2));
	printMat(matrix(3));
	printMat(matrix(4));
	printMat(matrix(5));
//	auto mat = matrix(20000);

	return 0;
}
*/

