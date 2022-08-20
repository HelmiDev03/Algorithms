class Student:  # instance methode
    nb_student = 0  # class attribute

    def __init__(self, name, age=0, courses="none"):  # include objects(instance) attributes
        self.__name = name  # we use __ to make it private
        self.__age = age
        self.__courses = courses
        Student.nb_student += 1

    def get_name(self):
        print(self.__name)

    def set_name(self, new_name):
        self.__name = new_name

    def get_age(self):
        print(self.__age)

    def set_age(self, new_age):
        self.__age = new_age

    def describe_student(self):
        print(f"my name is {self.__name} and my age is {self.__age} and l take {self.__courses} as courses")

    # print("my name is {} and my age is {}".format(self.name , self.age))
    def is_old(self, num):
        if self.__age > num:
            print(f"{self.__name} is old")
        else:
            print(f"{self.__name} is not old")


st1 = Student("helmi", 23, "cs")
st1.age = 50  # puisque les attributs sont privéés , on peut pas y acceder maintent avec le .
print(st1.get_age())
st1.describe_student()
print(st1.nb_student)
'''
describe_student()
st1.is_old(50)
print(hex(id(st1))) #id to get memory adree of st1
print(f"number of instance now is {st1.nb_student} ")
'''
