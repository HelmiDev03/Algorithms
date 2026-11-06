from collections import defaultdict
graph = defaultdict(list)

# Adding edges
edges = [(1,2) , ( 2,3) , (3,4), (4,5)  ]
for u, v in edges:
    graph[u].append(v)

print(graph)

def has_cycle(graph):
    

    def dfs(node,parent) :
        visited.add(node)
        print(node)
        for nei in graph.get(node,[]):
            if nei not in visited:
                if dfs(nei,node):
                    return True
            elif nei != parent : 
                return True    
        return False
    

    visited =set()
    for node in graph:
        if node not in visited:
            if dfs(node,None):
                return True
    return False        

        


print(has_cycle(graph))