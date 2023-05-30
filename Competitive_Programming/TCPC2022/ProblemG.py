def rotate(s):
    if len(s) == 1:
        return s
    else:
        end=s[-1]
        temp =s[0:len(s)-1]
        return end + temp
n,x=list( map(int, input().split()[:2]))
a=input()
b=input()
for i in range(x):
    a=rotate(a)
ans=0
for i in range(len(a)):
    ans+=  a[i]!= b[i]
print(ans)    