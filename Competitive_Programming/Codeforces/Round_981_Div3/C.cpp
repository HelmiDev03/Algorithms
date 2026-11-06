#include <bits/stdc++.h> 
#define ll long long
#define optimize_io() ios_base::sync_with_stdio(false); cin.tie(nullptr)
using namespace std;

void execute_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<bool> visited(n, false);
    int ans = 0;
    
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;
        
        int j = i;
        int cycle_length = 0;
        
        // Count the length of the cycle
        while (!visited[j]) {
            visited[j] = true;
            j = arr[j] - 1; // moving to the next index
            cycle_length++;
        }
        
        // Calculate swaps needed for this cycle
        if (cycle_length > 1) {
            ans += (cycle_length / 2); // pairs can be formed
        }
    }
    
    cout << ans << endl;
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
