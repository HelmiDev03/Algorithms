#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 

    long long n, t;
    cin >> t;  
    while (t--) {
        long long sn = 0, sp = 0;
        cin >> n;
        vector<long long> arr(2 * n - 1); 
        
       
        for (long long i = 0; i < 2 * n - 1; i++) 
            cin >> arr[i];
        
       
        for (long long i = 0; i < 2 * n - 1; i++) {
            if (arr[i] < 0)
                sn += arr[i]; 
            else
                sp += arr[i]; 
        }

    
        if (sp > abs(sn))    
            cout << - (sp - abs(sn)) << endl; 
        else 
            cout << abs(sn) - sp << endl; 
    }     
    return 0;
}
