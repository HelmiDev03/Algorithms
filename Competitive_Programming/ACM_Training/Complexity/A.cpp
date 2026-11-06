#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fo(i, n) for (i = 0; i < n; i++)
void Solve()
{
   
    ll n;
    cin >> n;
    int q,r,qq=0;

    if (n<4) {
        cout << n /2 <<endl;
    }
    else{
    q = n /4 ;
    r = n % 4 ;
    if ( r >0) {
        qq = r / 2; 
    }
    

    cout <<q+qq<<endl;
    }
    

    
}

int main()
{
    optimize() ;
    ll t;
    cin >> t;
    while (t--)
        Solve();
}
