class Solution:
        @staticmethod
        def convert(string: str, numRows: int) -> str:
            my_list =list()
            column=7
            for i in range (numRows) :
                   col=[]
                   for j in range (column):
                      col.append('')
                   my_list.append(col)     
            x=y=0
            output=''
            while string != "":
                if x==0:
                      while x<=numRows-1 and string != "":
                         my_list[x][y]=string[0]
                         string=string[1:]
                         x+=1
                      x-=2                    
                else:
                      while x>0 and string!="":
                          my_list[x][y+1]=string[0]
                          string=string[1:]
                          x-=1
                          y+=1
                      y+=1   
            for x in range (numRows):
                 for y in range (column):
                    output+=my_list[x][y]  
           
            return output 
print(Solution.convert("PAYPALISHIRING",3))           
 