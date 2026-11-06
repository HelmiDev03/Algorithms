from collections import defaultdict
class Solution:
    def countPairs(self, n: int, edges) -> int:
        def dfs(node,parent):
            visited[node] = 1
            size = 1
            for nei in graph[node]:
                if not visited[nei] and nei!=parent:
                    size += dfs(nei,node)

            return size    

        
        graph = defaultdict(list)
        for i in range(n):
            graph[i]=[]
        for i in edges:
            graph[i[0]].append(i[1])
            graph[i[1]].append(i[0])
        visited=[0]*n
        nb_visited=0
        s=0
        for node in list(graph):
            if not visited[node] : 
                connectedComponents = dfs(node,None)
                s+= connectedComponents  * (n-nb_visited-connectedComponents)
                nb_visited +=connectedComponents
        return s    
 

print(Solution().countPairs(7,[[0,2],[0,5],[2,4],[1,6],[5,4]]))