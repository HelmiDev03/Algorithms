class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        map<long long int, long long int> mp;
        for(int i = 0; i < n; i++) mp[abs(nums1[i] - nums2[i])]++;
        long long int k = k1 + k2;
        for(auto i = mp.rbegin(); i != mp.rend() && k > 0; i++){
            int mn = min(i->second, k);
            i->second -= mn;
            k -= mn;
            if(i->first == 0) break;
            mp[i->first - 1] += mn;
        }
        long long int ans = 0;
        for(auto i = mp.begin(); i != mp.end(); i++){
            if(i->second) ans += i->first*i->first*i->second;
        }
        return ans;
    }
};
