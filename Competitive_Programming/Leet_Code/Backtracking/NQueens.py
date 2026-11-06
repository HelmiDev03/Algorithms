class Solution:
    def solveNQueens(self, n: int) -> list[list[str]]:
        def search(lines:list[int],cols:list[int],l:list[list[int]],ans,n:int):
            if len(l)==n:
                ans.append(l.copy())
                return 
            else:
                row = len(l) 
                for col in range(n):
                    # check if the column and diagonals are safe
                    if col not in cols and all(abs(row - r) != abs(col - c) for r, c in l):
                        l.append([row, col])
                        cols.append(col)
                        search(lines, cols, l, ans, n)
                        l.pop()
                        cols.pop()


                    
                                                        
        lines=[]
        cols=[]
        l=[]
        ans=[]
        search(lines,cols,l,ans,n)
        return [['.'*c + 'Q' + '.'*(n-c-1) for r,c in solution] for solution in ans]
        

print(Solution().solveNQueens(9))        