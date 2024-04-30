class Member:
    not_allowed_name = {"fuck", "shit", "hell"}  # class attribute
    num_users = 0

    def __init__(self, name="", age=0, gender="none"):  # it can include instance attribute if it snecesser
        # this dudnder function (constructor) create classe instance
        # at , every creation of instance this dunder will be executed
        self.name = name
        self.age = age
        self.gender = gender
        Member.num_users += 1
        print(f"{self.name} is added as new member")

    def __str__(self):  # a dunder function that will be executed when we print(instance)
        return (f"Name={self.name}  ,  Age={self.age}")

    def Get_Name(self):  # instance methode

        if self.name in Member.not_allowed_name:
            raise ValueError(f"{self.name} is not allowed to use")
        else:
            if self.gender == "men":
                return f" Hello Mr  {self.name}"
            elif self.gender == "women":
                return f"Hello Mrs {self.name} "
            else:
                return "error in gender"

    def Get_age(self):  # instance methode

        print(f"Age= {self.age}")

    def Get_allinfo(self):  # instance methode
        print(self.Get_Name())
        Member.Get_age(self)
    @classmethod
    def Add_Not_allowed_Name(cls,new_element):
        cls.not_allowed_name.add(new_element)
        print(Member.not_allowed_name)

    @classmethod
    def show_users_account(cls):
        print(f"we have {Member.num_users} users")

    @classmethod
    def Create_Member(cls, name, age, gender):
        ok = True
        if name in cls.not_allowed_name:
            print(f"you can not use {name} as  name  ")
            ok = False
        if gender != "men" and gender != "women":
            print("invalid gender ")
            ok = False
        if age <= 0:
            print("invalid age ")
            ok = False
        if ok:
            member = cls(name, age, gender)
            return member
        else:
            print("erreur creation suite a un erreur d info")
            return ok

    @staticmethod
    def Yalla(a):  # it s not obligatory to have self or cls as parameter
        print(f"hi {a.name}")


m1 = Member("helmi", 23, "women")
# print(m1)
# Member.Get_allinfo(m1)
# print(dir(Member)) #to get instance methode
# print(f"we have currently {Member.num_users} users")
m2 = Member.Create_Member("salma", 20, "men")
print(m2.__class__)  # print the class of m2
#print(m2)
Member.Add_Not_allowed_Name("bhim")
m3=Member.Create_Member("bhim",-90,"la9a")
