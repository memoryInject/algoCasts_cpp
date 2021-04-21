// --- Directions
// Given a string, return true if the string is a palindrome
// or false if it is not. Palindromes are strings that 
// form the same word if it is reversed. *Do* includes spaces
// and punctuations in determinig if the string is a palindromw.
// --- Examples:
// 	palindrome("abba") == true
// 	palindrome("abcdefg") == false

#include "palindrome.h"

/*
// -- Solution 1
bool palindrome(string str){
	string rev = str;
	reverse(rev.begin(), rev.end());
	if (rev == str){
		return true;
	}
	return false;
}
*/

/*
// -- Solution 2
bool palindrome(string str){
	auto itr_front = str.begin();
	auto itr_back = str.rbegin();
	for(; itr_front < str.end() && itr_back < str.rend(); itr_front++, itr_back++){
		if(!(*itr_front == *itr_back)){
			return false;
		}
	}
	return true;
}
*/

// -- Solution 3
bool palindrome(string str){
	int half = str.length()/2;

	for(int i = 0; i < half+1; i++){
		if(str[i] != str[str.length() - i -1]) return false;
	}
	return true;
}

