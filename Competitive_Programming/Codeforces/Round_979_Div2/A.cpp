#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize_io() ios_base::sync_with_stdio(false); cin.tie(nullptr)

void execute_case() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int>::iterator ma , mi;


    for (int i = 0; i < n; i ++) {
        cin >>a[i];

    }
    ma =  max_element(a.begin(), a.end()) ;
    mi =  min_element(a.begin(), a.end()) ;

    cout << (n-1) * (*ma - *mi)<< endl;
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
