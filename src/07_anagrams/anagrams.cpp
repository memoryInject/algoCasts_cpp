// --- Directions
// Check to see if two provided stringss are anagram of eachother.
// One string is an anagram of another if it uses the same characters
// in the same quantity. Only consider characters, not spaces
// or punctuation. Consider capital letters to be same as lower case
// --- Examples
// 	anagram("rail safety', "fairy tales") --> true
// 	anagram("RAIL! SAFETY!, "fairy tales") --> true
// 	anagram("Hi there", "Bye there") --> false

#include "anagrams.h"

// helper function to filter spaces, punctuations etc
// and convert to all lowercase.
string filterString(string s){
	// regex for matching only characters not spaced or
	// punctuations etc
	regex e ("[^\\w]");

	// return result
	string result;

	// Apply regex
	regex_replace(back_inserter(result), s.begin(), s.end(), e, "$2");
	
	// convert to lowercase
	transform(result.begin(), result.end(), result.begin(), ::tolower);
	return result;
}

// --- Solution 1
bool anagram(string s1, string s2){
	// filter incomig strings
	auto s1Filter = filterString(s1);
	auto s2Filter = filterString(s2);

	if(s1Filter.size() != s2Filter.size()) return false;

	// Create a hash map to store first string characters and it's frequncy
	unordered_map<char, int> fmap;
	for(auto i : s1Filter){
		if(fmap.find(i) != fmap.end()){
			fmap[i]++;
		}else{
			fmap.insert(make_pair(i, 1));
		}
	}

	// Check second string against hash map
	for(auto i : s2Filter){
		if(fmap.find(i) != fmap.end()){
			 fmap[i]--;
			if(fmap[i] < 0) return false;
		} else {
			return false;
		}
	}

	// Final check for frequency in hash map
	for(auto i : fmap){
		if(i.second != 0) return false;
	}

	return true;
}

