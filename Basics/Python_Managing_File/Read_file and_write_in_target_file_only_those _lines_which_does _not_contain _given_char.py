def fct(file,dest,char):
    l=file.readlines()
    for j in l:
        if not j.count(char):
            dest.write(j)
file=open("a.txt","r")
dest=open("dest.txt","w")
fct(file,dest,"a")
