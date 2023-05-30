def next(x):
    if ( x %2 ):
        return 1
    else:
        return x // 2 
    
final=[]
counter=0
check=False
t=int(input())
for tour in range (t):
    longe=int(input())
    a=list( map(int, input().split()[:longe]))
    b=list( map(int, input().split()[:longe]))
    for i,indexi in enumerate(a):
        for j,indexj in enumerate(b):
            if indexj==indexi:
                while i!=j :
                    counter+=1
                    if (i>j):
            
                        st=str(a)
                        st.replace(str(i),str(next(i)))
                        a = [int(num) for num in a]
                        i=a[indexi]
                
                    else :
               
                        st=str(b)
                        st.replace(str(j),str(next(j)))
                        b=[int(num) for num in b]
                        j=b[indexj]
                
            
        
    final.append(counter)
    counter=0
for index in final:
    print(index)  