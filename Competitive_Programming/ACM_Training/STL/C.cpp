#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Solve() {
    int n;
    ll l, r, ecart = 1;
    cin >> l >> r; 

    vector<int> s;
    s.push_back(l);
    int i=l;
    while(i + ecart <= r) {
        s.push_back(i + ecart);
        ecart = s[s.size()-1] - s[s.size()-2] +1 ;
        i= s[s.size()-1] ;
    }

    cout << s.size() << endl;
}

int main() {
    optimize();
    ll t; 
    cin >> t; 
    while (t--) {
        Solve();
    }
}
