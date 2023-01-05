def commun_words(*files):
    l=[i.readlines() for i in files] 
    # l is a list that contains list that conatins each line of each file
    new=[]
    for i in l: #i  is a list that contains all lines of each file
        for j in i: # j is a string included in each single line of each file with the \n
            for k in j.split():
                new.append(k)
    return new
   
        
file1=open("a.txt","r")
file2=open("b.txt",mode="r")
file3=open("c.txt",mode="r")
print("Commun Words Are : ")
new=commun_words(file1,file2,file3)
check=[""]*len(new)
for i in new:
        if new.count(i)>1 and i not in check :
            check.append(i)
            print(i)
