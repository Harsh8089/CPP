#include <bits/stdc++.h>
#define mod7 1000000007
#define endl "\n"

using namespace std;

// Binary Exponentiation 
// even pow: a^pow = f(a, pow/2) * f (a, pow/2)
// odd pow: a^pow =  a * f(a, pow/2) * f (a, pow/2)

// Example:
// 2 ^ 8 = 2 ^ 4 * 2 ^ 4
// 2 ^ 4 = 2 ^ 2 * 2 ^ 2
// 2 ^ 2 = 2 ^ 1 * 2 ^ 1
// 2 ^ 1 = 2 ^ 1 * 2 ^ 0 * 2 ^ 0

// ---------------------------------

// 2 ^ 15 = 2 ^ 1 * 2 ^ 7 * 2 ^ 7

// TC- O(log(N))

// Matrix Exponentiation:
vector<vector<int>> solve(vector<vector<int>> matrix1, int power) {

    if(power == 0) {
        vector<vector<int>> ans(matrix1.size(), vector<int> (matrix1.size(), 0));
        for(int i = 0; i < matrix1.size(); i++) {
            ans[i][i] = 1;
        }
        return ans;
    }

    vector<vector<int>> matrix2 = solve(matrix1, power / 2);
    vector<vector<int>> matrix3 = matrix2;
    vector<vector<int>> res(matrix2.size(), vector<int> (matrix2.size(), 0));

    int size = matrix2.size();

    for(int i = 0; i < size; i++) {
        for(int r = 0; r < size; r++) {
            for(int c = 0; c < size; c++) {
                res[i][r] += matrix2[i][c] * matrix3[c][r];
            }
        }
    }

    vector<vector<int>> ans(matrix1.size(), vector<int> (matrix1.size(), 0));

    if(power & 1) {
        for(int i = 0; i < size; i++) {
            for(int r = 0; r < size; r++) {
                for(int c = 0; c < size; c++) {
                    ans[i][r] += matrix1[i][c] * res[c][r];
                }
            }
        }
    }
    else ans = res;

    return ans;
}

int main() {
    int power = 3;

    vector<vector<int>> matrix = {{1, 1}, {1, 0}};
    vector<vector<int>> ans = solve(matrix, power);
    

    cout << "Matrix Multiplication Result:\n";

    for(auto &rows : ans) {
        for(auto &col : rows) {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}

// {{Fn+1, Fn}, {Fn, Fn-1}}