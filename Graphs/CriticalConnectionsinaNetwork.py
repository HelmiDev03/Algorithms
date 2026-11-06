from collections import defaultdict
class Solution:
    def criticalConnections(self, n: int, connections: list[list[int]]) -> list[list[int]]:

        def isGraphconnected():
            def dfs(node):
                visited[node]=1
                for nei in graph[node]:
                    if (not(critical[0]==node and critical[1]==nei) and not((critical[1]==node and critical[0]==nei)) )  and not visited[nei]:
                        dfs(nei)

            visited=[0]*n
            dfs(0)
            if 0 in visited:
                return False
            return True
   

        graph = defaultdict(list)  
        for u,v in connections :
            graph[u].append(v)
            graph[v].append(u)   
        ans=[]    
        for  critical in connections :
            if not isGraphconnected() :
                ans.append(critical)
        return ans        


              


print(Solution().criticalConnections(4,[[0,1],[1,2],[2,0],[1,3]]))