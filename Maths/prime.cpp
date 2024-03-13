#include <bits/stdc++.h>
using namespace std;


// What is a Prime Number ??
// 1. A number divisible by 1 and by itself ✅
// 2. What about count of factors?? - 2 (1 * itself, itself * 1) ✅

// Brute force approach to find whether a number (n) is prime or not ?
// By definition - 1
// Iterate i from 2 to n - 1 
//          if(n % i == 0) return true
// return false;
// Time Complexity = O(n)
// --------------------------------------------------------------
// By definition - 2
// Init cntOfFactorsInPairs = 0
// Iterate i from 1 to n - 1 
//          if(n % i == 0) cntOfFactorsInPairs++;
// if(cntOfFactorsInPairs == 2) return true;
// else return false;
// Time Complexity = O(n)
// -------------------------

// Optimal Approach
// Factors of 36 in pairs
// 1 * 36
// 2 * 18
// 3 * 12
// 4 * 9
// ---------------------
// 6 * 6
// ---------------------
// 9 * 4
// 12 * 3
// 18 * 2
// 36 * 1

// Iterate from 1 to sqrt of (n)
// Time Complexity = O(sqrt(n))

bool isPrime(int n) {
    int cntOfFactors = 0;
    
    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            cntOfFactors++;
            if((n / i) != i) cntOfFactors++;
        }

    }

    cout << "Count of factors: " << cntOfFactors << endl;

    if(cntOfFactors > 2) return true;

    return false;
}

int factorsSum() {

    return 0;
}


// find factors of n in a, b, c 
// where a * b * c = n and a != b != c != 1

int getFactors(int n) {
    for(int a = 2; a * a < n; a++) {
        if(n % a == 0) {
            int bc = n / a;
            for(int b = a + 1; b * b < n; b++) {
                if(bc % b == 0) {
                    int c = bc / b;
                    if(a != b && b != c) {
                        cout << a << " " << b << " " << c << endl;
                        return 1;
                    }
                }
            }
        }
    }
    return -1;
}

// ------------------------------------------------------------------

// SEIVE ALGORIHTM

int N = 1e8;
bool sieve[100000001];

bool createSieve(int k) {
    for(int i = 2; i <= N; i++) {
        sieve[i] = true;
    }

    for(int i = 2; i * i <= N; i++) {
        if(sieve[i]) {
            for(int j = i * i; j <= N; j += i) {
                sieve[j] = false;
            }
        }
    }

    for(int i = 2; i <= k; i++) {
        if(sieve[i]) cout << i << " "; 
    }
    cout << "\n";
}

int main() {
    int n = 18;
    // cin >> n;

    // int d = getFactors(n);
    // if(d == -1) cout << "No factors exists in form of a, b, c \n";

    (isPrime(n) == true)? cout << "Yes, it is a prime no.\n" : cout << "Not a prime no\n";  
    createSieve(25);

    return 0;
}
