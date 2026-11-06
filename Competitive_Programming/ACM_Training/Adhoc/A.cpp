#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 

    long long t, n, k;
    cin >> t;  
    while (t--) {
        cin >> n >> k;
        long long L = n - k + 1, R = n;

        
        long long odd_count = (R + 1) / 2 - (L / 2);
        
        
        if (odd_count % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }   
    return 0;
}
