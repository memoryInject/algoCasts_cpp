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
void printMat(vector<int> mat){
	int n = sqrt(mat.size());
	for (int i = 0; i < mat.size(); i++){
		if(mat[i] < 10){
			cout << ' ' << mat[i] << ' '; 
		} else {
			cout <<  mat[i] << ' ';
		}
		if((i + 1) % n == 0) {
			cout << endl;
		}
	}
	cout << endl;
}

vector<int> matrix(int n){
	vector<int> mat;
	mat.resize(n*n);
	// fill 1 to n in order (first row)
	for(int i = 0; i < n; i++){
		mat[i] = i + 1;
	}
	
	// next number add to the matrix
	int num = n + 1;

	// index j
	int j = n + n - 1;
	
	// Direction to move the index: 0 -> right, 1->down, 2->left, 3->up
	int dir = 1;

	while(num <= n*n){
		// Check if the slot is avilable and the index is in range
		if(mat[j] == 0 && j < n*n){
			mat[j] = num;
			num++;
		} 

		// Switch to change the direction for index
		switch(dir){
			case 0:
				if(mat[j + 1] == 0){
					j++;
					break;
				}else{
					dir++;
					break;
				}
			case 1:
				if(j + n < n * n && mat[j + n] == 0){
					j += n;
					break;
				} else {
					dir++;
					break;
				}
			case 2:
				if (mat[j-1] == 0){
					j--;
					break;
				} else {
					dir++;
					break;
				}
			case 3:
				if (j - n >= 0 && mat[j - n] == 0){
					j -= n;
					break;
				} else {
					dir = 0;
					break;
				}
		}
	}
	
	return mat;
}


int main()
{
	printMat(matrix(2));
	printMat(matrix(3));
	printMat(matrix(4));
	printMat(matrix(5));
//	auto mat = matrix(20000);
	return 0;
}

