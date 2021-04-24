// --- Directions
// Write a function that accepts a string. The function should 
// capitalize the first letter of each word in the string then 
// return the capitalized string.
// --- Examples
// 	capitalize("a short sentence") --> "A Shot Sentence"
// 	capitalize("a lazy fox") --> "A Lazy Fox"
// 	capitalize("look, it is working!" --> "Look, It Is Working!"

#include "sentence_capitalization.h" 

string capitalize(string s){
	string word;
	string result;
	for (auto i: s){
		if(i == ' '){
			word[0] = toupper(word[0]);
			if(result.empty()){
				result += word;
			} else {
				result += ' ' + word;
			}
			word = "";
		} else {
			word = word + i;
		}
	}

	// Add last word to result 
	word[0] = toupper(word[0]);
	result += ' ' + word;
	word = "";

	return result;
}

/*
// Test driver code actual test is in main.cpp file
int main()
{
 	cout << capitalize("a short sentence") << endl;
 	cout << capitalize("a lazy fox") << endl;
 	cout << capitalize("look, it is working!") << endl;
	return 0;
}
*/

