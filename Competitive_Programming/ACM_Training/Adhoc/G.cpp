#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int t,n ;
    cin >>n>>t ;
    if (t!=10)
         cout << string(n, '0' + t); 
    else if (n==1 && t==10 )
         cout <<-1 ;
    else if (n==2 && t==10 )
         cout <<10 ;     
    else
          cout << string(n-2, '1') + "10";          

    return 0;
}
