t=int(input())
mx=[]
for tour in range (t):
    n=int(input())
    a=list( map(int, input().split()[:n]))
    b=list( map(int, input().split()[:n]))
    copya=a
    copyb=b[-1:] + b[:-1]    
    maxindex=[]
    check=0
    for i in range(n): #testing by rotating a
        for x in range (n):
            if copya[x] % b[x] ==0:
                check+=1
        maxindex.append(check)   
        copya=copya[-1:] + copya[:-1] 
        check=0 
      
    for i in range(n-1): #testing by rotating b
        for x in range (n):
            if a[x] % copyb[x] ==0:
                check+=1
        maxindex.append(check)   
        copyb=copyb[-1:] + copyb[:-1] 
        check=0 
    mx.append(max(maxindex))    
for index in mx:
    print(index)