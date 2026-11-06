#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    int minn = 101 ,a;
    for (int i = 0 ; i<n ; i++) {
        cin >>a ;
        minn = min(minn , a);
    }

    cout << minn -1 <<endl;
        

    return 0;
}
