class BT_Node:
    def __init__(self, data,row,column):
        self.data = data
        self.left = None
        self.right = None
        self.row=row
        self.column=column

    def __str__(self):
        return f'<{self.data}, {self.left}, {self.right}>'

    def build_binary_tree(values, index):
        if len(values) == 0:
            raise Exception('Node list is empty')

        if index > len(values) - 1:
            raise Exception('Index out of range')
        root = BT_Node(values[index],0,0)
        if 2*index+1 < len(values):
            root.left = BT_Node.build_binary_tree(values, 2*index+1)
        if 2*index+2 < len(values):
            root.right = BT_Node.build_binary_tree(values, 2*index+2)

        return root
    
class Solution:
    firstroot=0
    def add_position(root,x,y):
        if root:
            root.row=x
            root.column=y
            if x==0 and y==0:
                Solution.firstroot=root
            Solution.add_position(root.right,x+1,y+1)  
            Solution.add_position(root.left,x+1,y-1)
             
    def check_left(root,listleft:list):
        if root:
            Solution.check_left(root.left,listleft)
            indice=root.column
            l=[]
            Solution.add_list_left(Solution.firstroot,indice,l)    
            listleft.append(l)
            
    def add_list_left(root,indice,l):#check occurance of indice
        if root:
            if root.column==indice:
                l.append(root.data)
            
            Solution.add_list_left(root.left,indice,l)
            Solution.add_list_left(root.right,indice,l)
            
    def check_right(root,listright:list):
        if root:
            Solution.check_right(root.right,listright)
            indice=root.column
            l=[]
            Solution.add_list_right(Solution.firstroot,indice,l)    
            listright.append(l)
            
         
    def add_list_right(root,indice,l):#check occurance of indice
        if root:
            Solution.add_list_left(root.right,indice,l) 
            Solution.add_list_left(root.left,indice,l)
            if root.column==indice:
                l.append(root.data)
                
    @staticmethod
    def verticalTraversal(lst:list):
        root=BT_Node.build_binary_tree(lst,0)
        Solution.add_position(root,0,0)
        listleft=[]
        Solution.check_left(Solution.firstroot,listleft)
        listright=[]
        Solution.check_right(Solution.firstroot,listright)
        listleft=listleft+listright
        for index in listleft:
            if None in index:
                index.remove(None)
                if index==[]:
                    listleft.remove(index)
        listleft.pop()            
        return listleft
        
print(Solution.verticalTraversal([3,9,20,None,None,15,7]))
