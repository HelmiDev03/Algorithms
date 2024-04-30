def merge(new,*files):
    l=[i.readlines() for i in files]    
    for i in l :
        new.writelines(i)

file1=open("a.txt","r")
file2=open("b.txt",mode="r")
file3=open("c.txt",mode="r")
new=open("new.txt","w")
merge(new,file1,file2,file3)
