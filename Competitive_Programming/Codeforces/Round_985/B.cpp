#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void Solve() {
   

    int length;
    cin >> length;
    string s, r;
    cin >> s >> r;
    vector<char> stack_chars;
    int p = 0;
    for (char c : s)
    {
        stack_chars.push_back(c);
        while (stack_chars.size() >= 2 && stack_chars[stack_chars.size() - 2] != stack_chars[stack_chars.size() - 1] && p < r.size())
        {
            char replacement = r[p];
            stack_chars.pop_back();
            stack_chars.pop_back();
            stack_chars.push_back(replacement);
            p++;
        }
    }

    if (p == length - 1 && stack_chars.size() == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}
