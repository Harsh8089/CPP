#include <bits/stdc++.h>
using namespace std;
int main() {

	// set => map without value, collection of keys
	// Implemented using Red Black Trees
	set<string> s; //stores unique keys
	
	// set<set<int>>s;

	s.insert("abc"); //O(log(n))
	s.insert("def");

	// s.find() returns iterator
	auto it = s.find("abe"); //O(log(n))

	if(it != s.end()) cout << *it << endl;
	cout << "No key found" << endl;
	// O/P => No key found

	// Sorted key 
	for(it = s.begin(); it != s.end(); it++) {
		cout << *it << endl;
	}
	// O/P => abc
	//        def

	cout << endl;

	s.insert("abc");
	for(auto pr : s) {
		cout << pr << endl;
	}
	// O/P => abc
	//        def

	cout << endl;

	// Erasing by passing an iterator
	it = s.find("abc");
	if(it != s.end()) {
		s.erase(it);
	}

	for(auto pr : s) {
		cout << pr << "\t";
	}

	cout << endl;

	cout << endl;

	s.insert("abc");
	for(auto pr : s) {
		cout << pr << "\t";
	}

	cout << endl;

	cout << endl;

	s.erase("abc");
	for(auto pr : s) {
		cout << pr << "\t";
	}

	cout << endl;

	cout << endl;

	// unordered_set v/s set
	// 1.Inbuilt Implementation 
	// 2.Time Complexity
	// 3.Valid Key Datatype

	cout << "unordered_set" << endl;
	// Implemented using Hash Functions

		unordered_set<string> us;
		us.insert("abc"); // O(1)

		for (auto it = us.begin(); it != us.end(); ++it)
		{
		    cout << *it;
		}

		auto its = us.find("abc"); // O(1)

		if (its != us.end())
		    cout << "Key found" << endl;
		else
		    cout << "No key found" << endl;


	multiset <string> ms;
      ms.insert("abc");
      ms.insert("abc");
      ms.insert("def");

      for(auto it = ms.begin(); it != ms.end(); it++) {
        cout << *it << "\t";
      }

      cout << endl;

      // priority queue can be replaced by multiset 

      auto it = ms.find("abc");
      if(it != ms.end()) {
          ms.erase(it);
          for(auto it = ms.begin(); it != ms.end(); it++) {
            cout << *it << "\t";
          }
          cout << endl;
      }

      ms.insert("abc");
      ms.erase("abc");
      
      if(ms.size() == 0) cout << "Empty multiset" << endl;
      else {
          for(auto it = ms.begin(); it != ms.end(); it++) {
              cout << *it << "\t";
          }
          cout << endl;
      }
      return 0;

}	