def SommeFrom_iTo_j(i,j):
    if i==j:
        return i
    else:
        return i +SommeFrom_iTo_j(i+1,j)
    # for 9 for exemple whe have (2,4 ) , (4,5 )    
t=int(input())
l=[0]*t
for tour in range(t) :
    x=int(input())
    for i in range(1,x//2 +1):
        for j in range(i+1 ,x+1):
            if SommeFrom_iTo_j(i,j) ==x :
                l[tour] = (i,j)
                break
        if l[tour]:
            break 
for i in range(t):
    if l[i]:
        print (str(l[i][0]) + " " + str(l[i][1]))
    else:
        print(-1)
