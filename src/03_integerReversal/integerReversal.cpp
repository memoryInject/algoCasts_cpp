// -- Directions
// Given an integer, return an integer that is the reverse
// ordering of numbers.
// -- Examples
// 	reverseInt(15) == 51
// 	reverseInt(500) == 5
// 	reverseInt(-15) == -51

#include <bits/stdc++.h>
#include "integerReversal.h"

using namespace std;

int reverseInt(int n){
	// Convert int to string
	string str = to_string(n);

	// Reverse the string
	reverse(str.begin(), str.end());

	// Convert string to int
	int result = stoi(str);
	
	// Add signs to int
	result *= str.back() == '-' ? -1 : 1;

	return result;
}

