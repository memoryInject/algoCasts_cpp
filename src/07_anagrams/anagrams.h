// --- Directions
// Check to see if two provided stringss are anagram of eachother.
// One string is an anagram of another if it uses the same characters
// in the same quantity. Only consider characters, not spaces
// or punctuation. Consider capital letters to be same as lower case
// --- Examples
// 	anagram("rail safety', "fairy tales") --> true
// 	anagram("RAIL! SAFETY!, "fairy tales") --> true
// 	anagram("Hi there", "Bye there") --> false

#include <bits/stdc++.h>

using namespace std;

// helper function to filter spaces, punctuations etc
// and convert to all lowercase.
string filterString(string s);

bool anagram(string s1, string s2);
