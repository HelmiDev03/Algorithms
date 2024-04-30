import sys

sys.setrecursionlimit(100000)
from random import randint
from random import shuffle


class rami:
  couleurs = ["Pique", "Trefle", "Carreau", "Coeur"]
  valeurs = ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10","As","Valet", "Dame", "Roi"]
  @staticmethod
  def generate_list()->list:
    new_list=[]
    for i in rami.valeurs:
        for j in rami.couleurs:
            new_list.append(i+j)
    return new_list
  @staticmethod
  def melange(liste:list)->list:
        shuffle(liste)
        return liste 

        
        




  



class stack:
    def __init__(self, lst:list):
        self.pile = lst

    @classmethod
    def asna3(cls,*element):
        lst = []
        for i in element:
          lst.append(i)

        return cls(lst)

    def __str__(self):
        ch1=""
        return ch1.join(self.pile)

    def empile(self:list,element):
        self.append(element)
    def depile(self:list,element):
        self.remove(element)

def factorielle(x):
    if x <= 2:
        return x
    else:
        return x * factorielle(x - 1)


def check(x):
    if x % 2 != 0:
        if x > 2:
            return False
        else:
            return True
    else:
        return True and check(x / 2)


def pyramide(nb_etoile, max_num_line):
    if nb_etoile <= max_num_line:
        index = 0
        while (index < nb_etoile):
            print("*", end="")
            index += 1
        print("", end='\n')
        nb_etoile += 1
        pyramide(nb_etoile, max_num_line)


def Somme_diviseur(x):
    s = 0
    for index in range(1, int(x / 2) + 1):
        if x % index == 0:
            s += index
    return s


def Cheking_num(x):
    while ((int(x) > 9 or int(x) < 1)):
        print(" votre numéero doit etre entre 1 et 9")
        x = (input("donner un autre chiffre "))
    return x


def Getting_Number():
    x = int(input("donner votre prediction (doit etre entre 1 et 9) "))
    if not isinstance(x, str):
        return Cheking_num(x)


def Setting_New_Game():
    x = input("donner votre prediction (doit etre entre 1 et 9) ")
    return Cheking_num(x)


def Number_Founded(Try):
    print("Tout à fait , Bien ")
    print(f"Vous l'avez trouvé en {Try} tentative ")


def Getting_Lower_Number():
    x = input("essayer une autre fois avec un chiffre plus Petit ")
    return Cheking_num(x)


def Getting_Higher_Number():
    x = input("essayer une autre fois avec un chiffre plus Grand ")
    return Cheking_num(x)


def Somme_diviseur(x):
    s = 0
    for index in range(1, int(x / 2) + 1):
        if x % index == 0:
            s += index
    return s


def puissance(num, p):
    s = 1
    for index in range(p):
        s *= num
    return s


def appartient(x: str, s: set):
    for index in s:
        if index == x:
            return True
    return False
    # check 12


def compterMots(s: str, d: dict) -> dict:
    # we will check occurance of each number in that string
    n = len(s)  # Size of the List
    lst = [None] * n  # initilaizing our list by none
    j = 0
    for i in s:  # copie de la chaine en une liste
        lst[j] = i
        j += 1
    j = 0
    while lst:  # tant que la liste est non vide
        ch = lst[j]  # premier caratcteree de la liste
        nb_ch = lst.count(ch)
        d.update({ch: nb_ch})
        # print(
        # "le nombre d'occurance de " + ch + " est egale a " + str(lst.count(ch)))  # compte son nb d oc dans la lsite
        while lst.count(ch) != 0:  # suppremer ce caractere de la lsiet apres avoir compter deja son nb d oc
            lst.remove(ch)
    return d


'''
    return true and check 6
    check6
    return true and ckeck 3
    check3
    return fasle car 3mod2 differet de 0 et 3>2
    ==>check 12 return true and true and false =false
    '''
