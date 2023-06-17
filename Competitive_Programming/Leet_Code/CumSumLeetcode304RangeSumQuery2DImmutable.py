class NumMatrix:

    def __init__(self, matrix ):
        self.m=matrix[0]
        self.check=matrix[1:]

    def sumRegion(self, row1: int, col1: int, row2: int, col2: int) -> int:
        s=0
        x1=col1
        y1=row1
        x2=col2
        y2=row2
        while y1<=y2:
            while x1<= x2:
                s+=self.m[y1][x1]
                x1+=1
            x1=col1
            y1+=1
        return s 
    def somme(self):
        w=["null"]
        for i in self.check:
            w.append(self.sumRegion(i[0],i[1],i[2],i[3]))
        return w    
        
m=NumMatrix([[[3, 0, 1, 4, 2], [5, 6, 3, 2, 1], [1, 2, 0, 1, 5], [4, 1, 0, 1, 7], [1, 0, 3, 0, 5]], [2, 1, 4, 3], [1, 1, 2, 2], [1, 2, 2, 4]])   
print(m.somme())
