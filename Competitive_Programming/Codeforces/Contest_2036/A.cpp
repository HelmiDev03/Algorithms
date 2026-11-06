#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



void Solve()
{
    int  n ; 
    cin >> n ;
    vector<int> a(n) ;
    for(int &x : a) cin >> x ;

    for (int i = 0; i < n-1; i++)
    {
        if (abs(a[i] - a[i+1]) !=7 && abs(a[i] - a[i+1]) != 5)
        {
            cout << "NO" << endl;
            
            return;
        }
    }
    cout << "YES" << endl;
    
}

int main()
{
    optimize() ;
    ll t ; 
    cin >> t ; 
    while(t--)
        Solve();
}
