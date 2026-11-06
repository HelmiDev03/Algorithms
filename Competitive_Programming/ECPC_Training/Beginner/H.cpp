#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> weights(n);
        int count1 = 0, count2 = 0, total = 0;

        for (int i = 0; i < n; i++) {
            cin >> weights[i];
            if (weights[i] == 1) count1++;
            else count2++;
            total += weights[i];
        }

        if (total % 2 != 0) {
            cout << "NO" << endl;
            continue;
        }

        int halfWeight = total / 2;
        for (int i = 0; i <= count2; i++) {
            int weight_apartir_2_s = 2 * i;
            if (weight_apartir_2_s <= halfWeight) {
                int weight_be9i = halfWeight - weight_apartir_2_s;
                if (weight_be9i <= count1) {
                    cout << "YES" << endl;
                    break;
                }
            }
            if (i == count2) {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
