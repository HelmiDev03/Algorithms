class Solution:
    def permute(self, nums: list[int]) -> list[list[int]]:
        def search (visited,perm,answer):
            if len (perm) == len(nums):
                answer.append(perm.copy())
                return 
            for i in range(len(nums)):
                if visited[i] == 1:
                    continue
                visited[i]=1
                perm.append(nums[i])
                search(visited,perm,answer)        
                visited[i]=0
                perm.pop()


        visited=[0]*len(nums)
        answer=[]
        perm=[]
        search(visited,perm,answer)
        return answer    
        


print(Solution().permute([1,2,3]))        