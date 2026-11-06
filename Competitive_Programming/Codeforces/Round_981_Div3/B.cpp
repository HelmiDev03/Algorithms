#include <bits/stdc++.h>
#define ll long long
#define optimize_io() ios_base::sync_with_stdio(false); cin.tie(nullptr)
using namespace std;

int MAGIC(vector<vector<int>> matrix, int n) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] < 0) {
                
                int add = -matrix[i][j];
                count += add;

                
                for (int k = 0; k < n; ++k) {
                    if (i + k < n && j + k < n) {
                        matrix[i + k][j + k] += add;
                    }
                }
            }
        }
    }

    return count;
}

void execute_case() {
    int n;
    cin >> n;  
    vector<vector<int>> matrix(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];  
        }
    }

    cout << MAGIC(matrix, n) << endl; 
}

int main() {
    optimize_io();
    ll test_cases;
    cin >> test_cases;

    while (test_cases--) {
        execute_case();
    }

    return 0;
}
