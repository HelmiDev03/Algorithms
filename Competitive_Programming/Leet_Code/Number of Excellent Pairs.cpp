class Solution {
public:
    int setBits(int n){ // returns count of set bits(1-s) in binary representation of n 
        int res = 0;
        for(; n; n >>= 1) res += n & 1;
        return res;
    }
    
    long long countExcellentPairs(vector<int>& nums, int k) {
        int cnt[31] = {}, i, j; long long res = 0LL;
        unordered_set<int> seen;
        for(int& num : nums){
            // we must AVOID double count duplicates (for instance if we have number 13 multiple times, we should only consider setBits(13) only once)
            if(!seen.count(num)){
                cnt[setBits(num)]++; 
                seen.insert(num);
            }
        }
        for(i = 2; i < 31; i++) cnt[i] += cnt[i - 1]; // make prefix sum
        // after making prefix sum: previous cnt[i] -> cnt[i] - cnt[i - 1]
        for(i = max(1, k - 30); i < 31; i++){
            /* for each number in nums we can make a pair (num, num) by description (even if we dont have more than 1 occurence of num). so add all "same pairs" 
			   plus add all pairs made-by numbers with total i set bits (of course only do them if i + i >= k)*/
            if((i << 1) >= k) res += (cnt[i] - cnt[i - 1]) + (cnt[i] - cnt[i - 1]) * (cnt[i] - cnt[i - 1] - 1);
            j = k - i > i ? k - i : i + 1; // find first j > i such that i + j >= k
            res += (cnt[i] - cnt[i - 1]) * (cnt[30] - cnt[j - 1]) * 2; // multiply by 2 because (i, j) != (j, i) by description
        }
        return res;
        
    }
};
