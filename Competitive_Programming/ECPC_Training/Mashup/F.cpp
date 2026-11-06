#include <bits/stdc++.h>
using namespace std;
#define ll long long
void Solve()
{

    vector<ll> v(4);
    ll a = 0;
    for (int i = 0; i < 4; i++)
    {

        cin >> v[i];
        if (i == 0)
            a = v[i];
    }

    sort(v.begin(), v.end());
    vector<ll>::iterator it = lower_bound(v.begin(), v.end(), a);

    cout << 3 - (it - v.begin()) << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        Solve();
}
