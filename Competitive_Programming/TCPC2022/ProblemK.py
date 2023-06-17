ListOfRelationBetweenDigitFrom_0_To_9 = [
    [[4, 0], [2, 1], [2, 1], [3, 1], [2, 1], [1, 1], [3, 1], [0, 1], [0, 1]],
    [[2, 5], [0, 3], [1, 3], [1, 4], [0, 4], [0, 1], [0, 5], [0, 4]],
    [[1, 1], [3, 2], [2, 2], [1, 2], [3, 1], [0, 2], [1, 2]],
    [[2, 1], [1, 1], [1, 2], [2, 0], [0, 2], [0, 1]],
    [[1, 2], [1, 3], [2, 1], [0, 3], [0, 2]],
    [[0, 1], [3, 1], [0, 2], [0, 1]],
    [[4, 1], [0, 1], [1, 1]],
    [[0, 4], [0, 3]],
    [[1, 0]]
]
t=int(input())      
final=["YES"] *t
for tour in range(t):
    n,x,y =list( map(int, input().split()[:3]))
    n1=input() 
    n2=input()
    for i,j in zip(n1,n2):
        if i!=j :
            if int(i) < int( j):
                relation=ListOfRelationBetweenDigitFrom_0_To_9[int(i)] [ int (j )-int( i) -1 ]
            else:
                relation=ListOfRelationBetweenDigitFrom_0_To_9[int(j)] [int( i )-int( j) -1 ]
            if x >= relation [0] and y >= relation[1] :
                x-=relation[0]
                y-=relation[1]
            elif x >= relation[1] and y >= relation[0] :
                x-=relation[1]
                y-=relation[0]
            else:
                final[tour]="NO"
for ans in final:
    print(ans)
