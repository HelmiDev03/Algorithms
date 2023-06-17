class Solution:
    def maxSubArray(self, nums: List[int]) -> int :
        maxtab=[]
        i=0
        for i in range(0,len(nums)):
            sum=nums[i]
            maxtabi=[]
            maxtabi.append(sum)
            j=i+1
            while j<len(nums) :
                sum+=nums[j]
                maxtabi.append(sum)
                j+=1     
            maxtab.append((max(maxtabi)))    
        return max(maxtab)     
