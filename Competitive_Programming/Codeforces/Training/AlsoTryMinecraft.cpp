#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m, s, t;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> l(n - 1);
    vector<ll> r(n - 1);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++)
        l[i] = max(static_cast<ll>(0), a[i] - a[i + 1]);
        
    for (int i = 1; i < n-1; i++)
        l[i] += l[i - 1];

    for (int i = n - 1; i >= 1; i--)
        r[i - 1] = max(static_cast<ll>(0), a[i] - a[i - 1]);

    for (int i = n - 3; i >= 0; i--)
        r[i] += r[i + 1];

    for (int i = 0; i < m; i++)
    {
        cin >> s >> t;
        if (s < t)
        {
            if (s > 1)
                cout << l[t - 2] - l[s - 2] << endl;
            else
                cout << l[t - 2] << endl;
        }
        else
        {

            if (s == n)
                cout << r[t - 1] << endl;
            else
                cout << r[t - 1] - r[s - 1] << endl;
        }
    }

    return 0;
}
