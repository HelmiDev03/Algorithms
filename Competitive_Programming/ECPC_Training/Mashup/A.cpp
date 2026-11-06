#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void Solve()
{
    bool ch = true;
    string s ; 
    cin >>s;
    if ( s!="abc" && s!="acb" && s!="cba"&&s!="bac")
             ch=false;
        
     cout << (ch ? "YES"  : "NO") <<endl ;
    
}




int main () {
    int t ; 
    cin >> t ; 
    while(t--)
        Solve();
}
