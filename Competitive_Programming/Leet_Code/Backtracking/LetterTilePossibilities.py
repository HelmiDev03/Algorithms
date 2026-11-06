class Solution:
    def numTilePossibilities(self, tiles: str) -> int:
        def dfs (comb , i, ans,visitedasStart) :
            while i < len (tiles):
                if  not comb and tiles[i] in visitedasStart:
                    i+=1
                    continue
                if not visited[i]:
                    visited[i]=1
                    if not comb:
                        visitedasStart.append(tiles[i])
                    comb+=tiles[i]
                    
                    ans.add(comb)
                    dfs(comb,0,ans,visitedasStart)
                    comb=comb[0:len(comb)-1]
                    visited[i]=0   

                i+=1           
            

        comb=""
        ans=set()
        visited=[0]*len(tiles)
        visitedasStart=[]
        dfs(comb,0,ans,visitedasStart)
        return len(ans)
        
print(Solution().numTilePossibilities("AAABBCW"))      
