#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



void Solve()
{
    int  n, a ; 
    cin >>n ;
    vector<int> s ;
    vector<int> f ;
    for (int i = 0 ; i<n ; i++ ) {
            cin >>a;
            s.push_back(a); 
    }
    for (int i = 0 ; i<n ; i++ ) {
            cin >>a;
            f.push_back(a); 
    }
    cout << f[0] -s[0]<<" ";
   for (int i = 1 ; i<n ; i++ ) { 
    if (s[i]>=f[i-1]) {
        cout << f[i] -s[i]<<" ";  
    }
    else{
        cout << f[i] -f[i-1]<<" ";
    }
   }
    cout<<endl;
}

int main()
{
    optimize() ;
    ll t ; 
    cin >> t ; 
    while(t--)
        Solve();
}
