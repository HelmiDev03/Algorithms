t=int(input())
l=[]*t
for tour in range(t) :
    n,x=list( map(int, input().split()[:2]))
    tmp=""
    ListOfHeight=list( map(int, input().split()[:n]))
    for height in ListOfHeight:
        if x > height :
           tmp+="1"+" "
        else:
            tmp+="0"+" "
    l.append(tmp)
for ans in l:
    print(ans)  
