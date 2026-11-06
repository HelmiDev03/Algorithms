class Solution:
    def combinationSum2(self, candidates: list[int], target: int) -> list[list[int]]:
        def search ( comb  ,current_sum,index):
            if current_sum == target :
                ans.append(comb.copy())
                return 
            if current_sum > target or index == len(candidates):
                return     

            comb.append(candidates[index])
            search (comb ,current_sum+candidates[index],index+1)
            comb.pop()    

            while index<=len(candidates)-2 and  candidates[index]==candidates[index+1]:
                index+=1
            search(comb, current_sum, index + 1)



        candidates=sorted(candidates)
        comb=[]
        ans=[]
        current_sum=0
        index=0
        search (comb , current_sum,index)
        return ans 

print(Solution().combinationSum2([10,1,2,7,6,1,5],8))