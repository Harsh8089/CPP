#include <bits/stdc++.h>
#define en endl
using namespace std;
int main() {
	vector<int> v = {1,2,3,4};
	cout << "Method - 1" << en;

	vector<int> :: iterator it = v.begin(); //v.begin() points to first element
	cout << (*it) << "\t" << *(it + 1) << en;

	cout << "Printing vector " << en;
	for(it = v.begin(); it != v.end(); it += 1) {
		cout << *(it) << en;
	}

	vector<pair<int ,int>> vp = {{1,2},{2,3}};

	vector<pair<int, int>> :: iterator it1;

	for(it1 = vp.begin(); it1 != vp.end(); ++it1) {
		// cout << (*it1).first << "\t" << (*it1).second << en;
		cout << (it1->first) << "\t" << (it1->second) << en;
	}
	// (*it1).first = it1->first

	cout << "Method - 2" << en;
	for(int value : v) {
		value++;
		cout << value << "\t";
	}
	cout << en;
	for(int &value : v) {
		value++;
	}
	for(int value : v) {
		value++;
		cout << value << "\t";
	}
	cout << "Print vector of pairs" << en;
	for(pair<int, int> p : vp) {
		cout << p.first << "\t" << p.second << en;
	}

	cout << "Method - 3" << en;

	for(auto value : v) {
		value++;
		cout << value << "\t";
	}

	cout << "Print vector of vectors" << en;
	
	vector<vector<int>> v0 = {{1,2},{3},{4,5}};
	for(auto v : v0) {
		for(auto val : v) {
			cout << val << "\t";
		}
		cout << en;
	}

	return 0;
}