import math
def evaluate_operations(op):
    result = []
    x = 1

    for char in op:
        if char == '*':
            x *= 2
        elif char == '/':
            x //= 2
        result.append(x)

    return result
final=[]
t=int(input())
for tour in range (t):
    longofop,nbq=list( map(int, input().split()[:2]))
    op=input()
    summ=0
    lindice=len(op)
    i=0
    check=False
    while i < len(op) :
        if op[i]=="*":
            summ+=1  
        else:
            summ+=-1
        if  summ<0 and not check:
            lindice=i-1
            check=True
        i+=1        
    listofnum=evaluate_operations(op)    
    for query in range(nbq):
        r,l=list( map(int, input().split()[:2]))
        
        if l -1<lindice:
            final.append(math.log2(max(listofnum[r-1:l]))+1)
        else:
            final.append(math.log2(max(listofnum[r-1:lindice+1]))+2)
            
for index in final:
    print(int(index))    
