final=[]
n=int(input())
listrec=[]
for i in range (n):
    a,b,c,d=list( map(int, input().split()[:4]))
    listrec.append([a,b,c,d])
q=int(input())
for i in range (q):
    count=0
    x,y=list( map(int, input().split()[:2]))
    for rec in listrec:
        if rec[2]<=x and rec[3] <=y :
            count+=1
            
    final.append(count)

for ans in final :
    print(ans)

