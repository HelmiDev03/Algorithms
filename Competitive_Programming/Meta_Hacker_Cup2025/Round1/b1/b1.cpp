#include <bits/stdc++.h>
using namespace std;

string solve() {
    int N, A, B;
    cin >> N >> A >> B;

   
    vector<int> multipliers(2 * N);


    for (int i = 0; i < N; ++i) {
        multipliers[i] = 1;
    }


    multipliers[N] = B;
    for (int i = N + 1; i < 2 * N; ++i) {
        multipliers[i] = 1;
    }

    
    string result = "";
    for (int i = 0; i < 2 * N; ++i) {
        result += to_string(multipliers[i]);
        if (i < 2 * N - 1) {
            result += " ";
        }
    }
    return result;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
   
    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
        
        cout << "Case #" << i << ": " << solve() << endl;
    }

    return 0;
}