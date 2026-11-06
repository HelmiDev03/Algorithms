from collections import defaultdict
graph = defaultdict(list)

# Adding edges
edges = [(1,2) , ( 1,3) , (2,3), (1,4)  , (2,5) , (2,6) , (9,10),(10,9)]
for u, v in edges:
    graph[u].append(v)

print(graph)

def has_cycle(graph):
    

    def dfs(node) :
        visited.add(node)
        recStack.add(node)
        print(node)
        for nei in graph.get(node,[]):
            if nei in recStack :
                return True
            if nei not in visited:
                if dfs(nei):
                    return True
        recStack.remove(node)
        return False
    

    visited =set()
    recStack =set()
    for node in graph:
        if node not in visited:
            if dfs(node):
                return True
    return False        

        


print(has_cycle(graph))