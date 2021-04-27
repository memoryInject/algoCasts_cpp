// --- Drirection
// Return the 'middle' node of a linked list.
// If the list has an even number of elements, return 
// the node at the end of the first half of the list.
// *Do not* use a counter variable. *do not* retrieve 
// the size of the list, and only iterate
// through the list one time.
// --- Example
// 	list<int> l;
// 	l.push_back(1);
// 	l.push_back(2);
// 	l.push_back(3);
// 	l.push_back(4);
// 	l.push_back(5);
// 	midpoint(l); returns 3.

#include "linkedList_midpoint.h"


int midpoint(list<int> l){
	// We use two iterators one is slow (it advance 1 in every iteration) and 
	// other one is fast (it advance 2 in every iteration).
	auto iterSlow = l.begin();
	auto iterFast = l.begin();
	while(next(iterFast, 1) != l.end() && next(iterFast, 2) != l.end()){
		iterSlow ++;
		iterFast = next(iterFast, 2);
	}

	return *iterSlow;
}

/*
// Test driver code, googletest file: main.c
int main()
{
	list<int> l;
	l.push_front(6);
	l.push_front(5);
	l.push_front(4);
	l.push_front(3);
	l.push_front(2);
	l.push_front(1);

	cout << midpoint(l) << endl;

	return 0;
}
*/

