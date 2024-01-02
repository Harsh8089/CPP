#include <bits/stdc++.h>
using namespace std;
int main() {
	pair <int, string> p;
	// Pair Initialization
	// Method - 1
	p = make_pair(2, "abc");
	cout << p.first << "\t";
	cout << p.second << endl;

	// Method - 2
	pair<int, string> p1;
	p1 = {12, "harsh"};
	cout << p1.first << "\t" ;
	cout << p1.second << endl;

	// Copying pairs 
	pair <int, string> p2 = p1;
	cout << p2.first << "\t";
	cout << p2.second << endl;

	cout << "Address of p1 = " << &p1 << "\t" << "Address of p2 = " << &p2 << endl;
	// Conclusion : p2 is a copy of p1 

	pair <int, string> &p3 = p1;
	cout << "Address of p1 = " << &p1 << "\t" << "Address of p3 = " << &p3 << endl;
	// Conclusion : p3 is a same to p1 

	// Arrays of Pair
	cout << "Arrays of Pair" << endl;
	pair <int, string> parr[2];
	parr[0] = {1, "abc"};
	parr[1] = {2 , "def"};
	swap(parr[0], parr[1]);
	for(int i = 0; i < 2; i++) {
		cout << parr[i].first << "\t" << parr[i].second << endl;
	}

	return 0;
}