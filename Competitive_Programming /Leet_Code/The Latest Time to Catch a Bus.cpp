class Solution {
public:
    int latestTimeCatchTheBus(vector<int>& buses, vector<int>& passengers, int capacity) {
        sort(buses.begin(), buses.end());
        sort(passengers.begin(), passengers.end());
        int psz = passengers.size();
        int bsz = buses.size();
        int j = 0;
        unordered_set<int> visitedTime;
        int ans = -1;
        for(int i = 0; i < bsz; i++) {
            int count = 0;
            for(; j < psz && count < capacity && passengers[j] <= buses[i]; j++) {
                if(visitedTime.count(passengers[j] - 1) == 0) {
                    ans = passengers[j] - 1;
                }
                visitedTime.insert(passengers[j]);
                count++;
            }
            if(count < capacity && visitedTime.count(buses[i]) == 0) {
                ans = buses[i];
            }
            // cout << buses[i] << " - " << count << " - " << capacity << " ans = " << ans << endl;
        }
        return ans;
    }
};
