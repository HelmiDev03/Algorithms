import os

# Gets the folder where your script is saved
script_dir = os.path.dirname(os.path.abspath(__file__))
file_path = os.path.join(script_dir, "input.txt")

from collections import defaultdict
graph =defaultdict(list)

with open(file_path, "r") as f:
    lines = f.read()

lines=lines.split('\n')

for line in lines[:-1]:
    a, b = map(int, line.split())
    graph[a].append(b)

target,src = map(int , lines[-1].split())





def dfs(src):
    if src==target:
        return True


    visited.add(src)
    for nei in graph[src]:
        if nei not in visited:
            if dfs(nei):
                return True
    return False        

 





visited = set()
if dfs(src) :
    print("yes")
else:
    print("no")     

