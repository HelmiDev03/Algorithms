#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void Solve()
{
    int a, b;
    ll n;
    
        cin >> n;
        vector<ll> tab(n);
        vector<ll> twoend;
        for (int i = 0; i < n; i++)
            cin >> tab[i];

        sort(tab.begin(), tab.end());

        for (int i = 1; i < n; i++)
        {
            if (tab[i] % tab[0])
                twoend.pb(tab[i]);
        }

        bool ch = true;
        for (int i : twoend)
        {
            if (i % twoend[0])
            {
                ch = false;
                break;
            }
        }
        
        cout << (ch ? "YES"  : "NO") <<endl ;
    
}




int main () {
    int t ; 
    cin >> t ; 
    while(t--)
        Solve();
}
