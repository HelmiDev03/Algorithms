t=int(input())
final=[]
for tour in range (t):
    n,m,a=list( map(int, input().split()[:3]))
    if  a <= n - m:
        final.append(a)
    else:
        final.append(0)
for index in final:
    print(index)   