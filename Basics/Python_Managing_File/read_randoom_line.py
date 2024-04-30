import random
def fct(file):
    l=file.readlines()
    length=len(l)
    i=random.randint(0,length-1)
    print(l[i])  #randint(a,b) gives integer in [a,b]
file=open("a.txt","r")
fct(file)
