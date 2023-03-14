# get pi value
import math

math.pi


def check(num, before_last, last):
    if (last == before_last):
        return False
    elif num < 10 and num == last:
        return True
    else:
        old = last
        last=before_last
        before_last= num % 10
        if (before_last == old):
            return True and check(num/10, before_last, last)
        else:
            return False


# prog_princ
ok = False
while (not ok):
    n = int(input("donner un entier qui contient au mois deux chiffre "))
    while (len(str(n)) < 2):
        print("ce nombre contient un seul chiffre ")
        print("saisir de nouveau ")
        n = int(input("donner un entier qui contient au mois deux chiffre "))
    copy = n
    x = int (copy % 10)
    y = int( (copy/10) %10 )
    print(y, end="  ")
    print(x)
    if check(n, y, x) == True:
        print(str(n) + " est un nombre valide", end="==>")
        ok = True
    else:
        print(str(n) + " est un nombre invalide")
        print("merci de nous donner un nouveau nombre en respectant les régles")
