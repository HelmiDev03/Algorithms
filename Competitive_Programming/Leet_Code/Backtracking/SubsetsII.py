class Solution:
    def subsetsWithDup(self, nums: list[int]) -> list[list[int]]:
        def dfs(i):
            if len(subset)>1 and subset not in ans:
                ans.append(subset.copy())
            if i ==  len(nums):
                return

            while i < len(nums) : # like at first dfs , we will choose between nums elements (don't consider duplicated)
                if [nums[i]] not in ans :
                    ans.append([nums[i]])
                subset.append(nums[i])
                dfs(i+1)
                subset.pop() 
                i+=1
        nums=sorted(nums)
        subset=[]
        ans=[[]]
        dfs(0)
        return ans      

print(Solution().subsetsWithDup([[4,4,4,1,4]]))    