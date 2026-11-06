#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void Solve()
{

    ll n, q, x, y;

    cin >> n >> q;
    vector<ll> tab(n);
    for (int i = 0; i < n; i++)
        cin >> tab[i];

    sort(tab.begin(), tab.end());
    for (int i = 1; i < n; i++)
             tab[i]+=tab[i-1];

    for (int j = 0; j < q; j++)
    {
        cin >> x >> y;
        if (x==n)
        cout <<tab[n-x+y-1] <<endl;
        else
        cout <<tab[n-x+y-1] - tab[n-x-1]<<endl;
        
    }

    
}

int main()
{

    Solve();
}
