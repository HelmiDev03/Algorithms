from collections import defaultdict
import copy 
class Solution:
    def findRedundantConnection(self, edges):
        def hasCycle (graph):
            def dfs(node , parent):
                visited[node]=1
                for nei in graph[node]:
                    if not visited[nei] :
                        if dfs(nei,node):
                            return True
                    elif nei != parent :
                        return True
                return False        




            n=len(edges)
            visited=[0]*n    
            for node in graph:
                if not visited[node] and dfs(node,None):
                    return True
            return False    






        graph = defaultdict(list)  
        for edge in edges :
            graph[edge[0]-1].append(edge[1]-1)
            graph[edge[1]-1].append(edge[0]-1)
        ans=[]
        for removedEdge in edges:
            newgraph = copy.deepcopy(graph)
            newgraph[removedEdge[0]-1].remove(removedEdge[1]-1)
            newgraph[removedEdge[1]-1].remove(removedEdge[0]-1)
            if not hasCycle(newgraph):
                ans.append(removedEdge)
        return ans[-1]    


print(Solution().findRedundantConnection([[30,44],[34,47],[22,32],[35,44],[26,36],[2,15],[38,41],[28,35],[24,37],[14,49],[44,45],[11,50],[20,39],[7,39],[19,22],[3,17],[15,25],[1,39],[26,40],[5,14],[6,23],[5,6],[31,48],[13,22],[41,44],[10,19],[12,41],[1,12],[3,14],[40,50],[19,37],[16,26],[7,25],[22,33],[21,27],[9,50],[24,42],[43,46],[21,47],[29,40],[31,34],[9,31],[14,31],[5,48],[3,18],[4,19],[8,17],[38,46],[35,37],[17,43]]))