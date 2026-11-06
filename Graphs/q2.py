import os

# Gets the folder where your script is saved
script_dir = os.path.dirname(os.path.abspath(__file__))
file_path = os.path.join(script_dir, "input.txt")

from collections import defaultdict
graph =defaultdict(list)

with open(file_path, "r") as f:
    lines = f.read()

lines=lines.split('\n')
print(lines)
n,m,q = map(int, lines[0].split())
for i in lines[1:m+1]:
    u,v = map(int , i.split())
    graph[u].append(v)


print(graph)

queries=" ".join(lines[m+1:])  

queries = [int(i) for i in queries.split()]






     


def topAncetor(node):
    visited.add(node)
    recStack.append(node)
    for nei in graph[node]:
        if nei not in visited :
            topAncetor(nei)
    ancetor=recStack[0]
    an[node]=ancetor
    recStack.pop()        






visited = set()
recStack=[]
an={}
for node in list(graph):
    if node not in visited :
        topAncetor(node)
for q in queries  :
    print(an[q])

