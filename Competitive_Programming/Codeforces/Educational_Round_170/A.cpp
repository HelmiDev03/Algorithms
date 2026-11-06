#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize_io() ios_base::sync_with_stdio(false); cin.tie(nullptr)

void execute_case() {
    string s, t;
    cin >> s >> t;

    ll common = 0;
    while (common < s.length() && common < t.length() &&
           s[common] == t[common]) {
        common++;
    }

    ll o1 = s.length() + t.length(); 
    ll o2 = common + 1 + (s.length() - common) + (t.length() - common); 

    cout << min(o1, o2) << '\n';
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
