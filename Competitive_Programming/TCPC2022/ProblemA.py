final=[]
t=int(input())
for tour in range (t):
    a=list( map(int, input().split()[:2]))
    if a[0] > a[1]:
        final.append(0)
    else:
       final.append(a[1] - a[0])
for index in final:
    print(index)       