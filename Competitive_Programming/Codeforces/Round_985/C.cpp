#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void Solve() {

    

    
        int n;
        cin >> n;
        vector<int> sequence(n);
        for (auto &x : sequence)
            cin >> x;

        ll not_skipping = 0;
        ll skip_initiated = LLONG_MIN;
        ll skipped_values = LLONG_MIN;

        for (int i = 0; i < n; i++)
        {
            int current_value = sequence[i];
            ll temp_not_skipping;

            if (current_value > not_skipping)
                temp_not_skipping = not_skipping + 1;
            else if (current_value == not_skipping)
                temp_not_skipping = not_skipping;
            else
                temp_not_skipping = not_skipping - 1;

            ll temp_skip_initiated = max(skip_initiated, (ll)not_skipping);
            ll temp_skipped1 = LLONG_MIN;

            if (skip_initiated != LLONG_MIN)
            {
                if (current_value > skip_initiated)
                    temp_skipped1 = skip_initiated + 1;
                else if (current_value == skip_initiated)
                    temp_skipped1 = skip_initiated;
                else
                    temp_skipped1 = skip_initiated - 1;
            }

            ll temp_skipped2 = LLONG_MIN;
            if (skipped_values != LLONG_MIN)
            {
                if (current_value > skipped_values)
                    temp_skipped2 = skipped_values + 1;
                else if (current_value == skipped_values)
                    temp_skipped2 = skipped_values;
                else
                    temp_skipped2 = skipped_values - 1;
            }

            ll temp_skipped = max(temp_skipped1, temp_skipped2);
            not_skipping = temp_not_skipping;
            skip_initiated = temp_skip_initiated;
            skipped_values = temp_skipped;
        }

        skipped_values = max(skipped_values, skip_initiated);
        cout << skipped_values << "\n";
        cout << endl;
    

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
