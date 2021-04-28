// --- Drirection
// Given a linked list and integer n, return the element n
// spaces from the last node in the list. Do not call the 'size' method
// of the linked list. Assume that n will always be less than the length of 
// the list.
// --- Example
// 	list<int> l;
// 	l.push_back(1);
// 	l.push_back(2);
// 	l.push_back(3);
// 	l.push_back(4);
// 	l.push_back(5);
// 	l.push_back(6);
// 	fromLast(l, 2); returns 4.

#include <bits/stdc++.h>

using namespace std;

int fromLast(list<int> l, int n);
