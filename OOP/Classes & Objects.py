import random
#from directory import class
#from directory
class Employee:
    def __init__(self, name, age, num, is_manager):
        self.name = name
        self.age = age
        self.num = num
        self.is_manager = is_manager

    def scan_employee(self, index):
        print("bonjour employee num " + str(index))
        self.name = input("donner votre nom ")
        self.age = int(input("donner votre age "))
        self.is_manager = True
        self.num = random.randint(0, 100)
        return self

    def print_employee(self):
        print("Voici les cordonné de l'employé numero  " + str(self.num))
        print("Name: " + self.name)
        print("Age: " + str(self.age))
        print("IS_Manager= " + str(self.is_manager))


nb_employee = int(input("donner le nb d employee "))
while nb_employee <= 0:
    print("ce parametre ne peut pas etre negative ", end="=>")
    nb_employee = int(input("donner de nouveau en respectant les regles "))
list_employee = [None] * nb_employee
i = 0
for index in range(1, nb_employee + 1):
    p = Employee("", 0, 0, False)
    list_employee[++i] = p.scan_employee(index)
print(list_employee)#mochkla