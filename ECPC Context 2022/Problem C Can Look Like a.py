t=int(input())
mx=[]
for tour in range (t):
    nb=int(input())
    power=list( map(int, input().split()[:nb]))
    pt=0
    for index in power:
        if index > 0:
            pt+=index
            i=0
            while(i<len(power)):
                power[i]-=index
                i+=1  
    mx.append(pt)
for index in mx:
    print(index)