def next(x):
    divisor = x // 2  # Start with the largest possible divisor
    
    # Iterate from x//2 down to 1
    while divisor > 1:
        if x % divisor == 0:
            return divisor
        divisor -= 1
    
    return 1  # Return 1 if no divisor other than x itself is found
final=[]
counter=0
check=False
t=int(input())
for tour in range (t):
    longe=int(input())
    a=list( map(int, input().split()[:longe]))
    b=list( map(int, input().split()[:longe]))
    for i,j in zip (a,b):
        while i!=j :
            counter+=1
            if (i<j):
                i, j = j, i
            i=next(i)
        
    final.append(counter)
    counter=0
for index in final:
    print(index) 
