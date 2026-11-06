#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize_io() ios_base::sync_with_stdio(false); cin.tie(nullptr)

void execute_case() {
    int n;
    cin >> n;
    string row1, row2;
    cin >> row1 >> row2;

    int maxVotes = 0;

    for (int i = 0; i < n; i += 3) {
        int aCount = 0;

        for (int j = 0; j < 3; ++j) {
            aCount += (row1[i + j] == 'A') + (row2[i + j] == 'A');
        }

        if (aCount >= 2) {
            maxVotes++;
        }
    }

    cout << maxVotes << endl;
}

int main() {
    optimize_io();
    ll test_cases;
    cin >> test_cases;

    while (test_cases--) {
        execute_case();
    }

    return 0;
}
