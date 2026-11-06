from collections import defaultdict
class Solution:
    def findRedundantConnection(self, edges):

        def isThereAlreadyExistingPath(u,target):
            if u==target:
                return True
            visited[u]=1
            for nei in graph[u]:
                if not visited[nei] : 
                    if isThereAlreadyExistingPath(nei, target):
                        return True
            return False    






        graph = defaultdict(list)  
        n=len(edges)
        visited=[0]*n
        for u,v in edges :
            if u-1 in graph and v-1 in graph  and isThereAlreadyExistingPath(u-1,v-1):
                return [u,v]
            graph[u-1].append(v-1)
            graph[v-1].append(u-1)   
            visited=[0]*n  
              


print(Solution().findRedundantConnection([[30,44],[34,47],[22,32],[35,44],[26,36],[2,15],[38,41],[28,35],[24,37],[14,49],[44,45],[11,50],[20,39],[7,39],[19,22],[3,17],[15,25],[1,39],[26,40],[5,14],[6,23],[5,6],[31,48],[13,22],[41,44],[10,19],[12,41],[1,12],[3,14],[40,50],[19,37],[16,26],[7,25],[22,33],[21,27],[9,50],[24,42],[43,46],[21,47],[29,40],[31,34],[9,31],[14,31],[5,48],[3,18],[4,19],[8,17],[38,46],[35,37],[17,43]]))