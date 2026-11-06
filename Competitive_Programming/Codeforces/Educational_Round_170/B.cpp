#include <bits/stdc++.h>
using namespace std;
#define optimize_io() ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define int long long
const int MOD = 1e9 + 7;

int modularExponentiation(int base, int exponent, int mod) {
    int result = 1;

    while (exponent) {
        if (exponent % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exponent /= 2;
    }

    return result;
}

int32_t main() {
    optimize_io() ;
    int testCases;
    cin >> testCases;

    vector<int> n(testCases), k(testCases);

    for (int i = 0; i < testCases; ++i) {
        cin >> n[i];
    }

    for (int i = 0; i < testCases; ++i) {
        cin >> k[i];
    }

    for (int i = 0; i < testCases; ++i) {
        cout << modularExponentiation(2, k[i], MOD) << endl;
    }

    return 0;
}
