#include <bits/stdc++.h>
using namespace std;

void printVector(vector<float> v) {
	cout << "Size of vector : " << v.size() << endl;
	cout << "Capacity of vector : " << v.capacity() << endl;
	for(int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
}

vector<float> *printReference(vector<float> &v) {
	return &v;
}

void printVect(vector<int> &v) {
	for(int i = 0; i < v.size(); i++) {
		cout << v[i] << "\t";
	}
}
int main() {
	vector<float> v;
	float d;
	for(int i = 0; i < 4; i++) {
		cin >> d;
		v.push_back(d); //O(1)
		printVector(v);
	}
	// O/P => 
	// Size of vector : 1
	// Capacity of vector : 1
	// 1.2
	// Size of vector : 2
	// Capacity of vector : 2
	// 1.2
	// 1.5
	// Size of vector : 3
	// Capacity of vector : 3
	// 1.2
	// 1.5
	// 2.64
	// Size of vector : 4
	// Capacity of vector : 4
	// 1.2
	// 1.5
	// 2.64
	// 30.215

	//------------------------------------------------------------------------------------------------------------------------------------------
	// vector<float> v3 = {1,2};

	// Defining the size of vector and initializing with -1
	vector<float> v1(3, -1);
	printVector(v1);
	// O/P => 
	// Size of vector : 3
	// Capacity of vector : 3
	// -1
	// -1
	// -1

	//------------------------------------------------------------------------------------------------------------------------------------------

	// Copying an array;
	v1 = v; //O(N) time complexity
	printVector(v1);
	// O/P => 
	// Size of vector : 4
	// Capacity of vector : 4
	// 1.2
	// 1.5
	// 2.64
	// 30.215

	//------------------------------------------------------------------------------------------------------------------------------------------
	
	cout << "Address of v " << &v << "\t" << "Address of v1 " << &v1 << endl; 
	//Address of v 0x61fed4	Address of v1 0x61fec4

	//------------------------------------------------------------------------------------------------------------------------------------------

	// Passing a reference
	cout << "Address of v in main() : " << &v << "\t" << "Address of v in printReference() : " << printReference(v) << endl;
	//Address of v in main() : 0x61fed4	Address of v in printReference() : 0x61fed4

	//------------------------------------------------------------------------------------------------------------------------------------------

	// Vector of Pair
	// vector<pair <int, char>> vect = {{1,'a'}, {2, 'b'}, {3,'c'}};
	vector<pair<int,int>> vect(2);
	for(int i = 0; i < 2; ++i) {
		int x, y;
		cin >> x >> y;
		// vect.push_back({x, y}); 
		vect.push_back(make_pair(x, y));
	}
	//vect = {{1 4},{2 3}}
	for(int i = 0; i < vect.size(); ++i) {
		cout << vect[i].first << "\t" << vect[i].second << endl;
	}
	// O/P => 
	// 0	0
	// 0	0
	// 1	4
	// 2	3
	// To avoid {0,0}, {0,0} don't define size of vect while defining it 
	
	//------------------------------------------------------------------------------------------------------------------------------------------

	// Creating 3 vectors
	cout << "Creating 3 vectors" << endl;
	vector<int> vo[3];
	for(int i = 0; i < 3; i++) {
		int n;
		cin >> n;
		// Fixed No. of rows and columns
		for(int j = 0; j < n; j++) {
			int d;
			cin >> d;
			vo[i].push_back(d);
		}
	}

	for(int i = 0; i < 3; i++) {
		printVect(vo[i]);
		cout << endl;
	}
	// O/P => 
	// Creating 3 vectors
	// 1	2	
	// 1	
	// 1	2	3	

	//------------------------------------------------------------------------------------------------------------------------------------------
	
	cout << "vo[0][1] : " << vo[0][1] << endl;
	// O/P => 
	// vo[0][1] : 2

	//------------------------------------------------------------------------------------------------------------------------------------------

	// Vectors of Vectors
	// Dynamic rows and columns
	cout << "Vectors of Vectors" << endl;
	vector<vector<int>> v4;
	for(int i = 0; i < 3; i++) {
		vector<int> temp;
		int n;
		cin >> n;
		for(int j = 0; j < n; j++) {
			int d;
			cin >> d;
			temp.push_back(d);
		}
		v4.push_back(temp);
	}
	// I/P => 
	// 3
	// 1 2 3
	// 1
	// 1
	// 2 
	// 1 2
	
	v4.pop_back();
	
	for(int i = 0; i < v4.size(); i++) {
		printVect(v4[i]);
		cout << endl;
	}
	// O/P => 
	// Vectors of Vectors
	// 1	2	3	
	// 1	

	//------------------------------------------------------------------------------------------------------------------------------------------

	return 0;
	
}
