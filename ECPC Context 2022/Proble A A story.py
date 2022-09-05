t=int(input())
final=[]
for tour in range(t):
    n=int(input())
    x=int(input())
    matrix=list()
    row=column=n+1 
    copy=[]
    for i in range (row):
        col=[]
        for y in range (column):
            col.append("")
        matrix.append(col)    
    for i in range(n+1):
        copy.append((str(x))[i])
    a=0        
    for i in range(row):
        minimum=min(copy)
        matrix[i][0]=minimum
        copy.remove(minimum)
        matrix[i][column-1]=int(str(x)[a])
        a+=1
    y=1 
    for i in range(1,row):
        if matrix[i][column-1]:
            matrix[0][y]=matrix[i][column-1]
            y+=1
    output=""
    y=1 
    for i in range(column-1):
        output+=str(matrix[0][y])
        y+=1 
    final.append(output)
for index in final:
    print(int(index))