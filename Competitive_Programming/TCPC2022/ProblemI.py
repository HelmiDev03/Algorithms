class Tree:
    def __init__(self,indice,val):
        self.val=val
        self.indice=indice
        self.fg=None
        self.fd=None

def ChangeVal(node,data):
    if node:
        node.val=data
        ChangeVal(node.fd,data)
        ChangeVal(node.fg,data)
def GetNodeByIndice(indice,ListOfRoot):
    for root in ListOfRoot:
        if root.indice==indice:
            return root
def Somme(node):
    if node:
        return node.val + Somme(node.fd) + Somme(node.fg)
    else:
        return 0
def is_sum_of_primes(x):
    def is_prime(n):
        if n <= 1:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    for i in range(2, x // 2 + 1):
        if is_prime(i) and is_prime(x - i):
            return True

    return False

        
n=int(input())  
ListOfRoot=[]
ListOfEdge=[]
ListOfQuery=[]
ListOfVal= list( map(int, input().split()[:n]))
for index, data in enumerate(ListOfVal):
        node=Tree(index+1,data)
        ListOfRoot.append(node)
for index in range (n-1):
    edge=list( map(int, input().split()[:2]))
    ListOfEdge.append(edge)
for rel in ListOfEdge:
    node=GetNodeByIndice(rel[0],ListOfRoot)
    if node.fg:
        node.fd = GetNodeByIndice(rel[1],ListOfRoot)
    else:
        node.fg = GetNodeByIndice(rel[1],ListOfRoot)
      
q=int(input())
for query in range(q):
    query_ith=list( map(int, input().split()[:]))
    ListOfQuery.append(query_ith)
for query in ListOfQuery:
    if query[0] == 2:
        if is_sum_of_primes(Somme(GetNodeByIndice(query[1] , ListOfRoot))) :
            print("YES")
        else:
            print("NO")
    else:
        ChangeVal(GetNodeByIndice(query[1],ListOfRoot),query[2])

    
        
    