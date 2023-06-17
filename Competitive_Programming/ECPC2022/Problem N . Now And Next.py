def countX(lst, x):
    count = 0
    for ele in lst:
        if ele == x:
            count = count + 1
    return count     
check=False
t=int(input())
mx=["YES"]*t
for tour in range (t):
    nb=int(input())
    color=list( map(int, input().split()[:nb]))
    x=0
    length=len(color)
    while x<length-1:
        if countX(color,color[x]) == 1:
            color.remove(color[x])
            check=True
            length-=1
        else:
            check=False
        if not check:    
            x+=1    
    if color:
        x=0
        while x<length-1:
            if color[x]!=color[x+1]:
                mx[tour]="NO"
                break;
            x+=2    
for index in mx:
    print(index)
                