def sommediviseur(n):
    somme = 0
    for i in range(1, n//2):
        if n % i == 0:
            somme += i
    return somme
'''file=open("pair.txt","w")
for i in range(101):
    file.write(str(i)+"  ") if i%2==0 else None
    '''
'''
file=open("notes.txt","r")
chaine=file.read()
print(chaine)
l=chaine.split(",")
print(l)
s=0
for i in l:
    s+=float(i)
print(s/len(chaine))
'''
file=open("pair.txt","a")
file.write("\n")
for i in range(1,1001):
    if sommediviseur(i)==i:
        file.write(str(i)+"  ")