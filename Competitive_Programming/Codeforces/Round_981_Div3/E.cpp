#include <bits/stdc++.h> 
#define ll long long
#define optimize_io() ios_base::sync_with_stdio(false); cin.tie(nullptr)
using namespace std;


void execute_case() {
    int n ;
    cin >>n;
    bool AlreadyVisited[n];
    memset(AlreadyVisited, false, sizeof(AlreadyVisited));
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int response =0 ;
    int y= -55 ;
    for (int i = 0; i < n; i++) {
        if (AlreadyVisited[i]) continue;
        y=i;
        int duty =0;
        while (!AlreadyVisited[y]) {
            AlreadyVisited[y] = true;
            y = arr[y] - 1;
            duty++;
        }
        response+=(duty-1)/2 ;
    }


    cout << response << endl;
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
