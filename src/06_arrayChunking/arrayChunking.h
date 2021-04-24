// --- Directions
// Given an array and chunk size, divide the array into many subarrays
// where each subarray is of length size
// --- Examples
// 	chunk({1, 2, 3, 4}, 2) --> {{1, 2}, {3, 4}}
// 	chunk({1, 2, 3, 4, 5}, 2) --> {{1, 2}, {3, 4}, {5}}


#include <bits/stdc++.h>

using namespace std;

template<typename T>
void print(vector<T> const &v){
	for(auto &i: v){
		cout << i << ' ';
	}

	cout << endl;
}

vector<vector<int>> chunk(vector<int> arr, int n);

