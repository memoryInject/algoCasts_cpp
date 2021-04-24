// --- Directions
// Write a function that accepts a positive number N.
// The function should print a step shape
// with N levels using # character. Make sure the 
// step has spaces on the right hand side!
// --- Examples
// 	step(2)
// 		'# '
// 		'##'
// 	step(4)
// 		'#   '
// 		'##  '
// 		'### '
// 		'####'

#include "print_steps.h"

void step(int n){
	for(int i = 0; i < n; i++){
		string str(n, ' ');
		fill(str.begin(), str.begin()+i+1, '#');
		cout << str << endl;
	}
}

/*
// Driver test code, google test file: main.cpp
int main()
{
	step(2);
	cout << endl;
	step(4);
	return 0;
}
*/

