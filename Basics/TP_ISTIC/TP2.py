import random

from fct_tp_istic import check
from fct_tp_istic import sys
from fct_tp_istic import pyramide
from fct_tp_istic import Getting_Lower_Number
from random import randint
from fct_tp_istic import Number_Founded
from fct_tp_istic import Setting_New_Game
from fct_tp_istic import Getting_Higher_Number
from fct_tp_istic import Getting_Number

# EX1
'''
num=int(input("donner un etier pour verifier : "))
if (check(num)==True):
    print(f"{num} est totalemnt divisible par 2 ")
else:
    print(f"{num} n'est pas totalemnt divisible par 2 ")
'''
# Ex2
# pyramide(1,10)
# Ex4
# for i in range(1,11):
#   print(f"{i}", end=" ")
# ex3
'''
num = random.randint(1, 9)
Try = 0
nb_game = 1
test = True  # juste pour un bel affichage
print(f"..........GAME NUMBER {nb_game}..........")
x=Getting_Number()
print(x)
while x != "exit":
    Try += 1
    if (Try == 0 and nb_game != 1):
        print(f"..........Jeu numéro {nb_game}..........")
    if int(x) == num:
        Number_Founded(Try)
        Try = 0
        num = random.randint(1, 9)
        x = input(("Pour une autre jeu , taper continue, sinon taper exit pour quitter "))
        test = False
        nb_game += 1
        if (x == "continue"):
            print(f"..........GAME NUMBER {nb_game}..........")
            x=Setting_New_Game()
        else:
            while x != "continue" and x!= "exit":
                x=input("taper soit continue ou exit ")
            if (x == "continue"):
                print(f"..........GAME NUMBER {nb_game}..........")
                x = Setting_New_Game()

    elif (int(x) > num):
        x = Getting_Lower_Number()
    else:
        x = Getting_Higher_Number()
'''
# ex5
'''
a = 0
b = 10
while a < b:
    print(f"{a}", end = "/")
    a += 1
print("\n")
while b != 0:
    if (b % 2 == 0):
        print(f"{b}", end="/")
    b -= 1
'''
lst=list() #inir liste vide
x=int(input("donne un entier strictement positive "))
while(x<=0):
    x=int(input("entier positive svp : "))
while x!=1:
    if x%2 ==0 :
        lst.append(int(x/2))
        x=x/2
    else:
        lst.append(int(x*3+1))
        x=3*x+1
print(f"La Suite de Syracuse d {x} est {lst}", )
