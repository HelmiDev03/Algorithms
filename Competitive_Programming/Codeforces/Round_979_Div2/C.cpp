#include <bits/stdc++.h>
using namespace std;




void Solve() 
 {

        int length; 
        cin >> length;

        string binary_string; 
        cin >> binary_string;

        bool has_one = false; 
        for (int index = 0; index < length; index++) {
            if (binary_string[index] == '1') {
                has_one = true;
                break;
            }
        }

        
        if (has_one && (binary_string[0] == '1' || binary_string[length - 1] == '1' || binary_string.find("11") != string::npos)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        Solve();
    }

    return 0;
}

