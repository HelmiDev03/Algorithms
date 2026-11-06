#include <bits/stdc++.h>
#define ll long long
#define optimize_io() ios_base::sync_with_stdio(false); cin.tie(nullptr)
using namespace std;

void execute_case() {
    int n;
 
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Dynamic programming array to find the length of the longest non-increasing subsequence
    vector<int> dp(n, 1);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] >= a[i]) { // Non-increasing condition
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    int lnis_length = *max_element(dp.begin(), dp.end()); // Get the maximum length
    int removals = n - lnis_length;  // Number of removals to achieve vulnerability
    cout << removals << "\n";
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
