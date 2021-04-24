// --- Directions
// Given an array and chunk size, divide the array into many subarrays
// where each subarray is of length size
// --- Examples
// 	chunk({1, 2, 3, 4}, 2) --> {{1, 2}, {3, 4}}
// 	chunk({1, 2, 3, 4, 5}, 2) --> {{1, 2}, {3, 4}, {5}}


#include "arrayChunking.h"

// --- Solution 1
/*
vector<vector<int>> chunk(vector<int> arr, int n){
	// Store final result of array of array
	vector<vector<int>> result;

	// Store subarray 
	vector<int> tmpArr;
	
	// Subarray size not exceeds n
	int subSize = 0;
	for (auto i : arr){
		if(subSize < n){
			tmpArr.push_back(i);
			subSize++;
		} else {
			result.push_back(tmpArr);
			tmpArr.clear();
			tmpArr.push_back(i);
			subSize = 1;
		}
	}

	// Add last sub arry to result
	if(!tmpArr.empty()){
		result.push_back(tmpArr);
	}

	return result;
}
*/

// --- Solution 2
vector<vector<int>> chunk(vector<int> arr, int n){
	// Store final result of array of array
	vector<vector<int>> result;

	// Store subarray 
	vector<int> tmpArr;
	
	// Size of the result vector to loop for
	int size = (arr.size() - 1) / n + 1;

	for (int i = 0; i < size; i++){
		// Get range for next set of 'n' elements
		auto startIter = next(arr.begin(), i*n);
		auto endIter = next(arr.begin(), i*n + n);

		// Code to handle last sub-vector as it might
		// contain fewer elements
		if(i*n + n > arr.size()) endIter = arr.end();

		// Copy elements from the input range to the sub-vector
		copy(startIter, endIter, back_inserter(tmpArr));

		if(!tmpArr.empty()){
			result.emplace_back(tmpArr);
			tmpArr.clear();
		}
	}

	return result;
}

