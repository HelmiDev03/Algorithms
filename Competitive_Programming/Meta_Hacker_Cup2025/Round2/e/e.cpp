#include <bits/stdc++.h>
using namespace std;


void solve(int case_num) {
    long long N;
    long long M;
    cin >> N >> M;
    vector<long long> A(N);
    vector<long long> C(N);
    long long current_sum = 0;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        current_sum += A[i];
        C[i] = current_sum;
    }

  
    int best_k = 0;
    long long max_num = C[0];
    long long max_den = 1;

    for (int i = 1; i < N; ++i) {
        long long current_num = C[i];
        long long current_den = i + 1;
        if (current_num * max_den > max_num * current_den) {
            max_num = current_num;
            max_den = current_den;
            best_k = i;
        }
    }

    long long cost_k = best_k + 1;
    long long value_k = C[best_k];

    
    long long S_pure = (M + value_k - 1) / value_k * cost_k;
    long long min_S = S_pure;
    
   
    long long B = N * cost_k;
    if (B > 1000000) B = 1000000; 

    
    vector<long long> dp(B + 1, -1);
    dp[0] = 0;

    for (int j = 0; j < N; ++j) {
        if (j == best_k) continue; 
        long long cost_j = j + 1;
        long long value_j = C[j];
        for (long long s = cost_j; s <= B; ++s) {
            if (dp[s - cost_j] != -1) {
                dp[s] = max(dp[s], dp[s - cost_j] + value_j);
            }
        }
    }

   
    vector<long long> d_optimal(N, 0);

  
    d_optimal[best_k] = (M + value_k - 1) / value_k;

    long long s_optimal = -1; 

   
    for (long long s = 0; s <= B; ++s) {
        if (dp[s] == -1) continue;

        long long M_rem = M - dp[s];
        long long S_total;

        if (M_rem <= 0) {
            S_total = s; 
        } else {
            long long d_k_needed = (M_rem + value_k - 1) / value_k;
            S_total = s + d_k_needed * cost_k;
        }

        if (S_total < min_S) {
            min_S = S_total;
            s_optimal = s; 
        }
    }

   
    if (s_optimal != -1) {
        
        fill(d_optimal.begin(), d_optimal.end(), 0);
        
        
        long long M_rem = M - dp[s_optimal];
        if (M_rem > 0) {
            d_optimal[best_k] = (M_rem + value_k - 1) / value_k;
        }

        
        long long s = s_optimal;
       
        vector<long long> temp_dp(B + 1, -1);
        temp_dp[0] = 0;
        vector<int> parent(B + 1, -1);
        
        for (int j = 0; j < N; ++j) {
            if (j == best_k) continue;
            long long cost_j = j + 1;
            long long value_j = C[j];
            for (long long s_curr = cost_j; s_curr <= s; ++s_curr) {
                if (temp_dp[s_curr - cost_j] != -1) {
                    if (temp_dp[s_curr - cost_j] + value_j > temp_dp[s_curr]) {
                        temp_dp[s_curr] = temp_dp[s_curr - cost_j] + value_j;
                        parent[s_curr] = j;
                    }
                }
            }
        }
        
       
        while (s > 0) {
            bool found = false;
            for (int j = N - 1; j >= 0; --j) {
                if (j == best_k) continue;
                long long cost_j = j + 1;
                long long value_j = C[j];
                if (s >= cost_j && dp[s - cost_j] != -1 && dp[s] == dp[s - cost_j] + value_j) {
                    d_optimal[j]++;
                    s -= cost_j;
                    found = true;
                    break;
                }
            }
            if (!found) {
               
                break;
            }
        }
    }

   
    vector<long long> x(N);
    long long running_sum_d = 0;
    for (int i = N - 1; i >= 0; --i) {
        running_sum_d += d_optimal[i];
        x[i] = running_sum_d;
    }

    
    cout << "Case #" << case_num << ": " << min_S << "\n";
    for (int i = 0; i < N; ++i) {
        cout << x[i] << (i == N - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
        solve(i);
    }

    return 0;
}