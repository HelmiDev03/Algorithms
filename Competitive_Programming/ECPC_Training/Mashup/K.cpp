#include <bits/stdc++.h>
using namespace std;
#define ll long long
void Solve()
{

    ll n;
    cin >> n;
    ll t[n];
    set<ll> s;
    bool check =true ;

    for (int i = 0; i < n; i++)
        cin >> t[i];

    if (t[0] == n)
        s.insert(t[0] - 1);
    else if (t[0] == 1)
        s.insert(t[0] + 1);
    else
    {
        s.insert(t[0] - 1);
        s.insert(t[0] + 1);
    }

    for (int i = 1; i < n; i++)
    {
        if (s.find(t[i]) != s.end())
        {
            if (t[i] == n)
                s.insert(t[0] - 1);
            else if (t[i] == 1)
                s.insert(t[0] + 1);
            else
            {
                s.insert(t[i] - 1);
                s.insert(t[i] + 1);
            }
        }
        else{
            check  = false; 
            break ;
        }
    }

    cout <<(check ? "YES" :  "NO")<<endl ;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        Solve();
}
