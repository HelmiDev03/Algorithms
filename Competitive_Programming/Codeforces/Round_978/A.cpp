#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void Solve()
{
    int n, r;
    cin >> n >> r;

    vector<int> a(n);
    int s = 0, x = 0, y = 0, happy = 0, isar;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }

    for (int i = 0; i < n; i++) {
        int el = a[i];
        if (el % 2) {
            happy += (el - 1) / 2;
            y++;
            x += el - 1;
        } else {
            happy += el / 2;
            x += el;
        }
    }

    if (y % 2) {
        happy += (y - 1) / 2;
        happy++;
        x++;
        isar = r - happy;
        x += 2 * isar;
    } else {
        happy += y / 2;
        isar = r - happy;
        x += 2 * isar;
    }

    if (x<s)
       cout<<x<<endl;
    else
        cout <<s<<endl;   
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        Solve();
}
