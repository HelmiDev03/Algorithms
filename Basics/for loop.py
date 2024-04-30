# for i in string_name or list or tuple or .. to parcour the data type caracter by caracter
# for i in range(x) to parcour from 0 to (x-1)
# for i in range(start,x-1) to parcour from start to (x-1)
chaine = input("donner une chaine ")
# we will check occurance of each number in that string
n = len(chaine)  # Size of the List
lst = [None] * n  # initilaizing our list by none
j = 0
for i in chaine: #copie de la chaine en une liste
    lst[j] = i
    j += 1
j = 0
while lst: #tant que la liste est non vide
    ch = lst[j] #premier caratctered de la liste
    print("le nombre d'occurance de " + ch + " est egale a " + str(lst.count(ch)))#compte son nb d oc dans la lsite
    while lst.count(ch) != 0:#suppremer ce caractere de la lsiet apres avoir compter deja son nb d oc
        lst.remove(ch)
