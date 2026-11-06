#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void Solve()
{
    cin.ignore();
    ll n, q, a, left, right;
    cin >> n >> q;

    vector<int> r(n);

    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
    }
    vector<int> test;
    map<int, int> m;

    for (int i = 0; i <n; i++)
    {
        m[r[i]] = i;
    }

    for (int i = 0; i < q; i++)
    {
        cin >> left >> right;

        if (m.find(right) != m.end() && m.find(left) != m.end())
        {
            int index  = m[right];
            vector<int> check(r.begin(), r.begin() + index +1);
            if ( check.find(index) !=check.end()) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
            
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    cout << endl;
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        Solve();
}
