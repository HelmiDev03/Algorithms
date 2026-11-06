#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Solve() {
    ll l, r, k; 
    cin >> l >> r >> k;
    
    if (k == 1) {
        cout << r - l + 1 << endl;
    } else {
        ll max_x = r / k;
        if (l > max_x) {
            cout << 0 << endl;
        } else {
            cout << max_x - l + 1 << endl;
        }
    }
}

int main() {
    optimize();
    ll t;
    cin >> t;
    while (t--) {
        Solve();
    }
    return 0;
}
