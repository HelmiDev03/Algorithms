#include <bits/stdc++.h>
#define ll long long
#define optimize_io() ios_base::sync_with_stdio(false); cin.tie(nullptr)
using namespace std;

void execute_case() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    
    for (ll j = 0; j < n; j++) {
        cin >> a[j];
    }

    ll current_length = n;

    while (true) {
        ll candidate = -1;

        // Loop through to find the maximum valid index satisfying the condition
        for (ll i = 2; i <= current_length; i++) { // Start from 2 as i > 1
            if (a[i - 1] == current_length + 1 - i) {
                candidate = max(candidate, i);
            }
        }

        // If no valid candidate found, break
        if (candidate == -1) {
            break;
        }

        // Update current_length based on the found candidate
        current_length += (candidate - 1);
    }

    cout << current_length << endl;
}

int main() {
    optimize_io();
    int t;
    cin >> t;

    while (t--) {
        execute_case();
    }

    return 0;
}
