#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int N;
        string S;
        cin >> N >> S;

        int l = 0, r = N - 1;
        string lastPlayer = "";
        bool aliceTurn = true;

        while (l <= r) {
            bool ate = false;

            if (aliceTurn) {
                int pos = -1;
                for (int i = l; i <= r; i++) {
                    if (S[i] == 'A') {
                        pos = i;
                        break;
                    }
                }
                if (pos != -1) {
                    lastPlayer = "Alice";
                    l = pos + 1;
                    ate = true;
                }
            } else {
                int pos = -1;
                for (int i = r; i >= l; i--) {
                    if (S[i] == 'B') {
                        pos = i;
                        break;
                    }
                }
                if (pos != -1) {
                    lastPlayer = "Bob";
                    r = pos - 1;
                    ate = true;
                }
            }
            aliceTurn = !aliceTurn;
            if (l > r) break;
        }

        cout << "Case #" << t << ": " << lastPlayer << "\n";
    }
}
