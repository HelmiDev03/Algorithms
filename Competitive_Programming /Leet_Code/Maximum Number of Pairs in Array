class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int>mp;
        int cnt=0;
        int n=nums.size();
        for(auto it:nums)mp[it]++;
        for(auto it:mp)
        {  
                cnt+=it.second/2;

        }
        return {cnt,n-2*cnt};
    }
};
