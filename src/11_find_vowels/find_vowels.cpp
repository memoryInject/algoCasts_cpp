// --- Directions
// Write a function that return the number of vowels
// used in a string. Vowels are the characters 'a', 'e'
// 'i', 'o' and 'u'.
// --- Examples
// 	vowels("Hi There!") --> 3
// 	vowels("Why do you ask?") --> 4
// 	vowels("Why") --> 0

#include "find_vowels.h" 

// ---Solution 1
/*
int vowels(string str){
	int result = 0;
	unordered_set<char> vw{'a', 'e', 'i', 'o', 'u'};
	for( auto i : str){
		if( vw.find(i) != vw.end()) result++;
	}
	return result;
}
*/

// ---Solution 2
int vowels(string str){
	regex e("[aeiou]");
	auto start = sregex_iterator(str.begin(), str.end(), e);
	auto end = sregex_iterator();
	return distance(start, end);
}

/*
// Test driver code, googletest file: main.cpp
int main()
{
 	cout << vowels("Hi There!") << endl;
	cout << vowels("Why do you ask?") << endl;
	cout << vowels("Why") << endl;
	return 0;
}
*/

