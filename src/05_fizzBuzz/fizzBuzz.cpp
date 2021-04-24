// --- Directions
// Write a program that console logs the numbers
// from 1 to n. But for multiple of three print 
// "fizz" instead of the number and for the multiples 
// of five print "buzz". For numbers which are multiples
// of both three and five print "fizzbuzz".
// --- Example
// 	fizzBuzz(5);
// 	1
// 	2
// 	fizz
// 	4
// 	buzz

#include "fizzBuzz.h"

// --- Solution 1

void fizzBuzz(int n){
	for (int i = 1; i <= n; i++){
		if((i%3 == 0) && (i%5 != 0)){
			cout << "fizz" << endl;
		} else if ((i%5 == 0) && (i%3 != 0)){
			cout << "buzz" << endl;
		} else if ((i%3 == 0) && (i%5 == 0)){
			cout << "fizzbuzz" << endl;
		} else {
			cout << i << endl;
		}
	}
}

