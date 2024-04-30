from fct_tp_istic import puissance
from fct_tp_istic import appartient
from fct_tp_istic import compterMots
from fct_tp_istic import stack
from fct_tp_istic import rami

'''
def show(min: int, max: int, i: int, j: int, lst: list):
    if j < max:
        Si=Somme_diviseur(i)
        if Si!= 0:
            if Si==j and Somme_diviseur(j)==i:
                tap = (i, j)
                if lst:
                    for index in lst:
                        if (index[0] + index[1] ) != (i + j):
                            lst.append(tap)
                            print(f"({i},{j})")
                else:
                    lst.append(tap)
                    print(f"({i},{j})")

        x=i+1
        y=j+3
        show(0, max, x , y , lst)

max = int(input("donner une valeur maximale "))
lst = []
while max <= 0:
        max = int(input("la valeur maximale doit etre stricetemnt positive"))
lst = []
show(0, max, 1, 3, lst)
'''
#ex3
'''
print(puissance(2,4))
ex4 print(bin(60))
'''
#ex6
'''
X = {"a","b", "c","d" }
Y = {"s","b", "d" }
print({"a","b", "c","d" })
print( {"s","b", "d" })
if appartient("c",X):
    print("c appartient au set X")
else:
    print("c n'appartient au set X")
if appartient("a",Y):
    print("a appartient au set Y")
else:
    print("a n'appartient au set Y")

print(f"X-Y={X.difference(Y)}")
print(f"Y-X={Y.difference(X)}")
print(f"X intersect with Y={X.intersection(Y)}")
print(f"X union with Y={X.union(Y)}")
'''
#ex7
'''
ch=input("donner une chaine ")
d={}#initilaize empty dict
d=compterMots(ch,d)
print(d)
'''
'''
ex11
pile_1=stack.asna3(1,7,99,"mahmoud",69874,55)
print(pile_1)
pile_1.empile(88)
print("after adding 88")
print(pile_1)
print("after deleting mahmoud")
pile_1.depile("mahmoud")
print(pile_1)
'''
#ex13
'''
first_list=rami.generate_list()
generated_list=rami.melange(first_list)
player_1=[]
player_2=[]
player_3=[]
player_4=[] 
i=0
while i<=49:
    player_1.append(generated_list[i])
    i+=1
    player_2.append(generated_list[i])
    i+=1
    player_3.append(generated_list[i])
    i+=1
    player_4.append(generated_list[i])
print(f"player1={player_1}")  
print(f"player2={player_2}")  
print(f"player3={player_3}")  
print(f"player4={player_4}")  
'''