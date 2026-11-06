#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Structure to hold the operation output
struct Operation {
    vector<int> A;
    vector<int> B;
};

// Helper to get indices of a specific character in a range (1-based index)
vector<int> get_indices(const string& s, int start_idx_1based, int end_idx_1based, char val) {
    vector<int> indices;
    for (int i = start_idx_1based; i <= end_idx_1based; ++i) {
        if (s[i - 1] == val) { 
            indices.push_back(i);
        }
    }
    return indices;
}

void solve(int t_case) {
    int N;
    if (!(cin >> N)) return;
    string s;
    cin >> s;

    // Determine target zeros
    int Z = 0;
    for (char c : s) Z += (c == '0');

    vector<Operation> ops;

    // Loop until sorted
    while (true) {
        vector<int> L1 = get_indices(s, 1, Z, '1');         // Incorrect 1s on left
        vector<int> R0 = get_indices(s, Z + 1, 2 * N, '0'); // Incorrect 0s on right
        
        // Good elements for fillers
        vector<int> L0 = get_indices(s, 1, Z, '0');
        vector<int> R1 = get_indices(s, Z + 1, 2 * N, '1');

        int k = L1.size(); 
        if (k == 0) break; // Sorted

        vector<int> A, B;
        vector<bool> used(2 * N + 1, false);
        auto mark = [&](int x) { used[x] = true; };

        // Parity Logic
        bool parity_even = (L0.size() % 2 == 0);

        if (parity_even) {
            // Easy case: fix all k errors
            for (int i = 0; i < k; ++i) {
                A.push_back(L1[i]);
                B.push_back(R0[i]);
                mark(L1[i]); mark(R0[i]);
            }
        } else {
            // Hard case: Parity mismatch
            if (k > 1) {
                // Fix k errors, break 1 good pair
                for (int i = 0; i < k; ++i) {
                    A.push_back(L1[i]);
                    B.push_back(R0[i]);
                    mark(L1[i]); mark(R0[i]);
                }
                A.push_back(L0[0]); 
                B.push_back(R1[0]);
                mark(L0[0]); mark(R1[0]);
            } else {
                // k = 1. Cannot fix without breaking parity first.
                // Break 1 pair (L0, R1)
                A.push_back(L0[0]);
                B.push_back(R1[0]);
                mark(L0[0]); mark(R1[0]);

                // Handle the single error pair neutrally (don't fix yet)
                int bad_left = L1[0];
                int bad_right = R0[0];
                
                if (L0.size() >= 2) {
                     A.push_back(bad_right); B.push_back(L0[1]); // Swap 0-0
                     mark(bad_right); mark(L0[1]);

                     A.push_back(bad_left); B.push_back(R1[1]); // Swap 1-1
                     mark(bad_left); mark(R1[1]);
                } else {
                    // Edge case usually N=3
                    A.push_back(bad_right); B.push_back(R1[1]); // Swap 0-1
                    mark(bad_right); mark(R1[1]);
                    
                    A.push_back(bad_left); B.push_back(R1[2]); // Swap 1-1
                    mark(bad_left); mark(R1[2]);
                }
            }
        }

        // Fill remaining N spots with neutral pairs
        vector<int> pool0, pool1;
        for (int i = 1; i <= 2 * N; ++i) {
            if (!used[i]) {
                if (s[i-1] == '0') pool0.push_back(i);
                else pool1.push_back(i);
            }
        }

        while (pool0.size() >= 2) {
            A.push_back(pool0.back()); pool0.pop_back();
            B.push_back(pool0.back()); pool0.pop_back();
        }
        while (pool1.size() >= 2) {
            A.push_back(pool1.back()); pool1.pop_back();
            B.push_back(pool1.back()); pool1.pop_back();
        }
        if (!pool0.empty() && !pool1.empty()) {
            A.push_back(pool0.back());
            B.push_back(pool1.back());
        }

        // Apply Swaps
        for (size_t i = 0; i < A.size(); ++i) {
            swap(s[A[i]-1], s[B[i]-1]);
        }
        ops.push_back({A, B});
    }

    // Output
    if (ops.size() > 10 * N) {
        cout << "Case #" << t_case << ": -1" << endl;
    } else {
        cout << "Case #" << t_case << ": " << ops.size() << endl;
        for (const auto& op : ops) {
            for (size_t i = 0; i < op.A.size(); ++i) cout << op.A[i] << (i == op.A.size() - 1 ? "" : " ");
            cout << endl;
            for (size_t i = 0; i < op.B.size(); ++i) cout << op.B[i] << (i == op.B.size() - 1 ? "" : " ");
            cout << endl;
        }
    }
}

int main() {
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     freopen("input.txt", "r", stdin);
    // output.txt will be created/overwritten
    freopen("output.txt", "w", stdout);

    int T;
    if (cin >> T) {
        for (int i = 1; i <= T; ++i) {
            solve(i);
        }
    }
    return 0;
}