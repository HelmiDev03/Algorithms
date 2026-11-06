#include <bits/stdc++.h>
using namespace std;

bool check(long long takeCount, int nComp, int nTypes, long long maxStock,
           const vector<int>& scoreSorted, const vector<int>& levelList) {
    
    if (takeCount == 0) {
        return true;
    }

    int baseLevel = levelList[nComp - takeCount];
    int groupRange = levelList[nComp - 1] - baseLevel + 1;

    if (nTypes < groupRange) {
        return false;
    }
    
    vector<long long> freq(groupRange + 1, 0);
    for (int i = 0; i < takeCount; ++i) {
        int idx = nComp - takeCount + i;
        int relLevel = levelList[idx] - baseLevel + 1;
        freq[relLevel]++;
    }

    vector<long long> pref(groupRange + 1, 0);
    pref[groupRange] = freq[groupRange];
    for (int j = groupRange - 1; j >= 1; --j) {
        pref[j] = pref[j + 1] + freq[j];
    }

    long long need = 0;
    for (int j = 1; j <= groupRange; ++j) {
        need += pref[j];
    }
    
    return need <= maxStock;
}

long long solve() {
    int nComp, nTypes;
    cin >> nComp >> nTypes;

    vector<int> score(nComp);
    for (int i = 0; i < nComp; ++i) {
        cin >> score[i];
    }

    vector<long long> stock(nTypes);
    long long maxStock = 0;
    for (int i = 0; i < nTypes; ++i) {
        cin >> stock[i];
        maxStock += stock[i];
    }

    vector<int> scoreSorted = score;
    sort(scoreSorted.begin(), scoreSorted.end());

    vector<int> levelList(nComp);
    vector<long long> candidates;
    candidates.push_back(0);

    if (nComp > 0) {
        levelList[0] = 1;
        candidates.push_back(nComp);
        
        for (int i = 1; i < nComp; ++i) {
            if (scoreSorted[i] > scoreSorted[i - 1]) {
                levelList[i] = levelList[i - 1] + 1;
                candidates.push_back(nComp - i);
            } else {
                levelList[i] = levelList[i - 1];
            }
        }
    }
    
    sort(candidates.begin(), candidates.end());
    candidates.erase(unique(candidates.begin(), candidates.end()), candidates.end());

    int left = 0, right = candidates.size() - 1;
    long long best = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long toTest = candidates[mid];
        
        if (check(toTest, nComp, nTypes, maxStock, scoreSorted, levelList)) {
            best = toTest;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return best;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T;
    cin >> T;
    
    for (int tc = 1; tc <= T; ++tc) {
        long long result = solve();
        cout << "Case #" << tc << ": " << result << "\n";
    }

    return 0;
}
