def fct(file,char):
    l=file.read().split()
    for i in l:
        if i[-1]==char:
            print(i)
file=open("a.txt","r")
fct(file,"e")
