#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

vector<ll> v;

void Precompute() {
    for (ll i = 1; i * i <= 1000000000; ++i) {
        ll value = (i * i - 1) / 2; // Ensure the result is always an integer
        v.push_back(value);
    }
}

void Solve() {
    ll n;
    cin >> n;
    auto it = lower_bound(v.begin(), v.end(), n);
    cout << (it - v.begin()) + 1 << endl;
}

int main() {
    optimize();

    // Precompute values before test case input
    Precompute();

    ll t;
    cin >> t;

    while (t--) {
        Solve();
    }

    return 0;
}
