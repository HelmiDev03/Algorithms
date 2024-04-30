'''
..A class method is a method that is bound to the class
and not the object of the class.
..They have the access to the state of the class as it takes 
a class parameter that points to the class and not the object instance.
..It can modify a class state that would apply across all the instances of the class. For example, it can modify a class variable that will be applicable to all the instances.
'''
from datetime import date


class Student:

    def __init__(self, name, age=0, ):  # include objects(instance) attributes
        self.__name = name  # we use __ to make it private
        self.__age = age

    def describe_student(self):
        print(f"my name is {self.__name} and my age is {int(self.__age)} ")

    @classmethod
    def initfrombirthyear(cls, name, year):
        return cls(name, date.today().year - year)

    @classmethod
    def initfromdoubleage(cls, name, doubleage):
        return cls(name, doubleage / 2)

    @classmethod
    def inidirectly(cls, name, age):
        return cls(name, age)


class pizza:
    def __init__(self, ingredients):
        self.__ingredients = ingredients

    def describe_pizza(self):
        print(f"this piza is made with {self.__ingredients} ")

    @classmethod
    def margherita(cls):
        return cls(["mozarella","sauce"])
    @classmethod
    def veg(cls):
        return cls(["olives","mushroms","onions"])
    @classmethod
    def spicy(cls,check):
        if check==True:
            return cls(["hrissa","felfel"])
        else:
            return cls(["chockolat","halwa"])

'''
    st1 = Student.initfrombirthyear("helmi", 2003)

    st1.describe_student()
    st2 = Student.initfromdoubleage("ahmed", 40)
    st2.describe_student()
    st3 = Student.inidirectly("asma", 40)
    st3.describe_student()
'''
piza1=pizza(["chicken"])
piza1.describe_pizza()
piza2=pizza.margherita()
piza2.describe_pizza()
piza3=pizza.veg()
piza3.describe_pizza()
piza4=pizza.spicy(False)
piza4.describe_pizza()
print(piza4)
