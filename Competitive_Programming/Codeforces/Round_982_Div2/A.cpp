#include <bits/stdc++.h>
#define ll long long
#define optimize_io() ios_base::sync_with_stdio(false); cin.tie(nullptr)
using namespace std;

void execute_case() {
    int n;
    cin >> n;
    
    ll totalspace = 0;
    int maxw = 0;
    int maxh = 0;
    
    for (int i = 0; i < n; i++) {
        int w, h;
        cin >> w >> h;
        totalspace += (ll)w * h;  
        maxw = max(maxw, w);  
        maxh = max(maxh, h);  
    }

    
    ll perimeter = 2 * (maxw + maxh);
    cout << perimeter << endl;
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
