#include <bits/stdc++.h>
using namespace std;
#define optimize_io() ios_base::sync_with_stdio(false); cin.tie(nullptr)

void Solve() {
    int n, k;
    cin >> n >> k;

    vector<int> cards(n);
    for (int i = 0; i < n; ++i) {
        cin >> cards[i];
    }

    unordered_map<int, int> freq;
    for (int card : cards) {
        freq[card]++;
    }

    // Create a sorted list of unique cards
    vector<pair<int, int>> uniqueCards(freq.begin(), freq.end());
    sort(uniqueCards.begin(), uniqueCards.end());

    int maxCards = 0;

    // Iterate over each distinct card
    for (size_t i = 0; i < uniqueCards.size(); ++i) {
        int currentCount = 0;
        int distinctCount = 0;

        // Try starting from the current card
        for (size_t j = i; j < uniqueCards.size(); ++j) {
            if (distinctCount < k) {
                currentCount += uniqueCards[j].second; // add frequency of the current card
                distinctCount++;
            } else {
                break; // can't take more distinct numbers
            }
            
            // Check for the next consecutive number
            if (j + 1 < uniqueCards.size() && uniqueCards[j + 1].first == uniqueCards[j].first + 1) {
                currentCount += uniqueCards[j + 1].second; // add frequency of the next card
                distinctCount++;
                j++; // move to the next distinct number
            }
        }

        maxCards = max(maxCards, currentCount); // update maxCards
    }

    cout << maxCards << endl; // Output the result for the test case
}

int main() {
    int t;
    cin >> t;
    optimize_io();
    while (t--) {
        Solve();
    }
    return 0;
}
