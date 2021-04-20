// --- Directions
// Given a string, return a new string with the reversed 
// order of characters
// --- Examples
// 	reverse('apple') == 'leppa'
// 	reverse('hello') == 'olleh'
#include "reverseString.h"

/*string reverse(string str){
	reverse(str.begin(), str.end());
	return str;
}*/

string reverse(string str){
	string reversed; 
	for (auto i : str){
		reversed = i + reversed;
	}
	return reversed;
}
