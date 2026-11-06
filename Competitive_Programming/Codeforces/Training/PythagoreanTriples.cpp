#include <bits/stdc++.h>
using namespace std;

int main() {
    int t , n ;
    long long a, b, c;
    vector<long long> cVaue;

   
    for (long long i = 3; i < 1e9; i++) {
        if (((i * i) - 1) % 2 != 0) {
            continue;
        } else {
            a = i;
            b = (i * i - 1) / 2;
            c = i * i - b;

            cVaue.push_back(c);

            if (c > 1e9) {
                break;
            }
        }
    }

    cin>>t;
    while(t--){
        cin >>n ; 
        vector<long long> ::iterator it = upper_bound(cVaue.begin() , cVaue.end() , n ) ;
        cout << it - cVaue.begin()  <<endl ;  
    }

    return 0;
}
