#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    

    int t;
    cin >> t;
    int caseNo = 1;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int maxDiff = 0;
        for (int i = 0; i  < n-1; i++) {
            maxDiff = max(maxDiff, abs(a[i] - a[i+1]));
        }

        cout << "Case #" << caseNo++ << ": " << maxDiff << "\n";
    }

    return 0;
}
