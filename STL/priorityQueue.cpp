#include <bits/stdc++.h>
using namespace std;
int main() {
	// By default stores element in descending order
	// Element in the top of priotiy queue have high priority

	priority_queue<int> pq, copy;

	// push element in pq
	for(int i = 0 ; i < 3; i++) {
		pq.push(i + 1); //TC => O(log(N))
	}

	// displaying element of pq and popping out
	copy = pq;
	while(!pq.empty()) { //TC => O(1)
		cout << pq.top() << "\t"; //TC => O(1)
		pq.pop(); //TC => O(log(N))
	}
	pq = copy;

	// storing element in ascending order
	cout << "----------------" << "\n";
	priority_queue<int, vector<int>, greater<int>> pq_asc, copy_asc;
	for(int i = 0 ; i < 3; i++) {
		pq_asc.emplace(i + 1); //saves unnecessary copy of the object. //TC => O(log(N))
	}
	copy_asc = pq_asc;
	while(!pq_asc.empty()) {
		cout << pq_asc.top() << "\t";
		pq_asc.pop();
	}
	
	pq_asc.swap(copy_asc); //TC => O(1)
	return 0;
}
