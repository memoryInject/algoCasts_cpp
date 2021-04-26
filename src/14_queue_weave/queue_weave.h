// --- Directions
// Implement the 'weave' function. Weave receives two queues as arguments and 
// combines the contents of each into a new, third queue.
// The third queue should contain the *alternating* content of the two queue.
// The function should handle queues of diffent lengths.


#include <bits/stdc++.h>

using namespace std;

// Helper function to print queue
void printQueue(queue<int> q);

queue<int> weave(queue<int> q1, queue<int> q2);

