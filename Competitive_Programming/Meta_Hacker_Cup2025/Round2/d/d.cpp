#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int K;
int dp[2030][30][2][2]; // pos, prefix_sum_mod_K, tight, started
bool has_valid_substring[2030][30][2][2];
string s;

pair<int, bool> solve(int pos, int prefix_sum, int tight, int started) {
    if (pos == s.length()) {
        return make_pair(started, false);
    }
    
    if (dp[pos][prefix_sum][tight][started] != -1) {
        return make_pair(dp[pos][prefix_sum][tight][started], has_valid_substring[pos][prefix_sum][tight][started]);
    }
    
    int limit = tight ? (s[pos] - '0') : 9;
    long long count = 0;
    bool found_valid = false;
    
    for (int digit = 0; digit <= limit; digit++) {
        int new_tight = tight && (digit == limit);
        int new_started = started || (digit > 0);
        int new_prefix_sum = new_started ? (prefix_sum + digit) % K : 0;
        
        pair<int,bool> sub = solve(pos + 1, new_prefix_sum, new_tight, new_started);
        int sub_count = sub.first;
        bool sub_valid = sub.second;
        
        bool current_valid = sub_valid;
        if (new_started && new_prefix_sum == 0) {
            current_valid = true;
        }
        
        if (!current_valid) {
            count = (count + sub_count) % MOD;
        }
        
        if (current_valid) {
            found_valid = true;
        }
    }
    
    dp[pos][prefix_sum][tight][started] = count;
    has_valid_substring[pos][prefix_sum][tight][started] = found_valid;
    return make_pair(count, found_valid);
}

int countNonKWeak(const string& n) {
    s = n;
    memset(dp, -1, sizeof(dp));
    memset(has_valid_substring, false, sizeof(has_valid_substring));
    return solve(0, 0, 1, 0).first;
}

string subtractOne(string n) {
    int i = n.length() - 1;
    while (i >= 0 && n[i] == '0') {
        n[i] = '9';
        i--;
    }
    if (i >= 0) {
        n[i]--;
    }
    
    // Remove leading zeros
    size_t start = n.find_first_not_of('0');
    if (start == string::npos) return "0";
    return n.substr(start);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int T;
    cin >> T;
    
    for (int t = 1; t <= T; t++) {
        string L, R;
        cin >> L >> R >> K;
        
        int totalR = 0, totalL = 0;
        
        // Calculate total numbers from 1 to R
        s = R;
        memset(dp, -1, sizeof(dp));
        function<int(int, int, int)> countTotal = [&](int pos, int tight, int started) -> int {
            if (pos == s.length()) return started;
            if (!tight && started && dp[pos][0][0][1] != -1) return dp[pos][0][0][1];
            
            int limit = tight ? (s[pos] - '0') : 9;
            int res = 0;
            for (int d = 0; d <= limit; d++) {
                res = (res + countTotal(pos + 1, tight && (d == limit), started || (d > 0))) % MOD;
            }
            if (!tight && started) dp[pos][0][0][1] = res;
            return res;
        };
        
        totalR = countTotal(0, 1, 0);
        
        string L_minus_1 = subtractOne(L);
        if (L_minus_1 != "0") {
            s = L_minus_1;
            memset(dp, -1, sizeof(dp));
            totalL = countTotal(0, 1, 0);
        }
        
        int nonKWeakR = countNonKWeak(R);
        int nonKWeakL = (L_minus_1 != "0") ? countNonKWeak(L_minus_1) : 0;
        
        int totalInRange = (totalR - totalL + MOD) % MOD;
        int nonKWeakInRange = (nonKWeakR - nonKWeakL + MOD) % MOD;
        int result = (totalInRange - nonKWeakInRange + MOD) % MOD;
        
        cout << "Case #" << t << ": " << result << "\n";
    }
    
    return 0;
}
