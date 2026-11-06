#include <bits/stdc++.h>
#define ll long long
#define optimize_io() ios_base::sync_with_stdio(false); cin.tie(nullptr)
using namespace std;

int HowMuchBeautifulSegments(vector<ll> nums) {
    int count = 0;
    ll cumsum = 0;
    unordered_map<ll, int> sumInd;

    for (size_t i = 0; i < nums.size(); ++i) {
        cumsum += nums[i];

        if (cumsum == 0) {
            count++;
            cumsum = 0;  
            sumInd.clear();   
        } else if (sumInd.count(cumsum)) {
            
            cumsum = 0;
            count++;
            sumInd.clear();  
        } else {
            
            sumInd[cumsum] = i;
        }
    }

    return count;
}
void execute_case() {
    ll n ;
    ll x;
    vector<ll> arr ;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
    }

    cout << HowMuchBeautifulSegments(arr) << endl;
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
