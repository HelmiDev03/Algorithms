#include <bits/stdc++.h>
using namespace std;

bool canReachAll(const vector<long long>& A, long long h) {
    int N = A.size();
    vector<bool> reachable(N, false);

    for (int i = 0; i < N; ++i) {
        if (A[i] <= h) reachable[i] = true;
    }

    for (int i = 0; i < N - 1; ++i) {
        if (reachable[i] && abs(A[i + 1] - A[i]) <= h)
            reachable[i + 1] = true;
    }

    for (int i = N - 1; i > 0; --i) {
        if (reachable[i] && abs(A[i - 1] - A[i]) <= h)
            reachable[i - 1] = true;
    }

    for (bool r : reachable)
        if (!r) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int N;
        cin >> N;
        vector<long long> A(N);
        for (int i = 0; i < N; ++i) cin >> A[i];

        long long lo = 0, hi = *max_element(A.begin(), A.end());
        while (lo < hi) {
            long long mid = (lo + hi) / 2;
            if (canReachAll(A, mid))
                hi = mid;
            else
                lo = mid + 1;
        }

        cout << "Case #" << tc << ": " << lo << "\n";
    }

    return 0;
}
