// --- Directions
// Implement the 'weave' function. Weave receives two queues as arguments and 
// combines the contents of each into a new, third queue.
// The third queue should contain the *alternating* content of the two queue.
// The function should handle queues of diffent lengths.


#include "queue_weave.h"

// Helper function to print queue
void printQueue(queue<int> q){
	auto tmpQueue = q;
	for(int i = 0; i < q.size(); i++){
		cout << tmpQueue.front() << endl;
		tmpQueue.pop();
	}
}

queue<int> weave(queue<int> q1, queue<int> q2){
	queue<int> result;
	while(!q1.empty() && !q2.empty()){
		result.push(q1.front());
		result.push(q2.front());
		q1.pop();
		q2.pop();
	}
	
	while(!q1.empty()){
		result.push(q1.front());
		q1.pop();
	}
	
	while(!q2.empty()){
		result.push(q2.front());
		q2.pop();
	}

	return result;
}

/*
// Test driver code, googletest file: main.cpp
int main()
{
	queue<int> q1;
	q1.push(1);
	q1.push(2);
	q1.push(3);
	q1.push(4);

	queue<int> q2;
	q2.push(11);
	q2.push(12);
	q2.push(13);
	q2.push(14);
	q2.push(15);
	q2.push(16);
	q2.push(17);

	printQueue(weave(q1, q2));

	return 0;
}
*/

