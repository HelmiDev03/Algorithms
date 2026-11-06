class Solution:
    def combine(self, n: int, k: int) -> list[list[int]]:
        
        def dfs(comb,ans,i) :
            if len(comb)==k:
                ans.append(comb.copy())
                return
            

            while i < len(nums):
                if not visited[i]:
                    comb.append(nums[i])
                    visited[i]=1
                    dfs(comb,ans,i+1)
                    comb.pop()
                    visited[i]=0
                    i+=1
                else:
                    dfs(comb,ans,i+1)          










        nums=range(1,n+1)
        visited=[0]*len(nums)
        comb=[]
        ans=[]
        dfs(comb,ans,0)
        return ans
    
print(Solution().combine(4,2))