#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s ;
    long long  i ;
    
    while (t--) {
        cin >>s ;
        int sum1 = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
        int sum2 = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');
        
        
       
        if (sum1==sum2 )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}
