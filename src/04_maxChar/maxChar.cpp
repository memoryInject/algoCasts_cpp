// --- Directions
// Given a string, return the character that is most 
// commonly used in the string.
// --- Examples
// 	maxChar("abccccd") == "c"
// 	maxChar("apple 123111") == "1"

#include "maxChar.h"

char maxChar(string str){
	// Create a map to store char and it's frequncies
	unordered_map<char, int> charMap;
	for(auto i : str){
		if(charMap.find(i) != charMap.end()){
			charMap[i]++;
		} else {
			charMap[i] = 1;
		}
	}

	// Loop through the map and find the maximum frequncy and the char
	int maxNum = 0;
	char result;
	for(auto i : charMap){
		if(i.second > maxNum){
			maxNum = i.second;
			result = i.first;
		}
	}
	return result;
}

