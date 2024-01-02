#include <bits/stdc++.h>
using namespace std;
int main() {
	// map<key, val>
	map<string, int> m;
	// m["aaa"] //O(log(n))
	m["abc"] = 1; //m.size() * O(log(n)) m.size() -> for comparing the key in Red Black Trees n -> current size of map
	m["abd"] = 2;
	m["bde"] = 3;
	m.insert({"afg", 0});
	map<string, int> :: iterator it;
	
	// key is sorted 

	for(it = m.begin(); it != m.end(); it++) {
		cout << (*it).first << "\t" << (*it).second << endl;
	}

	cout << endl;

	m["bde"] = 5; //every key in map is unique. Hence value of key 
	// "bde" will be overwritten from 3 to 5.
	for(auto pr : m) {
		cout << pr.first << "\t" << pr.second << endl; //O(log(n))
	}
	//O(n * log(n)) 

	cout << endl;

	// m.find returns iterator
	it = m.find("abd"); //O(log(n))
	if(it == m.end()) cout << "No key - value pair exist" << endl;
	else cout << it->first << "\t" << it->second << endl;

	cout << endl;

	// Erasing key from map
	m.erase("abd"); //O(log(n))
	for(auto pr : m) {
		cout << pr.first << "\t" << pr.second << endl; //O(log(n))
	}

	cout << endl;

	// Erasing with the help of iterator from map
	it = m.find("abc");
	m.erase(it);
	for(auto pr : m) {
		cout << pr.first << "\t" << pr.second << endl; //O(log(n))
	}

	/*it = m.find("aaa");
	m.erase(it);*/ //SEGMENTATION FAULT 

	cout << endl;

	// Safety Check
	it = m.find("aaa");
	if(it != m.end()) {
		m.erase(it);
		for(auto pr : m) {
			cout << pr.first << "\t" << pr.second << endl; //O(log(n))
		}
	}
	else {
		cout << "Error" << endl;
	}

	cout << endl;

	m.clear();
	cout << m.size() << endl;
	for(auto pr : m) {
			cout << pr.first << "\t" << pr.second << endl; //O(log(n))
	}

	cout << endl;

	// Question Print Unique String in lexiographical order
	int n;
	cin >> n;
	map<string, int> m1;
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		m1[s] = m1[s] + 1;
	} //O(n * log(n))
	for(auto pr : m1) {
		cout << pr.first << "\t" << pr.second << endl; //O(log(n))
	} //O(n * log(n))

	cout << endl;

	// map v/s unordered maps
	// 1.Inbuilt Implementation
	// 2.Time Complexity
	// 3.Valid Key Datatype
	// Hash Table 
	unordered_map<string, int> m2;
	// m["aaa"] //O(1)
	m2["abc"] = 1; //In case of collision the average TC is O(1)
	m2["abc"] = 2;
	m2["bde"] = 3;
	m2.insert({"afg", 0});
	
	for(auto &pr : m2) {
		cout << pr.first << "\t" << pr.second << endl;
	}


	// m2.find() , m2.erase() -> O(1)

	// unordered_map <pair<int, int>, int> m5 -> Error => pair<int,int> has no in built hash function.
	// vectors, pair, sets, etc has no in built hash function
	// map<pair<int, int>, int> m5 -> No error

	cout << endl;

	// Multimap Implemenation using map
	map<int, vector<string>> m6;
	m6[1].push_back("abc");
	m6[1].push_back("def");
	for(auto &pr : m6) {
		cout << pr.first << endl;
		for(auto &it : pr.second) {
			cout << it << "\t";
		}
	}

	return 0;

}