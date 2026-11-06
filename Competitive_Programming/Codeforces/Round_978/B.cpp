#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize_io()                \
    ios_base::sync_with_stdio(0);   \
    cin.tie(0);                      \
    cout.tie(0);

ll round_up_division(int64_t numerator, int64_t denominator) {
    return (numerator + denominator - 1) / denominator;
}

void execute_case() {
    ll num_elements, capacity;
    cin >> num_elements >> capacity;

    vector<int64_t> elements(num_elements);
    for (ll index = 0; index < num_elements; ++index) {
        cin >> elements[index];
    }

    ll total_sum = accumulate(elements.begin(), elements.end(), 0LL);
    ll max_value = *max_element(elements.begin(), elements.end());
    ll required_buses = max(round_up_division(total_sum, capacity), max_value);

    cout << required_buses << endl;
}

int32_t main() {
    optimize_io();
    ll test_cases;
    cin >> test_cases;
    while (test_cases--) {
        execute_case();
    }
    return 0;
}
